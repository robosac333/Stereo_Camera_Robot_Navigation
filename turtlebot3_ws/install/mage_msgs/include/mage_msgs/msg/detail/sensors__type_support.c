// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mage_msgs:msg/Sensors.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mage_msgs/msg/detail/sensors__rosidl_typesupport_introspection_c.h"
#include "mage_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mage_msgs/msg/detail/sensors__functions.h"
#include "mage_msgs/msg/detail/sensors__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Sensors__rosidl_typesupport_introspection_c__Sensors_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mage_msgs__msg__Sensors__init(message_memory);
}

void Sensors__rosidl_typesupport_introspection_c__Sensors_fini_function(void * message_memory)
{
  mage_msgs__msg__Sensors__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Sensors__rosidl_typesupport_introspection_c__Sensors_message_member_array[6] = {
  {
    "break_beam",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mage_msgs__msg__Sensors, break_beam),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "proximity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mage_msgs__msg__Sensors, proximity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "laser_profiler",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mage_msgs__msg__Sensors, laser_profiler),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lidar",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mage_msgs__msg__Sensors, lidar),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "camera",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mage_msgs__msg__Sensors, camera),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "logical_camera",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mage_msgs__msg__Sensors, logical_camera),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Sensors__rosidl_typesupport_introspection_c__Sensors_message_members = {
  "mage_msgs__msg",  // message namespace
  "Sensors",  // message name
  6,  // number of fields
  sizeof(mage_msgs__msg__Sensors),
  Sensors__rosidl_typesupport_introspection_c__Sensors_message_member_array,  // message members
  Sensors__rosidl_typesupport_introspection_c__Sensors_init_function,  // function to initialize message memory (memory has to be allocated)
  Sensors__rosidl_typesupport_introspection_c__Sensors_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Sensors__rosidl_typesupport_introspection_c__Sensors_message_type_support_handle = {
  0,
  &Sensors__rosidl_typesupport_introspection_c__Sensors_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mage_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mage_msgs, msg, Sensors)() {
  if (!Sensors__rosidl_typesupport_introspection_c__Sensors_message_type_support_handle.typesupport_identifier) {
    Sensors__rosidl_typesupport_introspection_c__Sensors_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Sensors__rosidl_typesupport_introspection_c__Sensors_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
