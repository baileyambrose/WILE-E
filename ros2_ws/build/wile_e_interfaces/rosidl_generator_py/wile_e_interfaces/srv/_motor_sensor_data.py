# generated from rosidl_generator_py/resource/_idl.py.em
# with input from wile_e_interfaces:srv/MotorSensorData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MotorSensorData_Request(type):
    """Metaclass of message 'MotorSensorData_Request'."""

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
                'wile_e_interfaces.srv.MotorSensorData_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__motor_sensor_data__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__motor_sensor_data__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__motor_sensor_data__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__motor_sensor_data__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__motor_sensor_data__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MotorSensorData_Request(metaclass=Metaclass_MotorSensorData_Request):
    """Message class 'MotorSensorData_Request'."""

    __slots__ = [
        '_call',
    ]

    _fields_and_field_types = {
        'call': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.call = kwargs.get('call', bool())

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
        if self.call != other.call:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def call(self):
        """Message field 'call'."""
        return self._call

    @call.setter
    def call(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'call' field must be of type 'bool'"
        self._call = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_MotorSensorData_Response(type):
    """Metaclass of message 'MotorSensorData_Response'."""

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
                'wile_e_interfaces.srv.MotorSensorData_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__motor_sensor_data__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__motor_sensor_data__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__motor_sensor_data__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__motor_sensor_data__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__motor_sensor_data__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MotorSensorData_Response(metaclass=Metaclass_MotorSensorData_Response):
    """Message class 'MotorSensorData_Response'."""

    __slots__ = [
        '_left_shoulder',
        '_right_shoulder',
        '_left_elbow',
        '_right_elbow',
    ]

    _fields_and_field_types = {
        'left_shoulder': 'int16',
        'right_shoulder': 'int16',
        'left_elbow': 'uint16',
        'right_elbow': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.left_shoulder = kwargs.get('left_shoulder', int())
        self.right_shoulder = kwargs.get('right_shoulder', int())
        self.left_elbow = kwargs.get('left_elbow', int())
        self.right_elbow = kwargs.get('right_elbow', int())

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


class Metaclass_MotorSensorData(type):
    """Metaclass of service 'MotorSensorData'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('wile_e_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'wile_e_interfaces.srv.MotorSensorData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__motor_sensor_data

            from wile_e_interfaces.srv import _motor_sensor_data
            if _motor_sensor_data.Metaclass_MotorSensorData_Request._TYPE_SUPPORT is None:
                _motor_sensor_data.Metaclass_MotorSensorData_Request.__import_type_support__()
            if _motor_sensor_data.Metaclass_MotorSensorData_Response._TYPE_SUPPORT is None:
                _motor_sensor_data.Metaclass_MotorSensorData_Response.__import_type_support__()


class MotorSensorData(metaclass=Metaclass_MotorSensorData):
    from wile_e_interfaces.srv._motor_sensor_data import MotorSensorData_Request as Request
    from wile_e_interfaces.srv._motor_sensor_data import MotorSensorData_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
