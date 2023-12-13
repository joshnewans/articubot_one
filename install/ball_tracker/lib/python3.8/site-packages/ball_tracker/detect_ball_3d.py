# Copyright 2023 Josh Newans
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

import rclpy
from rclpy.node import Node
from geometry_msgs.msg      import Point
from visualization_msgs.msg import Marker
import math

class DetectBall3d(Node):

    def __init__(self):
        super().__init__('detect_ball_3d')

        self.get_logger().info('Detecting in 3D')

        self.ball2d_sub  = self.create_subscription(Point,"/detected_ball",self.ball_rcv_callback, 10)
        self.ball3d_pub  = self.create_publisher(Point,"/detected_ball_3d",1)
        self.ball_marker_pub  = self.create_publisher(Marker,"/ball_3d_marker",1)

        self.declare_parameter("h_fov",1.089)
        self.declare_parameter("ball_radius",0.033)
        self.declare_parameter("aspect_ratio",4.0/3.0)
        self.declare_parameter("camera_frame",'camera_link_optical')

        self.h_fov = self.get_parameter('h_fov').get_parameter_value().double_value
        self.v_fov = self.h_fov/self.get_parameter('aspect_ratio').get_parameter_value().double_value
        self.ball_radius = self.get_parameter('ball_radius').get_parameter_value().double_value
        self.camera_frame = self.get_parameter('camera_frame').get_parameter_value().string_value


    def ball_rcv_callback(self,data : Point):

        # Calculate angular size and consequently distance
        ang_size = data.z*self.h_fov
        d = self.ball_radius/(math.atan(ang_size/2))

        # Calculate angular and distance deviations in X and Y
        y_ang = data.y*self.v_fov/2
        y = d*math.sin(y_ang)
        d_proj = d*math.cos(y_ang)

        x_ang = data.x*self.h_fov/2
        x = d_proj*math.sin(x_ang)
        z = d_proj*math.cos(x_ang)


        p = Point()
        p.x = x
        p.y = y
        p.z = z
        self.ball3d_pub.publish(p)


        m = Marker()
        m.header.frame_id = self.camera_frame

        m.id = 0
        m.type = Marker.SPHERE
        m.action = Marker.ADD
        m.pose.position.x = x
        m.pose.position.y = y
        m.pose.position.z = z
        m.scale.x = self.ball_radius*2
        m.scale.y = self.ball_radius*2
        m.scale.z = self.ball_radius*2
        m.color.r = 0.933
        m.color.g = 1.0
        m.color.b = 0.0
        m.color.a = 1.0

        self.ball_marker_pub.publish(m)
        print(m.pose.position)



def main(args=None):
    rclpy.init(args=args)
    detect_ball_3d = DetectBall3d()
    rclpy.spin(detect_ball_3d)
    detect_ball_3d.destroy_node()
    rclpy.shutdown()


