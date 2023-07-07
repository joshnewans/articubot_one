from tf2_msgs.msg import TFMessage
from geometry_msgs.msg import TransformStamped, Transform
import numpy as np
from pyquaternion import Quaternion
import math
import copy

class TFPair(object):
    def __init__(self,source_frame,target_frame,angular_thres=0.0,trans_thres=0.0):
        self.is_ok = True
        self._source_frame = source_frame
        self._target_frame = target_frame
        self._angular_thres = angular_thres
        self._trans_thres = trans_thres

        self._tf_transmitted = {'translation':np.array([0.0,0.0,0.0]),'rotation':Quaternion(1.0,0.0,0.0,0.0)}
        self._tf_received = {'translation':np.array([0.0,0.0,0.0]),'rotation':Quaternion(1.0,0.0,0.0,0.0)}

        self._last_tf_msg = Transform()

        self.first_transmission = True
        self._updated = False

    @property
    def id(self):
        return self._source_frame + '-' + self._target_frame

    @property
    def source_frame(self):
        return self._source_frame

    @property
    def target_frame(self):
        return self._target_frame

    @property
    def angular_thres(self):
        return self._angular_thres

    @property
    def trans_thres(self):
        return self._trans_thres

    @property
    def last_tf_msg(self):
        return self._last_tf_msg

    @source_frame.setter
    def source_frame(self,value):
        self._source_frame = value
        self._updated = True

    @target_frame.setter
    def target_frame(self,value):
        self._target_frame = value
        self._updated = True

    @angular_thres.setter
    def angular_thres(self,value):
        self._angular_thres = value
        self._updated = True

    @trans_thres.setter
    def trans_thres(self,value):
        self._trans_thres = value
        self._updated = True

    def transmission_triggered(self):
        self._tf_transmitted = copy.deepcopy(self._tf_received)

    def update_transform(self,update:TransformStamped):
        self._tf_received['translation'] = np.array([update.transform.translation.x,update.transform.translation.y,update.transform.translation.z])
        self._tf_received['rotation'] = Quaternion(update.transform.rotation.w,update.transform.rotation.x,update.transform.rotation.y,update.transform.rotation.z)
        self._last_tf_msg = update.transform
        self._updated = True

    @property
    def update_needed(self):
        result = False
        if self._updated:
            if self._trans_thres == 0.0 or self._angular_thres == 0.0:
                result = True
                self.first_transmission = False
            elif self.distance(self._tf_transmitted,self._tf_received) > self._trans_thres:
                result = True
                self.first_transmission = False
            elif self.angle(self._tf_transmitted,self._tf_received) > self._angular_thres:
                result = True
                self.first_transmission = False
            elif self.first_transmission:
                result = True
                self.first_transmission = False

        self._updated = False
        return result


    @staticmethod
    def distance(tf1,tf2):
        return np.linalg.norm(tf1['translation']-tf2['translation'])

    @staticmethod
    def angle(tf1,tf2):
        return Quaternion.absolute_distance(tf1['rotation'], tf2['rotation'])
