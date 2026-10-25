# generated from rosidl_generator_py/resource/_idl.py.em
# with input from wile_e_interfaces:msg/RoboclawStateBroadcast.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RoboclawStateBroadcast(type):
    """Metaclass of message 'RoboclawStateBroadcast'."""

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
            module = import_type_support('wile_e_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'wile_e_interfaces.msg.RoboclawStateBroadcast')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__roboclaw_state_broadcast
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__roboclaw_state_broadcast
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__roboclaw_state_broadcast
            cls._TYPE_SUPPORT = module.type_support_msg__msg__roboclaw_state_broadcast
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__roboclaw_state_broadcast

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RoboclawStateBroadcast(metaclass=Metaclass_RoboclawStateBroadcast):
    """Message class 'RoboclawStateBroadcast'."""

    __slots__ = [
        '_right_shoulder',
        '_left_shoulder',
        '_right_elbow',
        '_left_elbow',
        '_right_shoulder_speed',
        '_left_shoulder_speed',
        '_right_elbow_speed',
        '_left_elbow_speed',
        '_right_wheel_speed',
        '_left_wheel_speed',
    ]

    _fields_and_field_types = {
        'right_shoulder': 'float',
        'left_shoulder': 'float',
        'right_elbow': 'float',
        'left_elbow': 'float',
        'right_shoulder_speed': 'float',
        'left_shoulder_speed': 'float',
        'right_elbow_speed': 'float',
        'left_elbow_speed': 'float',
        'right_wheel_speed': 'float',
        'left_wheel_speed': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.right_shoulder = kwargs.get('right_shoulder', float())
        self.left_shoulder = kwargs.get('left_shoulder', float())
        self.right_elbow = kwargs.get('right_elbow', float())
        self.left_elbow = kwargs.get('left_elbow', float())
        self.right_shoulder_speed = kwargs.get('right_shoulder_speed', float())
        self.left_shoulder_speed = kwargs.get('left_shoulder_speed', float())
        self.right_elbow_speed = kwargs.get('right_elbow_speed', float())
        self.left_elbow_speed = kwargs.get('left_elbow_speed', float())
        self.right_wheel_speed = kwargs.get('right_wheel_speed', float())
        self.left_wheel_speed = kwargs.get('left_wheel_speed', float())

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
        if self.right_shoulder != other.right_shoulder:
            return False
        if self.left_shoulder != other.left_shoulder:
            return False
        if self.right_elbow != other.right_elbow:
            return False
        if self.left_elbow != other.left_elbow:
            return False
        if self.right_shoulder_speed != other.right_shoulder_speed:
            return False
        if self.left_shoulder_speed != other.left_shoulder_speed:
            return False
        if self.right_elbow_speed != other.right_elbow_speed:
            return False
        if self.left_elbow_speed != other.left_elbow_speed:
            return False
        if self.right_wheel_speed != other.right_wheel_speed:
            return False
        if self.left_wheel_speed != other.left_wheel_speed:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def right_shoulder(self):
        """Message field 'right_shoulder'."""
        return self._right_shoulder

    @right_shoulder.setter
    def right_shoulder(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'right_shoulder' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'right_shoulder' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._right_shoulder = value

    @builtins.property
    def left_shoulder(self):
        """Message field 'left_shoulder'."""
        return self._left_shoulder

    @left_shoulder.setter
    def left_shoulder(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'left_shoulder' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'left_shoulder' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._left_shoulder = value

    @builtins.property
    def right_elbow(self):
        """Message field 'right_elbow'."""
        return self._right_elbow

    @right_elbow.setter
    def right_elbow(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'right_elbow' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'right_elbow' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._right_elbow = value

    @builtins.property
    def left_elbow(self):
        """Message field 'left_elbow'."""
        return self._left_elbow

    @left_elbow.setter
    def left_elbow(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'left_elbow' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'left_elbow' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._left_elbow = value

    @builtins.property
    def right_shoulder_speed(self):
        """Message field 'right_shoulder_speed'."""
        return self._right_shoulder_speed

    @right_shoulder_speed.setter
    def right_shoulder_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'right_shoulder_speed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'right_shoulder_speed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._right_shoulder_speed = value

    @builtins.property
    def left_shoulder_speed(self):
        """Message field 'left_shoulder_speed'."""
        return self._left_shoulder_speed

    @left_shoulder_speed.setter
    def left_shoulder_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'left_shoulder_speed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'left_shoulder_speed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._left_shoulder_speed = value

    @builtins.property
    def right_elbow_speed(self):
        """Message field 'right_elbow_speed'."""
        return self._right_elbow_speed

    @right_elbow_speed.setter
    def right_elbow_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'right_elbow_speed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'right_elbow_speed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._right_elbow_speed = value

    @builtins.property
    def left_elbow_speed(self):
        """Message field 'left_elbow_speed'."""
        return self._left_elbow_speed

    @left_elbow_speed.setter
    def left_elbow_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'left_elbow_speed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'left_elbow_speed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._left_elbow_speed = value

    @builtins.property
    def right_wheel_speed(self):
        """Message field 'right_wheel_speed'."""
        return self._right_wheel_speed

    @right_wheel_speed.setter
    def right_wheel_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'right_wheel_speed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'right_wheel_speed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._right_wheel_speed = value

    @builtins.property
    def left_wheel_speed(self):
        """Message field 'left_wheel_speed'."""
        return self._left_wheel_speed

    @left_wheel_speed.setter
    def left_wheel_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'left_wheel_speed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'left_wheel_speed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._left_wheel_speed = value
