// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mage_msgs:msg/AdvancedLogicalCameraImage.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mage_msgs/msg/detail/advanced_logical_camera_image__rosidl_typesupport_introspection_c.h"
#include "mage_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mage_msgs/msg/detail/advanced_logical_camera_image__functions.h"
#include "mage_msgs/msg/detail/advanced_logical_camera_image__struct.h"


// Include directives for member types
// Member `part_poses`
#include "mage_msgs/msg/part_pose.h"
// Member `part_poses`
#include "mage_msgs/msg/detail/part_pose__rosidl_typesupport_introspection_c.h"
// Member `sensor_pose`
#include "geometry_msgs/msg/pose.h"
// Member `sensor_pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void AdvancedLogicalCameraImage__rosidl_typesupport_introspection_c__AdvancedLogicalCameraImage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mage_msgs__msg__AdvancedLogicalCameraImage__init(message_memory);
}

void AdvancedLogicalCameraImage__rosidl_typesupport_introspection_c__AdvancedLogicalCameraImage_fini_function(void * message_memory)
{
  mage_msgs__msg__AdvancedLogicalCameraImage__fini(message_memory);
}

size_t AdvancedLogicalCameraImage__rosidl_typesupport_introspection_c__size_function__PartPose__part_poses(
  const void * untyped_member)
{
  const mage_msgs__msg__PartPose__Sequence * member =
    (const mage_msgs__msg__PartPose__Sequence *)(untyped_member);
  return member->size;
}

const void * AdvancedLogicalCameraImage__rosidl_typesupport_introspection_c__get_const_function__PartPose__part_poses(
  const void * untyped_member, size_t index)
{
  const mage_msgs__msg__PartPose__Sequence * member =
    (const mage_msgs__msg__PartPose__Sequence *)(untyped_member);
  return &member->data[index];
}

void * AdvancedLogicalCameraImage__rosidl_typesupport_introspection_c__get_function__PartPose__part_poses(
  void * untyped_member, size_t index)
{
  mage_msgs__msg__PartPose__Sequence * member =
    (mage_msgs__msg__PartPose__Sequence *)(untyped_member);
  return &member->data[index];
}

bool AdvancedLogicalCameraImage__rosidl_typesupport_introspection_c__resize_function__PartPose__part_poses(
  void * untyped_member, size_t size)
{
  mage_msgs__msg__PartPose__Sequence * member =
    (mage_msgs__msg__PartPose__Sequence *)(untyped_member);
  mage_msgs__msg__PartPose__Sequence__fini(member);
  return mage_msgs__msg__PartPose__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember AdvancedLogicalCameraImage__rosidl_typesupport_introspection_c__AdvancedLogicalCameraImage_message_member_array[2] = {
  {
    "part_poses",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mage_msgs__msg__AdvancedLogicalCameraImage, part_poses),  // bytes offset in struct
    NULL,  // default value
    AdvancedLogicalCameraImage__rosidl_typesupport_introspection_c__size_function__PartPose__part_poses,  // size() function pointer
    AdvancedLogicalCameraImage__rosidl_typesupport_introspection_c__get_const_function__PartPose__part_poses,  // get_const(index) function pointer
    AdvancedLogicalCameraImage__rosidl_typesupport_introspection_c__get_function__PartPose__part_poses,  // get(index) function pointer
    AdvancedLogicalCameraImage__rosidl_typesupport_introspection_c__resize_function__PartPose__part_poses  // resize(index) function pointer
  },
  {
    "sensor_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mage_msgs__msg__AdvancedLogicalCameraImage, sensor_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AdvancedLogicalCameraImage__rosidl_typesupport_introspection_c__AdvancedLogicalCameraImage_message_members = {
  "mage_msgs__msg",  // message namespace
  "AdvancedLogicalCameraImage",  // message name
  2,  // number of fields
  sizeof(mage_msgs__msg__AdvancedLogicalCameraImage),
  AdvancedLogicalCameraImage__rosidl_typesupport_introspection_c__AdvancedLogicalCameraImage_message_member_array,  // message members
  AdvancedLogicalCameraImage__rosidl_typesupport_introspection_c__AdvancedLogicalCameraImage_init_function,  // function to initialize message memory (memory has to be allocated)
  AdvancedLogicalCameraImage__rosidl_typesupport_introspection_c__AdvancedLogicalCameraImage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AdvancedLogicalCameraImage__rosidl_typesupport_introspection_c__AdvancedLogicalCameraImage_message_type_support_handle = {
  0,
  &AdvancedLogicalCameraImage__rosidl_typesupport_introspection_c__AdvancedLogicalCameraImage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mage_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mage_msgs, msg, AdvancedLogicalCameraImage)() {
  AdvancedLogicalCameraImage__rosidl_typesupport_introspection_c__AdvancedLogicalCameraImage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mage_msgs, msg, PartPose)();
  AdvancedLogicalCameraImage__rosidl_typesupport_introspection_c__AdvancedLogicalCameraImage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!AdvancedLogicalCameraImage__rosidl_typesupport_introspection_c__AdvancedLogicalCameraImage_message_type_support_handle.typesupport_identifier) {
    AdvancedLogicalCameraImage__rosidl_typesupport_introspection_c__AdvancedLogicalCameraImage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AdvancedLogicalCameraImage__rosidl_typesupport_introspection_c__AdvancedLogicalCameraImage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
