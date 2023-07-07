import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
from rclpy.callback_groups import ReentrantCallbackGroup
from tf2_web_republisher.msg import TFArray
from tf2_web_republisher.srv import RepublishTFs
from tf2_web_republisher.action import TFSubscription
from geometry_msgs.msg import TransformStamped, Transform
from tf2_web_republisher_py.tf_pair import TFPair
from tf2_ros import Buffer, TransformListener, TransformException
from rclpy.executors import MultiThreadedExecutor

from typing import List
from uuid import uuid4
from time import sleep

class ClientInfo(object):
    def __init__(self,client_id:int,tf_subscriptions:List[TFPair]=[],timer=None):
        self.client_id = client_id
        self.tf_subscriptions = tf_subscriptions
        self.timer = timer

class ClientGoalInfo(ClientInfo):
    def __init__(self,handle,client_id:int,tf_subscriptions:List[TFPair]=[],timer=None):
        super(ClientGoalInfo,self).__init__(client_id,tf_subscriptions,timer)
        self.handle = handle

class ClientRequestInfo(ClientInfo):
    def __init__(self,client_id:int, node, publisher, tf_subscriptions:List[TFPair]=[],timer=None,timeout:float=10.0):
        super(ClientRequestInfo,self).__init__(client_id,tf_subscriptions,timer)
        self.publisher = publisher    
        self.timeout = timeout
        self.last_time_since_subscribers = None
        self.node = node

    def __del__(self):
        self.node.destroy_publisher(self.publisher)

class TFRepublisher(Node):
    '''
    Python port of the TFRepublisher C++ Node for ROS2
    '''
    def __init__(self):
        super(TFRepublisher,self).__init__('tf2_web_republisher')
        self.tf_transform_server = ActionServer(node=self,
                                                action_type=TFSubscription,
                                                action_name='tf2_web_republisher',
                                                execute_callback=self.goal_cb,
                                                cancel_callback=self.cancel_cb)
        self.republish_service = self.create_service(RepublishTFs, 'republish_tfs', self.request_cb)
        self.active_clients = {}

    def goal_cb(self,goal_handle):
        goal = goal_handle.request
        client_id = str(uuid4())
        self.get_logger().info("Started action with id" + str(client_id) )
        goal_info = ClientGoalInfo(goal_handle,client_id)
        self.set_subscriptions(goal_info,
                               goal.source_frames,
                               goal.target_frame,
                               goal.angular_thres,
                               goal.trans_thres)
        goal_rate = goal.rate           
        if goal_rate == 0:
            # If the goal rate is not specified, set it to 10Hz             
            goal_rate = 10.0
        goal_info.timer = self.create_timer(1.0/goal_rate,lambda: self.process_goal(client_id))

        if not self.active_clients:
            self.tf_buffer = Buffer()
            self.tf_listener = TransformListener(self.tf_buffer,node=self)           
        self.active_clients[client_id] = goal_info

        # Wait for the action to be cancelled by the client
        while client_id in self.active_clients:
            sleep(0.1)

        if not self.active_clients :
            # Stop listening to tf to save cpu
            self.tf_listener = None
            self.tf_buffer = None

        self.get_logger().info("Completed action with id" + str(client_id) )
        result = TFSubscription.Result()
        goal_handle.canceled()
        return result

    def cancel_cb(self,goal_handle):
        client_id_to_be_canceled = None
        for client_id, goal_info in self.active_clients.items():
            if goal_handle == goal_info.handle:
                client_id_to_be_canceled = client_id
                break
        if client_id_to_be_canceled:     
            self.teardown_client(client_id_to_be_canceled)
            self.get_logger().info("Cancelling action with id" + str(client_id_to_be_canceled) )
            return rclpy.action.CancelResponse.ACCEPT
        else:
            self.get_logger().info("Cancel callback: not found action with id" + str(goal_handle) )
            return rclpy.action.CancelResponse.REJECT

    def request_cb(self,request,response):
        self.get_logger().info("RepublishTF service request received");
        client_id = str(uuid4()).replace("-", "_")
        topic_name = 'tf_repub_'+client_id

        pub = self.create_publisher(TFArray,topic_name,1 )

        # generate request_info struct
        request_info = ClientRequestInfo(client_id, self, pub)
        self.set_subscriptions(request_info,
                               request.source_frames,
                               request.target_frame,
                               request.angular_thres,
                               request.trans_thres)
        request_info.timeout = request.timeout
        request_rate = request.rate
        if request_rate == 0:
            # If the request rate is not specified, set it to 10Hz             
            request_rate = 10.0   
        request_info.timer = self.create_timer(1.0/request_rate,lambda: self.process_request(client_id))
        if not self.active_clients:
            self.tf_buffer = Buffer()
            self.tf_listener = TransformListener(self.tf_buffer,node=self)            

        self.active_clients[client_id] = request_info
        response.topic_name = topic_name
        self.get_logger().info('Publishing requested TFs on topic {0}'.format(topic_name))
        return response

    @staticmethod
    def clean_tf_frame(frame_id:str) -> str:
        #if frame_id[0] != '/':
        #    frame_id = '/'+frame_id
        return frame_id

    def set_subscriptions(self,client_info:ClientInfo,source_frames:List[str],target_frame:str,angular_thres:float,trans_thres:float):
        client_info.tf_subscriptions = []
        for source_frame in source_frames:
            tf_pair = TFPair(self.clean_tf_frame(source_frame),self.clean_tf_frame(target_frame),angular_thres,trans_thres)
            client_info.tf_subscriptions.append(tf_pair)

    def teardown_client(self,client_id):
        self.get_logger().info("Tearing down publisher")
        client = self.active_clients[client_id]
        client.timer.destroy()
        del self.active_clients[client_id]
        if not self.active_clients :
            # Stop listening to tf to save cpu
            self.tf_listener = None
            self.tf_buffer = None

    def process_request(self, client_id:str):
        request = None
        try:
            request = self.active_clients[client_id]
        except:
            # The id has already been removed
            self.get_logger().info('Trying to access removed request:'.format(client_id))
            return            
        # Check whether the publisher has any subscribers. If it does, update the stored time.
        if request.publisher.get_subscription_count() > 0:
            request.last_time_since_subscribers = self.get_clock().now()
        elif request.last_time_since_subscribers is None:
            return # wait for the first subscriber
        else:
        #elif (self.get_clock().now() - request.last_time_since_subscribers).to_sec() > request.timeout.sec + request.timeout.nanosec * 1000000000:
            self.teardown_client(client_id)
            return

        # Continue processing the request
        tf_array = self.update_subscriptions(request.tf_subscriptions)
        if len(tf_array) > 0:
            # publish TFs
            #self.get_logger().debug('Request {0} TFs published:'.format(request.client_id))
            tf_array_msg = TFArray()
            tf_array_msg.transforms = tf_array
            request.publisher.publish(tf_array_msg)
