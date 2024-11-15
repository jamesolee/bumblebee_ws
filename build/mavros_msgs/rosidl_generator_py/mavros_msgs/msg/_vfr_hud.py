# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mavros_msgs:msg/VfrHud.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VfrHud(type):
    """Metaclass of message 'VfrHud'."""

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
                'mavros_msgs.msg.VfrHud')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vfr_hud
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vfr_hud
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vfr_hud
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vfr_hud
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vfr_hud

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class VfrHud(metaclass=Metaclass_VfrHud):
    """Message class 'VfrHud'."""

    __slots__ = [
        '_header',
        '_airspeed',
        '_groundspeed',
        '_heading',
        '_throttle',
        '_altitude',
        '_climb',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'airspeed': 'float',
        'groundspeed': 'float',
        'heading': 'int16',
        'throttle': 'float',
        'altitude': 'float',
        'climb': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.airspeed = kwargs.get('airspeed', float())
        self.groundspeed = kwargs.get('groundspeed', float())
        self.heading = kwargs.get('heading', int())
        self.throttle = kwargs.get('throttle', float())
        self.altitude = kwargs.get('altitude', float())
        self.climb = kwargs.get('climb', float())

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
        if self.header != other.header:
            return False
        if self.airspeed != other.airspeed:
            return False
        if self.groundspeed != other.groundspeed:
            return False
        if self.heading != other.heading:
            return False
        if self.throttle != other.throttle:
            return False
        if self.altitude != other.altitude:
            return False
        if self.climb != other.climb:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def airspeed(self):
        """Message field 'airspeed'."""
        return self._airspeed

    @airspeed.setter
    def airspeed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'airspeed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'airspeed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._airspeed = value

    @builtins.property
    def groundspeed(self):
        """Message field 'groundspeed'."""
        return self._groundspeed

    @groundspeed.setter
    def groundspeed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'groundspeed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'groundspeed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._groundspeed = value

    @builtins.property
    def heading(self):
        """Message field 'heading'."""
        return self._heading

    @heading.setter
    def heading(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'heading' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'heading' field must be an integer in [-32768, 32767]"
        self._heading = value

    @builtins.property
    def throttle(self):
        """Message field 'throttle'."""
        return self._throttle

    @throttle.setter
    def throttle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'throttle' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'throttle' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._throttle = value

    @builtins.property
    def altitude(self):
        """Message field 'altitude'."""
        return self._altitude

    @altitude.setter
    def altitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'altitude' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'altitude' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._altitude = value

    @builtins.property
    def climb(self):
        """Message field 'climb'."""
        return self._climb

    @climb.setter
    def climb(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'climb' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'climb' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._climb = value
