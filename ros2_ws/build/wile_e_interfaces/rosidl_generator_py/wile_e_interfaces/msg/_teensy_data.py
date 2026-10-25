# generated from rosidl_generator_py/resource/_idl.py.em
# with input from wile_e_interfaces:msg/TeensyData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TeensyData(type):
    """Metaclass of message 'TeensyData'."""

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
                'wile_e_interfaces.msg.TeensyData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__teensy_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__teensy_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__teensy_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__teensy_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__teensy_data

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TeensyData(metaclass=Metaclass_TeensyData):
    """Message class 'TeensyData'."""

    __slots__ = [
        '_left_shoulder',
        '_right_shoulder',
        '_left_elbow',
        '_right_elbow',
        '_tail',
        '_tail_vel',
    ]

    _fields_and_field_types = {
        'left_shoulder': 'int16',
        'right_shoulder': 'int16',
        'left_elbow': 'uint16',
        'right_elbow': 'uint16',
        'tail': 'int16',
        'tail_vel': 'int16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.left_shoulder = kwargs.get('left_shoulder', int())
        self.right_shoulder = kwargs.get('right_shoulder', int())
        self.left_elbow = kwargs.get('left_elbow', int())
        self.right_elbow = kwargs.get('right_elbow', int())
        self.tail = kwargs.get('tail', int())
        self.tail_vel = kwargs.get('tail_vel', int())

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
        if self.left_shoulder != other.left_shoulder:
            return False
        if self.right_shoulder != other.right_shoulder:
            return False
        if self.left_elbow != other.left_elbow:
            return False
        if self.right_elbow != other.right_elbow:
            return False
        if self.tail != other.tail:
            return False
        if self.tail_vel != other.tail_vel:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def left_shoulder(self):
        """Message field 'left_shoulder'."""
        return self._left_shoulder

    @left_shoulder.setter
    def left_shoulder(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'left_shoulder' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'left_shoulder' field must be an integer in [-32768, 32767]"
        self._left_shoulder = value

    @builtins.property
    def right_shoulder(self):
        """Message field 'right_shoulder'."""
        return self._right_shoulder

    @right_shoulder.setter
    def right_shoulder(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'right_shoulder' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'right_shoulder' field must be an integer in [-32768, 32767]"
        self._right_shoulder = value

    @builtins.property
    def left_elbow(self):
        """Message field 'left_elbow'."""
        return self._left_elbow

    @left_elbow.setter
    def left_elbow(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'left_elbow' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'left_elbow' field must be an unsigned integer in [0, 65535]"
        self._left_elbow = value

    @builtins.property
    def right_elbow(self):
        """Message field 'right_elbow'."""
        return self._right_elbow

    @right_elbow.setter
    def right_elbow(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'right_elbow' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'right_elbow' field must be an unsigned integer in [0, 65535]"
        self._right_elbow = value

    @builtins.property
    def tail(self):
        """Message field 'tail'."""
        return self._tail

    @tail.setter
    def tail(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tail' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'tail' field must be an integer in [-32768, 32767]"
        self._tail = value

    @builtins.property
    def tail_vel(self):
        """Message field 'tail_vel'."""
        return self._tail_vel

    @tail_vel.setter
    def tail_vel(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tail_vel' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'tail_vel' field must be an integer in [-32768, 32767]"
        self._tail_vel = value
