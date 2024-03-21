// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mage_msgs:msg/PartPose.idl
// generated code does not contain a copyright notice
#include "mage_msgs/msg/detail/part_pose__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mage_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mage_msgs/msg/detail/part_pose__struct.h"
#include "mage_msgs/msg/detail/part_pose__functions.h"
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

#include "geometry_msgs/msg/detail/pose__functions.h"  // pose
#include "mage_msgs/msg/detail/part__functions.h"  // part

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mage_msgs
size_t get_serialized_size_geometry_msgs__msg__Pose(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mage_msgs
size_t max_serialized_size_geometry_msgs__msg__Pose(
  bool & full_bounded,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_mage_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose)();
size_t get_serialized_size_mage_msgs__msg__Part(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_mage_msgs__msg__Part(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mage_msgs, msg, Part)();


using _PartPose__ros_msg_type = mage_msgs__msg__PartPose;

static bool _PartPose__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PartPose__ros_msg_type * ros_message = static_cast<const _PartPose__ros_msg_type *>(untyped_ros_message);
  // Field name: part
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, mage_msgs, msg, Part
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->part, cdr))
    {
      return false;
    }
  }

  // Field name: pose
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->pose, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _PartPose__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PartPose__ros_msg_type * ros_message = static_cast<_PartPose__ros_msg_type *>(untyped_ros_message);
  // Field name: part
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, mage_msgs, msg, Part
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->part))
    {
      return false;
    }
  }

  // Field name: pose
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->pose))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mage_msgs
size_t get_serialized_size_mage_msgs__msg__PartPose(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PartPose__ros_msg_type * ros_message = static_cast<const _PartPose__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name part

  current_alignment += get_serialized_size_mage_msgs__msg__Part(
    &(ros_message->part), current_alignment);
  // field.name pose

  current_alignment += get_serialized_size_geometry_msgs__msg__Pose(
    &(ros_message->pose), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _PartPose__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mage_msgs__msg__PartPose(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mage_msgs
size_t max_serialized_size_mage_msgs__msg__PartPose(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: part
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_mage_msgs__msg__Part(
        full_bounded, current_alignment);
    }
  }
  // member: pose
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_geometry_msgs__msg__Pose(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _PartPose__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_mage_msgs__msg__PartPose(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PartPose = {
  "mage_msgs::msg",
  "PartPose",
  _PartPose__cdr_serialize,
  _PartPose__cdr_deserialize,
  _PartPose__get_serialized_size,
  _PartPose__max_serialized_size
};

static rosidl_message_type_support_t _PartPose__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PartPose,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mage_msgs, msg, PartPose)() {
  return &_PartPose__type_support;
}

#if defined(__cplusplus)
}
#endif