#        else:
#            self.get_logger().debug('Request {0} No TF frame update needed:'.format(request.client_id))

    def process_goal(self, client_id:str):
        request = self.active_clients[client_id]
        feedback = TFSubscription.Feedback()

        # Continue processing the request
        tf_array = self.update_subscriptions(request.tf_subscriptions)
        if len(tf_array) > 0:
            # publish TFs
            self.get_logger().info('Client {0} TFs feedback published:'.format(request.client_id))
            feedback.transforms = tf_array
            request.handle.publish_feedback(feedback)
        else:
            self.get_logger().info('Client {0}: No TF frame update needed:'.format(request.client_id))

    def update_subscriptions(self,tf_subscriptions:List[TFPair]) -> List[TransformStamped]:
        transforms = []

        current_time_msg = self.get_clock().now().to_msg() 

        # iterate over tf_subscription vector
        for pair in tf_subscriptions:
            try:
                # lookup transformation for tf_pair
                transform = self.tf_buffer.lookup_transform(pair.target_frame,pair.source_frame,
                        rclpy.time.Time())
                # If the transform broke earlier, but worked now (we didn't get
                # booted into the catch block), tell the user all is well again
                if not pair.is_ok:
                    self.get_logger().info('Transform from {0} to {1} is working again'.format(pair.source_frame,pair.target_frame))
                    pair.is_ok = True
                # update tf_pair with transformtion
                pair.update_transform(transform)

            except Exception as e:
                if pair.is_ok:
                    # Only log an error if the transform was okay before
                    self.get_logger().warning(str(e))
                pair.is_ok = False

            # check angular and translational thresholds
            if pair.update_needed:
                transform_msg = TransformStamped()
                transform_msg.header.stamp = current_time_msg
                transform_msg.header.frame_id = pair.target_frame
                transform_msg.child_frame_id = pair.source_frame
                transform_msg.transform = pair.last_tf_msg
                pair.transmission_triggered()
                transforms.append(transform_msg)

        return transforms

def main(args=[]):
    rclpy.init(args=args)

    tf_republisher_node = TFRepublisher()

    # Use a MultiThreadedExecutor to enable processing goals concurrently
    #executor = MultiThreadedExecutor()

    rclpy.spin(tf_republisher_node) #, executor)


if __name__ == '__main__':
    main()
