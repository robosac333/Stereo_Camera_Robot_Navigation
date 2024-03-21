// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mage_msgs:msg/AdvancedLogicalCameraImage.idl
// generated code does not contain a copyright notice
#include "mage_msgs/msg/detail/advanced_logical_camera_image__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mage_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mage_msgs/msg/detail/advanced_logical_camera_image__struct.h"
#include "mage_msgs/msg/detail/advanced_logical_camera_image__functions.h"
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

#include "geometry_msgs/msg/detail/pose__functions.h"  // sensor_pose
#include "mage_msgs/msg/detail/part_pose__functions.h"  // part_poses

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
size_t get_serialized_size_mage_msgs__msg__PartPose(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_mage_msgs__msg__PartPose(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mage_msgs, msg, PartPose)();


using _AdvancedLogicalCameraImage__ros_msg_type = mage_msgs__msg__AdvancedLogicalCameraImage;

static bool _AdvancedLogicalCameraImage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _AdvancedLogicalCameraImage__ros_msg_type * ros_message = static_cast<const _AdvancedLogicalCameraImage__ros_msg_type *>(untyped_ros_message);
  // Field name: part_poses
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, mage_msgs, msg, PartPose
      )()->data);
    size_t size = ros_message->part_poses.size;
    auto array_ptr = ros_message->part_poses.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: sensor_pose
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->sensor_pose, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _AdvancedLogicalCameraImage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _AdvancedLogicalCameraImage__ros_msg_type * ros_message = static_cast<_AdvancedLogicalCameraImage__ros_msg_type *>(untyped_ros_message);
  // Field name: part_poses
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, mage_msgs, msg, PartPose
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->part_poses.data) {
      mage_msgs__msg__PartPose__Sequence__fini(&ros_message->part_poses);
    }
    if (!mage_msgs__msg__PartPose__Sequence__init(&ros_message->part_poses, size)) {
      fprintf(stderr, "failed to create array for field 'part_poses'");
      return false;
    }
    auto array_ptr = ros_message->part_poses.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: sensor_pose
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Pose
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->sensor_pose))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mage_msgs
size_t get_serialized_size_mage_msgs__msg__AdvancedLogicalCameraImage(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _AdvancedLogicalCameraImage__ros_msg_type * ros_message = static_cast<const _AdvancedLogicalCameraImage__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name part_poses
  {
    size_t array_size = ros_message->part_poses.size;
    auto array_ptr = ros_message->part_poses.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_mage_msgs__msg__PartPose(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name sensor_pose

  current_alignment += get_serialized_size_geometry_msgs__msg__Pose(
    &(ros_message->sensor_pose), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _AdvancedLogicalCameraImage__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mage_msgs__msg__AdvancedLogicalCameraImage(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mage_msgs
size_t max_serialized_size_mage_msgs__msg__AdvancedLogicalCameraImage(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: part_poses
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_mage_msgs__msg__PartPose(
        full_bounded, current_alignment);
    }
  }
  // member: sensor_pose
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

static size_t _AdvancedLogicalCameraImage__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_mage_msgs__msg__AdvancedLogicalCameraImage(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_AdvancedLogicalCameraImage = {
  "mage_msgs::msg",
  "AdvancedLogicalCameraImage",
  _AdvancedLogicalCameraImage__cdr_serialize,
  _AdvancedLogicalCameraImage__cdr_deserialize,
  _AdvancedLogicalCameraImage__get_serialized_size,
  _AdvancedLogicalCameraImage__max_serialized_size
};

static rosidl_message_type_support_t _AdvancedLogicalCameraImage__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_AdvancedLogicalCameraImage,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mage_msgs, msg, AdvancedLogicalCameraImage)() {
  return &_AdvancedLogicalCameraImage__type_support;
}

#if defined(__cplusplus)
}
#endif
