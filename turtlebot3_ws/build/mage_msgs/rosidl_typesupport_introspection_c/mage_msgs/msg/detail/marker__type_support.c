// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mage_msgs:msg/Marker.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mage_msgs/msg/detail/marker__rosidl_typesupport_introspection_c.h"
#include "mage_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mage_msgs/msg/detail/marker__functions.h"
#include "mage_msgs/msg/detail/marker__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `pose`
#include "geometry_msgs/msg/pose_with_covariance.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose_with_covariance__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Marker__rosidl_typesupport_introspection_c__Marker_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mage_msgs__msg__Marker__init(message_memory);
}

void Marker__rosidl_typesupport_introspection_c__Marker_fini_function(void * message_memory)
{
  mage_msgs__msg__Marker__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Marker__rosidl_typesupport_introspection_c__Marker_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mage_msgs__msg__Marker, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mage_msgs__msg__Marker, id),  // bytes offset in struct
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
    offsetof(mage_msgs__msg__Marker, pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "confidence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mage_msgs__msg__Marker, confidence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Marker__rosidl_typesupport_introspection_c__Marker_message_members = {
  "mage_msgs__msg",  // message namespace
  "Marker",  // message name
  4,  // number of fields
  sizeof(mage_msgs__msg__Marker),
  Marker__rosidl_typesupport_introspection_c__Marker_message_member_array,  // message members
  Marker__rosidl_typesupport_introspection_c__Marker_init_function,  // function to initialize message memory (memory has to be allocated)
  Marker__rosidl_typesupport_introspection_c__Marker_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Marker__rosidl_typesupport_introspection_c__Marker_message_type_support_handle = {
  0,
  &Marker__rosidl_typesupport_introspection_c__Marker_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mage_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mage_msgs, msg, Marker)() {
  Marker__rosidl_typesupport_introspection_c__Marker_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  Marker__rosidl_typesupport_introspection_c__Marker_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, PoseWithCovariance)();
  if (!Marker__rosidl_typesupport_introspection_c__Marker_message_type_support_handle.typesupport_identifier) {
    Marker__rosidl_typesupport_introspection_c__Marker_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Marker__rosidl_typesupport_introspection_c__Marker_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
