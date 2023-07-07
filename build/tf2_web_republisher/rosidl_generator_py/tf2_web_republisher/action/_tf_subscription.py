# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tf2_web_republisher:action/TFSubscription.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TFSubscription_Goal(type):
    """Metaclass of message 'TFSubscription_Goal'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tf2_web_republisher')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tf2_web_republisher.action.TFSubscription_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__tf_subscription__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__tf_subscription__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__tf_subscription__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__tf_subscription__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__tf_subscription__goal

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TFSubscription_Goal(metaclass=Metaclass_TFSubscription_Goal):
    """Message class 'TFSubscription_Goal'."""

    __slots__ = [
        '_source_frames',
        '_target_frame',
        '_angular_thres',
        '_trans_thres',
        '_rate',
    ]

    _fields_and_field_types = {
        'source_frames': 'sequence<string>',
        'target_frame': 'string',
        'angular_thres': 'float',
        'trans_thres': 'float',
        'rate': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.source_frames = kwargs.get('source_frames', [])
        self.target_frame = kwargs.get('target_frame', str())
        self.angular_thres = kwargs.get('angular_thres', float())
        self.trans_thres = kwargs.get('trans_thres', float())
        self.rate = kwargs.get('rate', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.source_frames != other.source_frames:
            return False
        if self.target_frame != other.target_frame:
            return False
        if self.angular_thres != other.angular_thres:
            return False
        if self.trans_thres != other.trans_thres:
            return False
        if self.rate != other.rate:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def source_frames(self):
        """Message field 'source_frames'."""
        return self._source_frames

    @source_frames.setter
    def source_frames(self, value):
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'source_frames' field must be a set or sequence and each value of type 'str'"
        self._source_frames = value

    @property
    def target_frame(self):
        """Message field 'target_frame'."""
        return self._target_frame

    @target_frame.setter
    def target_frame(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'target_frame' field must be of type 'str'"
        self._target_frame = value

    @property
    def angular_thres(self):
        """Message field 'angular_thres'."""
        return self._angular_thres

    @angular_thres.setter
    def angular_thres(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angular_thres' field must be of type 'float'"
        self._angular_thres = value

    @property
    def trans_thres(self):
        """Message field 'trans_thres'."""
        return self._trans_thres

    @trans_thres.setter
    def trans_thres(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'trans_thres' field must be of type 'float'"
        self._trans_thres = value

    @property
    def rate(self):
        """Message field 'rate'."""
        return self._rate

    @rate.setter
    def rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rate' field must be of type 'float'"
        self._rate = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_TFSubscription_Result(type):
    """Metaclass of message 'TFSubscription_Result'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tf2_web_republisher')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tf2_web_republisher.action.TFSubscription_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__tf_subscription__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__tf_subscription__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__tf_subscription__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__tf_subscription__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__tf_subscription__result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TFSubscription_Result(metaclass=Metaclass_TFSubscription_Result):
    """Message class 'TFSubscription_Result'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_TFSubscription_Feedback(type):
    """Metaclass of message 'TFSubscription_Feedback'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tf2_web_republisher')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tf2_web_republisher.action.TFSubscription_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__tf_subscription__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__tf_subscription__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__tf_subscription__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__tf_subscription__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__tf_subscription__feedback

            from geometry_msgs.msg import TransformStamped
            if TransformStamped.__class__._TYPE_SUPPORT is None:
                TransformStamped.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TFSubscription_Feedback(metaclass=Metaclass_TFSubscription_Feedback):
    """Message class 'TFSubscription_Feedback'."""

    __slots__ = [
        '_transforms',
    ]

    _fields_and_field_types = {
        'transforms': 'sequence<geometry_msgs/TransformStamped>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'TransformStamped')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.transforms = kwargs.get('transforms', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.transforms != other.transforms:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def transforms(self):
        """Message field 'transforms'."""
        return self._transforms

    @transforms.setter
    def transforms(self, value):
        if __debug__:
            from geometry_msgs.msg import TransformStamped
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, TransformStamped) for v in value) and
                 True), \
                "The 'transforms' field must be a set or sequence and each value of type 'TransformStamped'"
        self._transforms = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_TFSubscription_SendGoal_Request(type):
    """Metaclass of message 'TFSubscription_SendGoal_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tf2_web_republisher')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tf2_web_republisher.action.TFSubscription_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__tf_subscription__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__tf_subscription__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__tf_subscription__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__tf_subscription__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__tf_subscription__send_goal__request

            from tf2_web_republisher.action import TFSubscription
            if TFSubscription.Goal.__class__._TYPE_SUPPORT is None:
                TFSubscription.Goal.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TFSubscription_SendGoal_Request(metaclass=Metaclass_TFSubscription_SendGoal_Request):
    """Message class 'TFSubscription_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'tf2_web_republisher/TFSubscription_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tf2_web_republisher', 'action'], 'TFSubscription_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from tf2_web_republisher.action._tf_subscription import TFSubscription_Goal
        self.goal = kwargs.get('goal', TFSubscription_Goal())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from tf2_web_republisher.action._tf_subscription import TFSubscription_Goal
            assert \
                isinstance(value, TFSubscription_Goal), \
                "The 'goal' field must be a sub message of type 'TFSubscription_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_TFSubscription_SendGoal_Response(type):
    """Metaclass of message 'TFSubscription_SendGoal_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tf2_web_republisher')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tf2_web_republisher.action.TFSubscription_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__tf_subscription__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__tf_subscription__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__tf_subscription__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__tf_subscription__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__tf_subscription__send_goal__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TFSubscription_SendGoal_Response(metaclass=Metaclass_TFSubscription_SendGoal_Response):
    """Message class 'TFSubscription_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

    @property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value


