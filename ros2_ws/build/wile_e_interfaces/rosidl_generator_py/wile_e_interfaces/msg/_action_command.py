# generated from rosidl_generator_py/resource/_idl.py.em
# with input from wile_e_interfaces:msg/ActionCommand.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ActionCommand(type):
    """Metaclass of message 'ActionCommand'."""

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
                'wile_e_interfaces.msg.ActionCommand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__action_command
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__action_command
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__action_command
            cls._TYPE_SUPPORT = module.type_support_msg__msg__action_command
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__action_command

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ActionCommand(metaclass=Metaclass_ActionCommand):
    """Message class 'ActionCommand'."""

    __slots__ = [
        '_right_shoulder',
        '_left_shoulder',
        '_right_elbow',
        '_left_elbow',
        '_right_wheel',
        '_left_wheel',
        '_tail',
        '_head_raise',
        '_head_turn',
        '_eyes',
        '_fan',
        '_headlight',
        '_data',
    ]

    _fields_and_field_types = {
        'right_shoulder': 'float',
        'left_shoulder': 'float',
        'right_elbow': 'float',
        'left_elbow': 'float',
        'right_wheel': 'float',
        'left_wheel': 'float',
        'tail': 'int16',
        'head_raise': 'int16',
        'head_turn': 'int16',
        'eyes': 'uint8',
        'fan': 'uint8',
        'headlight': 'uint8',
        'data': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.right_shoulder = kwargs.get('right_shoulder', float())
        self.left_shoulder = kwargs.get('left_shoulder', float())
        self.right_elbow = kwargs.get('right_elbow', float())
        self.left_elbow = kwargs.get('left_elbow', float())
        self.right_wheel = kwargs.get('right_wheel', float())
        self.left_wheel = kwargs.get('left_wheel', float())
        self.tail = kwargs.get('tail', int())
        self.head_raise = kwargs.get('head_raise', int())
        self.head_turn = kwargs.get('head_turn', int())
        self.eyes = kwargs.get('eyes', int())
        self.fan = kwargs.get('fan', int())
        self.headlight = kwargs.get('headlight', int())
        self.data = kwargs.get('data', int())

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
        if self.data != other.data:
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
    def right_wheel(self):
        """Message field 'right_wheel'."""
        return self._right_wheel

    @right_wheel.setter
    def right_wheel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'right_wheel' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'right_wheel' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._right_wheel = value

    @builtins.property
    def left_wheel(self):
        """Message field 'left_wheel'."""
        return self._left_wheel

    @left_wheel.setter
    def left_wheel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'left_wheel' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'left_wheel' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
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
            assert value >= -32768 and value < 32768, \
                "The 'tail' field must be an integer in [-32768, 32767]"
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
            assert value >= -32768 and value < 32768, \
                "The 'head_raise' field must be an integer in [-32768, 32767]"
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
            assert value >= -32768 and value < 32768, \
                "The 'head_turn' field must be an integer in [-32768, 32767]"
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
    def data(self):
        """Message field 'data'."""
        return self._data

    @data.setter
    def data(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'data' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'data' field must be an unsigned integer in [0, 255]"
        self._data = value
