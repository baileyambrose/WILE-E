# generated from rosidl_generator_py/resource/_idl.py.em
# with input from wile_e_interfaces:msg/RoboclawPowerBroadcast.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RoboclawPowerBroadcast(type):
    """Metaclass of message 'RoboclawPowerBroadcast'."""

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
                'wile_e_interfaces.msg.RoboclawPowerBroadcast')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__roboclaw_power_broadcast
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__roboclaw_power_broadcast
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__roboclaw_power_broadcast
            cls._TYPE_SUPPORT = module.type_support_msg__msg__roboclaw_power_broadcast
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__roboclaw_power_broadcast

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RoboclawPowerBroadcast(metaclass=Metaclass_RoboclawPowerBroadcast):
    """Message class 'RoboclawPowerBroadcast'."""

    __slots__ = [
        '_battery_voltage',
        '_current_draw',
    ]

    _fields_and_field_types = {
        'battery_voltage': 'uint8',
        'current_draw': 'int16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.battery_voltage = kwargs.get('battery_voltage', int())
        self.current_draw = kwargs.get('current_draw', int())

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
        if self.battery_voltage != other.battery_voltage:
            return False
        if self.current_draw != other.current_draw:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def battery_voltage(self):
        """Message field 'battery_voltage'."""
        return self._battery_voltage

    @battery_voltage.setter
    def battery_voltage(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'battery_voltage' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'battery_voltage' field must be an unsigned integer in [0, 255]"
        self._battery_voltage = value

    @builtins.property
    def current_draw(self):
        """Message field 'current_draw'."""
        return self._current_draw

    @current_draw.setter
    def current_draw(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'current_draw' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'current_draw' field must be an integer in [-32768, 32767]"
        self._current_draw = value
