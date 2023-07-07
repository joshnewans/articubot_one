# generated from rosidl_generator_py/resource/_idl.py.em
# with input from tf2_web_republisher:srv/RepublishTFs.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RepublishTFs_Request(type):
    """Metaclass of message 'RepublishTFs_Request'."""

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
                'tf2_web_republisher.srv.RepublishTFs_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__republish_t_fs__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__republish_t_fs__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__republish_t_fs__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__republish_t_fs__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__republish_t_fs__request

            from builtin_interfaces.msg import Duration
            if Duration.__class__._TYPE_SUPPORT is None:
                Duration.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RepublishTFs_Request(metaclass=Metaclass_RepublishTFs_Request):
    """Message class 'RepublishTFs_Request'."""

    __slots__ = [
        '_source_frames',
        '_target_frame',
        '_angular_thres',
        '_trans_thres',
        '_rate',
        '_timeout',
    ]

    _fields_and_field_types = {
        'source_frames': 'sequence<string>',
        'target_frame': 'string',
        'angular_thres': 'float',
        'trans_thres': 'float',
        'rate': 'float',
        'timeout': 'builtin_interfaces/Duration',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Duration'),  # noqa: E501
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
        from builtin_interfaces.msg import Duration
        self.timeout = kwargs.get('timeout', Duration())

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
        if self.timeout != other.timeout:
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

    @property
    def timeout(self):
        """Message field 'timeout'."""
        return self._timeout

    @timeout.setter
    def timeout(self, value):
        if __debug__:
            from builtin_interfaces.msg import Duration
            assert \
                isinstance(value, Duration), \
                "The 'timeout' field must be a sub message of type 'Duration'"
        self._timeout = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_RepublishTFs_Response(type):
    """Metaclass of message 'RepublishTFs_Response'."""

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
                'tf2_web_republisher.srv.RepublishTFs_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__republish_t_fs__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__republish_t_fs__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__republish_t_fs__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__republish_t_fs__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__republish_t_fs__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RepublishTFs_Response(metaclass=Metaclass_RepublishTFs_Response):
    """Message class 'RepublishTFs_Response'."""

    __slots__ = [
        '_topic_name',
    ]

    _fields_and_field_types = {
        'topic_name': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.topic_name = kwargs.get('topic_name', str())

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
        if self.topic_name != other.topic_name:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def topic_name(self):
        """Message field 'topic_name'."""
        return self._topic_name

    @topic_name.setter
    def topic_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'topic_name' field must be of type 'str'"
        self._topic_name = value


class Metaclass_RepublishTFs(type):
    """Metaclass of service 'RepublishTFs'."""

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
                'tf2_web_republisher.srv.RepublishTFs')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__republish_t_fs

            from tf2_web_republisher.srv import _republish_t_fs
            if _republish_t_fs.Metaclass_RepublishTFs_Request._TYPE_SUPPORT is None:
                _republish_t_fs.Metaclass_RepublishTFs_Request.__import_type_support__()
            if _republish_t_fs.Metaclass_RepublishTFs_Response._TYPE_SUPPORT is None:
                _republish_t_fs.Metaclass_RepublishTFs_Response.__import_type_support__()


class RepublishTFs(metaclass=Metaclass_RepublishTFs):
    from tf2_web_republisher.srv._republish_t_fs import RepublishTFs_Request as Request
    from tf2_web_republisher.srv._republish_t_fs import RepublishTFs_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
