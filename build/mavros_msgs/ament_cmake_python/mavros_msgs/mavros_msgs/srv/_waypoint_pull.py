# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mavros_msgs:srv/WaypointPull.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_WaypointPull_Request(type):
    """Metaclass of message 'WaypointPull_Request'."""

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
            module = import_type_support('mavros_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mavros_msgs.srv.WaypointPull_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__waypoint_pull__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__waypoint_pull__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__waypoint_pull__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__waypoint_pull__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__waypoint_pull__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class WaypointPull_Request(metaclass=Metaclass_WaypointPull_Request):
    """Message class 'WaypointPull_Request'."""

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

import builtins  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_WaypointPull_Response(type):
    """Metaclass of message 'WaypointPull_Response'."""

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
            module = import_type_support('mavros_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mavros_msgs.srv.WaypointPull_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__waypoint_pull__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__waypoint_pull__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__waypoint_pull__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__waypoint_pull__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__waypoint_pull__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class WaypointPull_Response(metaclass=Metaclass_WaypointPull_Response):
    """Message class 'WaypointPull_Response'."""

    __slots__ = [
        '_success',
        '_wp_received',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'wp_received': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.wp_received = kwargs.get('wp_received', int())

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
        if self.success != other.success:
            return False
        if self.wp_received != other.wp_received:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def wp_received(self):
        """Message field 'wp_received'."""
        return self._wp_received

    @wp_received.setter
    def wp_received(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'wp_received' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'wp_received' field must be an unsigned integer in [0, 4294967295]"
        self._wp_received = value


class Metaclass_WaypointPull(type):
    """Metaclass of service 'WaypointPull'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mavros_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mavros_msgs.srv.WaypointPull')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__waypoint_pull

            from mavros_msgs.srv import _waypoint_pull
            if _waypoint_pull.Metaclass_WaypointPull_Request._TYPE_SUPPORT is None:
                _waypoint_pull.Metaclass_WaypointPull_Request.__import_type_support__()
            if _waypoint_pull.Metaclass_WaypointPull_Response._TYPE_SUPPORT is None:
                _waypoint_pull.Metaclass_WaypointPull_Response.__import_type_support__()


class WaypointPull(metaclass=Metaclass_WaypointPull):
    from mavros_msgs.srv._waypoint_pull import WaypointPull_Request as Request
    from mavros_msgs.srv._waypoint_pull import WaypointPull_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')