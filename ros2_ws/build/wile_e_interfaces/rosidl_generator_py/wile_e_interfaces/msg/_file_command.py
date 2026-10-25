# generated from rosidl_generator_py/resource/_idl.py.em
# with input from wile_e_interfaces:msg/FileCommand.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FileCommand(type):
    """Metaclass of message 'FileCommand'."""

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
                'wile_e_interfaces.msg.FileCommand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__file_command
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__file_command
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__file_command
            cls._TYPE_SUPPORT = module.type_support_msg__msg__file_command
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__file_command

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FileCommand(metaclass=Metaclass_FileCommand):
    """Message class 'FileCommand'."""

    __slots__ = [
        '_right_bicep',
        '_left_bicep',
        '_right_forearm',
        '_left_forearm',
        '_right_wheel',
        '_left_wheel',
        '_tail',
        '_head_raise',
        '_head_turn',
        '_eyes',
        '_fan',
        '_headlight',
        '_face_detection',
    ]

    _fields_and_field_types = {
        'right_bicep': 'uint16',
        'left_bicep': 'uint16',
        'right_forearm': 'uint16',
        'left_forearm': 'uint16',
        'right_wheel': 'uint16',
        'left_wheel': 'uint16',
        'tail': 'uint16',
        'head_raise': 'uint16',
        'head_turn': 'uint16',
        'eyes': 'uint8',
        'fan': 'uint8',
        'headlight': 'uint8',
        'face_detection': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.right_bicep = kwargs.get('right_bicep', int())
        self.left_bicep = kwargs.get('left_bicep', int())
        self.right_forearm = kwargs.get('right_forearm', int())
        self.left_forearm = kwargs.get('left_forearm', int())
        self.right_wheel = kwargs.get('right_wheel', int())
        self.left_wheel = kwargs.get('left_wheel', int())
        self.tail = kwargs.get('tail', int())
        self.head_raise = kwargs.get('head_raise', int())
        self.head_turn = kwargs.get('head_turn', int())
        self.eyes = kwargs.get('eyes', int())
        self.fan = kwargs.get('fan', int())
        self.headlight = kwargs.get('headlight', int())
        self.face_detection = kwargs.get('face_detection', int())

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
        if self.right_bicep != other.right_bicep:
            return False
        if self.left_bicep != other.left_bicep:
            return False
        if self.right_forearm != other.right_forearm:
            return False
        if self.left_forearm != other.left_forearm:
            return False
        if self.right_wheel != other.right_wheel:
            return False
        if self.left_wheel != other.left_wheel:
            return False
        if self.tail != other.tail:
            return False
        if self.head_raise != other.head_raise:
            return False
        if self.head_turn != other.head_turn:
            return False
        if self.eyes != other.eyes:
            return False
        if self.fan != other.fan:
            return False
        if self.headlight != other.headlight:
            return False
        if self.face_detection != other.face_detection:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def right_bicep(self):
        """Message field 'right_bicep'."""
        return self._right_bicep

    @right_bicep.setter
    def right_bicep(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'right_bicep' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'right_bicep' field must be an unsigned integer in [0, 65535]"
        self._right_bicep = value

    @builtins.property
    def left_bicep(self):
        """Message field 'left_bicep'."""
        return self._left_bicep

    @left_bicep.setter
    def left_bicep(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'left_bicep' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'left_bicep' field must be an unsigned integer in [0, 65535]"
        self._left_bicep = value

    @builtins.property
    def right_forearm(self):
        """Message field 'right_forearm'."""
        return self._right_forearm

    @right_forearm.setter
    def right_forearm(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'right_forearm' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'right_forearm' field must be an unsigned integer in [0, 65535]"
        self._right_forearm = value

    @builtins.property
    def left_forearm(self):
        """Message field 'left_forearm'."""
        return self._left_forearm

    @left_forearm.setter
    def left_forearm(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'left_forearm' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'left_forearm' field must be an unsigned integer in [0, 65535]"
        self._left_forearm = value

    @builtins.property
    def right_wheel(self):
        """Message field 'right_wheel'."""
        return self._right_wheel

    @right_wheel.setter
    def right_wheel(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'right_wheel' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'right_wheel' field must be an unsigned integer in [0, 65535]"
        self._right_wheel = value

    @builtins.property
    def left_wheel(self):
        """Message field 'left_wheel'."""
        return self._left_wheel

    @left_wheel.setter
    def left_wheel(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'left_wheel' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'left_wheel' field must be an unsigned integer in [0, 65535]"
        self._left_wheel = value

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
            assert value >= 0 and value < 65536, \
                "The 'tail' field must be an unsigned integer in [0, 65535]"
        self._tail = value

    @builtins.property
    def head_raise(self):
        """Message field 'head_raise'."""
        return self._head_raise

    @head_raise.setter
    def head_raise(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'head_raise' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'head_raise' field must be an unsigned integer in [0, 65535]"
        self._head_raise = value

    @builtins.property
    def head_turn(self):
        """Message field 'head_turn'."""
        return self._head_turn

    @head_turn.setter
    def head_turn(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'head_turn' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'head_turn' field must be an unsigned integer in [0, 65535]"
        self._head_turn = value

    @builtins.property
    def eyes(self):
        """Message field 'eyes'."""
        return self._eyes

    @eyes.setter
    def eyes(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'eyes' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'eyes' field must be an unsigned integer in [0, 255]"
        self._eyes = value

    @builtins.property
    def fan(self):
        """Message field 'fan'."""
        return self._fan

    @fan.setter
    def fan(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fan' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'fan' field must be an unsigned integer in [0, 255]"
        self._fan = value

    @builtins.property
    def headlight(self):
        """Message field 'headlight'."""
        return self._headlight

    @headlight.setter
    def headlight(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'headlight' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'headlight' field must be an unsigned integer in [0, 255]"
        self._headlight = value

    @builtins.property
    def face_detection(self):
        """Message field 'face_detection'."""
        return self._face_detection

    @face_detection.setter
    def face_detection(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'face_detection' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'face_detection' field must be an unsigned integer in [0, 255]"
        self._face_detection = value