class Metaclass_TFSubscription_SendGoal(type):
    """Metaclass of service 'TFSubscription_SendGoal'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tf2_web_republisher')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tf2_web_republisher.action.TFSubscription_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__tf_subscription__send_goal

            from tf2_web_republisher.action import _tf_subscription
            if _tf_subscription.Metaclass_TFSubscription_SendGoal_Request._TYPE_SUPPORT is None:
                _tf_subscription.Metaclass_TFSubscription_SendGoal_Request.__import_type_support__()
            if _tf_subscription.Metaclass_TFSubscription_SendGoal_Response._TYPE_SUPPORT is None:
                _tf_subscription.Metaclass_TFSubscription_SendGoal_Response.__import_type_support__()


class TFSubscription_SendGoal(metaclass=Metaclass_TFSubscription_SendGoal):
    from tf2_web_republisher.action._tf_subscription import TFSubscription_SendGoal_Request as Request
    from tf2_web_republisher.action._tf_subscription import TFSubscription_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_TFSubscription_GetResult_Request(type):
    """Metaclass of message 'TFSubscription_GetResult_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tf2_web_republisher')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tf2_web_republisher.action.TFSubscription_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__tf_subscription__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__tf_subscription__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__tf_subscription__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__tf_subscription__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__tf_subscription__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TFSubscription_GetResult_Request(metaclass=Metaclass_TFSubscription_GetResult_Request):
    """Message class 'TFSubscription_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_TFSubscription_GetResult_Response(type):
    """Metaclass of message 'TFSubscription_GetResult_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tf2_web_republisher')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tf2_web_republisher.action.TFSubscription_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__tf_subscription__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__tf_subscription__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__tf_subscription__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__tf_subscription__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__tf_subscription__get_result__response

            from tf2_web_republisher.action import TFSubscription
            if TFSubscription.Result.__class__._TYPE_SUPPORT is None:
                TFSubscription.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TFSubscription_GetResult_Response(metaclass=Metaclass_TFSubscription_GetResult_Response):
    """Message class 'TFSubscription_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'tf2_web_republisher/TFSubscription_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tf2_web_republisher', 'action'], 'TFSubscription_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from tf2_web_republisher.action._tf_subscription import TFSubscription_Result
        self.result = kwargs.get('result', TFSubscription_Result())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.status != other.status:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from tf2_web_republisher.action._tf_subscription import TFSubscription_Result
            assert \
                isinstance(value, TFSubscription_Result), \
                "The 'result' field must be a sub message of type 'TFSubscription_Result'"
        self._result = value


class Metaclass_TFSubscription_GetResult(type):
    """Metaclass of service 'TFSubscription_GetResult'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tf2_web_republisher')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tf2_web_republisher.action.TFSubscription_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__tf_subscription__get_result

            from tf2_web_republisher.action import _tf_subscription
            if _tf_subscription.Metaclass_TFSubscription_GetResult_Request._TYPE_SUPPORT is None:
                _tf_subscription.Metaclass_TFSubscription_GetResult_Request.__import_type_support__()
            if _tf_subscription.Metaclass_TFSubscription_GetResult_Response._TYPE_SUPPORT is None:
                _tf_subscription.Metaclass_TFSubscription_GetResult_Response.__import_type_support__()


