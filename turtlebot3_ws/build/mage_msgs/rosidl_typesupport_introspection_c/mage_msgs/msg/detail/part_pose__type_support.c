// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mage_msgs:msg/PartPose.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mage_msgs/msg/detail/part_pose__rosidl_typesupport_introspection_c.h"
#include "mage_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mage_msgs/msg/detail/part_pose__functions.h"
#include "mage_msgs/msg/detail/part_pose__struct.h"


// Include directives for member types
// Member `part`
#include "mage_msgs/msg/part.h"
// Member `part`
#include "mage_msgs/msg/detail/part__rosidl_typesupport_introspection_c.h"
// Member `pose`
#include "geometry_msgs/msg/pose.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PartPose__rosidl_typesupport_introspection_c__PartPose_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mage_msgs__msg__PartPose__init(message_memory);
}

void PartPose__rosidl_typesupport_introspection_c__PartPose_fini_function(void * message_memory)
{
  mage_msgs__msg__PartPose__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember PartPose__rosidl_typesupport_introspection_c__PartPose_message_member_array[2] = {
  {
    "part",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mage_msgs__msg__PartPose, part),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mage_msgs__msg__PartPose, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PartPose__rosidl_typesupport_introspection_c__PartPose_message_members = {
  "mage_msgs__msg",  // message namespace
  "PartPose",  // message name
  2,  // number of fields
  sizeof(mage_msgs__msg__PartPose),
  PartPose__rosidl_typesupport_introspection_c__PartPose_message_member_array,  // message members
  PartPose__rosidl_typesupport_introspection_c__PartPose_init_function,  // function to initialize message memory (memory has to be allocated)
  PartPose__rosidl_typesupport_introspection_c__PartPose_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PartPose__rosidl_typesupport_introspection_c__PartPose_message_type_support_handle = {
  0,
  &PartPose__rosidl_typesupport_introspection_c__PartPose_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mage_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mage_msgs, msg, PartPose)() {
  PartPose__rosidl_typesupport_introspection_c__PartPose_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mage_msgs, msg, Part)();
  PartPose__rosidl_typesupport_introspection_c__PartPose_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!PartPose__rosidl_typesupport_introspection_c__PartPose_message_type_support_handle.typesupport_identifier) {
    PartPose__rosidl_typesupport_introspection_c__PartPose_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PartPose__rosidl_typesupport_introspection_c__PartPose_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
