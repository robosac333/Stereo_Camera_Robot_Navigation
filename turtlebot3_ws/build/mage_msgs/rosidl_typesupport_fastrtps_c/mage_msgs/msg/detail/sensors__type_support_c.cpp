// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mage_msgs:msg/Sensors.idl
// generated code does not contain a copyright notice
#include "mage_msgs/msg/detail/sensors__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mage_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mage_msgs/msg/detail/sensors__struct.h"
#include "mage_msgs/msg/detail/sensors__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Sensors__ros_msg_type = mage_msgs__msg__Sensors;

static bool _Sensors__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Sensors__ros_msg_type * ros_message = static_cast<const _Sensors__ros_msg_type *>(untyped_ros_message);
  // Field name: break_beam
  {
    cdr << (ros_message->break_beam ? true : false);
  }

  // Field name: proximity
  {
    cdr << (ros_message->proximity ? true : false);
  }

  // Field name: laser_profiler
  {
    cdr << (ros_message->laser_profiler ? true : false);
  }

  // Field name: lidar
  {
    cdr << (ros_message->lidar ? true : false);
  }

  // Field name: camera
  {
    cdr << (ros_message->camera ? true : false);
  }

  // Field name: logical_camera
  {
    cdr << (ros_message->logical_camera ? true : false);
  }

  return true;
}

static bool _Sensors__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Sensors__ros_msg_type * ros_message = static_cast<_Sensors__ros_msg_type *>(untyped_ros_message);
  // Field name: break_beam
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->break_beam = tmp ? true : false;
  }

  // Field name: proximity
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->proximity = tmp ? true : false;
  }

  // Field name: laser_profiler
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->laser_profiler = tmp ? true : false;
  }

  // Field name: lidar
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->lidar = tmp ? true : false;
  }

  // Field name: camera
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->camera = tmp ? true : false;
  }

  // Field name: logical_camera
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->logical_camera = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mage_msgs
size_t get_serialized_size_mage_msgs__msg__Sensors(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Sensors__ros_msg_type * ros_message = static_cast<const _Sensors__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name break_beam
  {
    size_t item_size = sizeof(ros_message->break_beam);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name proximity
  {
    size_t item_size = sizeof(ros_message->proximity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name laser_profiler
  {
    size_t item_size = sizeof(ros_message->laser_profiler);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lidar
  {
    size_t item_size = sizeof(ros_message->lidar);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name camera
  {
    size_t item_size = sizeof(ros_message->camera);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name logical_camera
  {
    size_t item_size = sizeof(ros_message->logical_camera);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Sensors__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mage_msgs__msg__Sensors(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mage_msgs
size_t max_serialized_size_mage_msgs__msg__Sensors(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: break_beam
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: proximity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: laser_profiler
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lidar
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: camera
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: logical_camera
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _Sensors__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_mage_msgs__msg__Sensors(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Sensors = {
  "mage_msgs::msg",
  "Sensors",
  _Sensors__cdr_serialize,
  _Sensors__cdr_deserialize,
  _Sensors__get_serialized_size,
  _Sensors__max_serialized_size
};

static rosidl_message_type_support_t _Sensors__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Sensors,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mage_msgs, msg, Sensors)() {
  return &_Sensors__type_support;
}

#if defined(__cplusplus)
}
#endif
