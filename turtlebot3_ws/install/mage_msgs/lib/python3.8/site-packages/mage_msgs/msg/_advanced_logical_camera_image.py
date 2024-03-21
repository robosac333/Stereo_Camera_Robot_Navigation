# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mage_msgs:msg/AdvancedLogicalCameraImage.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AdvancedLogicalCameraImage(type):
    """Metaclass of message 'AdvancedLogicalCameraImage'."""

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
            module = import_type_support('mage_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mage_msgs.msg.AdvancedLogicalCameraImage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__advanced_logical_camera_image
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__advanced_logical_camera_image
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__advanced_logical_camera_image
            cls._TYPE_SUPPORT = module.type_support_msg__msg__advanced_logical_camera_image
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__advanced_logical_camera_image

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

            from mage_msgs.msg import PartPose
            if PartPose.__class__._TYPE_SUPPORT is None:
                PartPose.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AdvancedLogicalCameraImage(metaclass=Metaclass_AdvancedLogicalCameraImage):
    """Message class 'AdvancedLogicalCameraImage'."""

    __slots__ = [
        '_part_poses',
        '_sensor_pose',
    ]

    _fields_and_field_types = {
        'part_poses': 'sequence<mage_msgs/PartPose>',
        'sensor_pose': 'geometry_msgs/Pose',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['mage_msgs', 'msg'], 'PartPose')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.part_poses = kwargs.get('part_poses', [])
        from geometry_msgs.msg import Pose
        self.sensor_pose = kwargs.get('sensor_pose', Pose())

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
        if self.part_poses != other.part_poses:
            return False
        if self.sensor_pose != other.sensor_pose:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def part_poses(self):
        """Message field 'part_poses'."""
        return self._part_poses

    @part_poses.setter
    def part_poses(self, value):
        if __debug__:
            from mage_msgs.msg import PartPose
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
                 all(isinstance(v, PartPose) for v in value) and
                 True), \
                "The 'part_poses' field must be a set or sequence and each value of type 'PartPose'"
        self._part_poses = value

    @property
    def sensor_pose(self):
        """Message field 'sensor_pose'."""
        return self._sensor_pose

    @sensor_pose.setter
    def sensor_pose(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'sensor_pose' field must be a sub message of type 'Pose'"
        self._sensor_pose = value