class TFSubscription_GetResult(metaclass=Metaclass_TFSubscription_GetResult):
    from tf2_web_republisher.action._tf_subscription import TFSubscription_GetResult_Request as Request
    from tf2_web_republisher.action._tf_subscription import TFSubscription_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_TFSubscription_FeedbackMessage(type):
    """Metaclass of message 'TFSubscription_FeedbackMessage'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tf2_web_republisher')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tf2_web_republisher.action.TFSubscription_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__tf_subscription__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__tf_subscription__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__tf_subscription__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__tf_subscription__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__tf_subscription__feedback_message

            from tf2_web_republisher.action import TFSubscription
            if TFSubscription.Feedback.__class__._TYPE_SUPPORT is None:
                TFSubscription.Feedback.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TFSubscription_FeedbackMessage(metaclass=Metaclass_TFSubscription_FeedbackMessage):
    """Message class 'TFSubscription_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'tf2_web_republisher/TFSubscription_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tf2_web_republisher', 'action'], 'TFSubscription_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from tf2_web_republisher.action._tf_subscription import TFSubscription_Feedback
        self.feedback = kwargs.get('feedback', TFSubscription_Feedback())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            from tf2_web_republisher.action._tf_subscription import TFSubscription_Feedback
            assert \
                isinstance(value, TFSubscription_Feedback), \
                "The 'feedback' field must be a sub message of type 'TFSubscription_Feedback'"
        self._feedback = value


class Metaclass_TFSubscription(type):
    """Metaclass of action 'TFSubscription'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('tf2_web_republisher')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'tf2_web_republisher.action.TFSubscription')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__tf_subscription

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from tf2_web_republisher.action import _tf_subscription
            if _tf_subscription.Metaclass_TFSubscription_SendGoal._TYPE_SUPPORT is None:
                _tf_subscription.Metaclass_TFSubscription_SendGoal.__import_type_support__()
            if _tf_subscription.Metaclass_TFSubscription_GetResult._TYPE_SUPPORT is None:
                _tf_subscription.Metaclass_TFSubscription_GetResult.__import_type_support__()
            if _tf_subscription.Metaclass_TFSubscription_FeedbackMessage._TYPE_SUPPORT is None:
                _tf_subscription.Metaclass_TFSubscription_FeedbackMessage.__import_type_support__()


class TFSubscription(metaclass=Metaclass_TFSubscription):

    # The goal message defined in the action definition.
    from tf2_web_republisher.action._tf_subscription import TFSubscription_Goal as Goal
    # The result message defined in the action definition.
    from tf2_web_republisher.action._tf_subscription import TFSubscription_Result as Result
    # The feedback message defined in the action definition.
    from tf2_web_republisher.action._tf_subscription import TFSubscription_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from tf2_web_republisher.action._tf_subscription import TFSubscription_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from tf2_web_republisher.action._tf_subscription import TFSubscription_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from tf2_web_republisher.action._tf_subscription import TFSubscription_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
