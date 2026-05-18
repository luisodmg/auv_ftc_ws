# generated from rosidl_generator_py/resource/_idl.py.em
# with input from auv_control:srv/InjectFault.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_InjectFault_Request(type):
    """Metaclass of message 'InjectFault_Request'."""

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
            module = import_type_support('auv_control')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'auv_control.srv.InjectFault_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__inject_fault__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__inject_fault__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__inject_fault__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__inject_fault__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__inject_fault__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class InjectFault_Request(metaclass=Metaclass_InjectFault_Request):
    """Message class 'InjectFault_Request'."""

    __slots__ = [
        '_thruster_id',
        '_fault_factor',
        '_fault_type',
        '_ramp_seconds',
    ]

    _fields_and_field_types = {
        'thruster_id': 'int32',
        'fault_factor': 'double',
        'fault_type': 'string',
        'ramp_seconds': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.thruster_id = kwargs.get('thruster_id', int())
        self.fault_factor = kwargs.get('fault_factor', float())
        self.fault_type = kwargs.get('fault_type', str())
        self.ramp_seconds = kwargs.get('ramp_seconds', float())

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
        if self.thruster_id != other.thruster_id:
            return False
        if self.fault_factor != other.fault_factor:
            return False
        if self.fault_type != other.fault_type:
            return False
        if self.ramp_seconds != other.ramp_seconds:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def thruster_id(self):
        """Message field 'thruster_id'."""
        return self._thruster_id

    @thruster_id.setter
    def thruster_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'thruster_id' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'thruster_id' field must be an integer in [-2147483648, 2147483647]"
        self._thruster_id = value

    @builtins.property
    def fault_factor(self):
        """Message field 'fault_factor'."""
        return self._fault_factor

    @fault_factor.setter
    def fault_factor(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fault_factor' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'fault_factor' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._fault_factor = value

    @builtins.property
    def fault_type(self):
        """Message field 'fault_type'."""
        return self._fault_type

    @fault_type.setter
    def fault_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'fault_type' field must be of type 'str'"
        self._fault_type = value

    @builtins.property
    def ramp_seconds(self):
        """Message field 'ramp_seconds'."""
        return self._ramp_seconds

    @ramp_seconds.setter
    def ramp_seconds(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ramp_seconds' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ramp_seconds' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ramp_seconds = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_InjectFault_Response(type):
    """Metaclass of message 'InjectFault_Response'."""

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
            module = import_type_support('auv_control')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'auv_control.srv.InjectFault_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__inject_fault__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__inject_fault__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__inject_fault__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__inject_fault__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__inject_fault__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class InjectFault_Response(metaclass=Metaclass_InjectFault_Response):
    """Message class 'InjectFault_Response'."""

    __slots__ = [
        '_accepted',
        '_message',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        self.message = kwargs.get('message', str())

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
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
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

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value


class Metaclass_InjectFault(type):
    """Metaclass of service 'InjectFault'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('auv_control')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'auv_control.srv.InjectFault')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__inject_fault

            from auv_control.srv import _inject_fault
            if _inject_fault.Metaclass_InjectFault_Request._TYPE_SUPPORT is None:
                _inject_fault.Metaclass_InjectFault_Request.__import_type_support__()
            if _inject_fault.Metaclass_InjectFault_Response._TYPE_SUPPORT is None:
                _inject_fault.Metaclass_InjectFault_Response.__import_type_support__()


class InjectFault(metaclass=Metaclass_InjectFault):
    from auv_control.srv._inject_fault import InjectFault_Request as Request
    from auv_control.srv._inject_fault import InjectFault_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
