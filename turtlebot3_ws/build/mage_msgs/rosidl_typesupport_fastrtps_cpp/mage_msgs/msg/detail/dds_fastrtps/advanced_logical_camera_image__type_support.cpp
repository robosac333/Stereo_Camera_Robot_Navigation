// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from mage_msgs:msg/AdvancedLogicalCameraImage.idl
// generated code does not contain a copyright notice
#include "mage_msgs/msg/detail/advanced_logical_camera_image__rosidl_typesupport_fastrtps_cpp.hpp"
#include "mage_msgs/msg/detail/advanced_logical_camera_image__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace mage_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const mage_msgs::msg::PartPose &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  mage_msgs::msg::PartPose &);
size_t get_serialized_size(
  const mage_msgs::msg::PartPose &,
  size_t current_alignment);
size_t
max_serialized_size_PartPose(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace mage_msgs

namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::Pose &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::Pose &);
size_t get_serialized_size(
  const geometry_msgs::msg::Pose &,
  size_t current_alignment);
size_t
max_serialized_size_Pose(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs


namespace mage_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mage_msgs
cdr_serialize(
  const mage_msgs::msg::AdvancedLogicalCameraImage & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: part_poses
  {
    size_t size = ros_message.part_poses.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      mage_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.part_poses[i],
        cdr);
    }
  }
  // Member: sensor_pose
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.sensor_pose,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mage_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mage_msgs::msg::AdvancedLogicalCameraImage & ros_message)
{
  // Member: part_poses
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.part_poses.resize(size);
    for (size_t i = 0; i < size; i++) {
      mage_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.part_poses[i]);
    }
  }

  // Member: sensor_pose
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.sensor_pose);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mage_msgs
get_serialized_size(
  const mage_msgs::msg::AdvancedLogicalCameraImage & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: part_poses
  {
    size_t array_size = ros_message.part_poses.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        mage_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.part_poses[index], current_alignment);
    }
  }
  // Member: sensor_pose

  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.sensor_pose, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mage_msgs
max_serialized_size_AdvancedLogicalCameraImage(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: part_poses
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        mage_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_PartPose(
        full_bounded, current_alignment);
    }
  }

  // Member: sensor_pose
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Pose(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _AdvancedLogicalCameraImage__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const mage_msgs::msg::AdvancedLogicalCameraImage *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _AdvancedLogicalCameraImage__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<mage_msgs::msg::AdvancedLogicalCameraImage *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _AdvancedLogicalCameraImage__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const mage_msgs::msg::AdvancedLogicalCameraImage *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _AdvancedLogicalCameraImage__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_AdvancedLogicalCameraImage(full_bounded, 0);
}

static message_type_support_callbacks_t _AdvancedLogicalCameraImage__callbacks = {
  "mage_msgs::msg",
  "AdvancedLogicalCameraImage",
  _AdvancedLogicalCameraImage__cdr_serialize,
  _AdvancedLogicalCameraImage__cdr_deserialize,
  _AdvancedLogicalCameraImage__get_serialized_size,
  _AdvancedLogicalCameraImage__max_serialized_size
};

static rosidl_message_type_support_t _AdvancedLogicalCameraImage__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_AdvancedLogicalCameraImage__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace mage_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_mage_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<mage_msgs::msg::AdvancedLogicalCameraImage>()
{
  return &mage_msgs::msg::typesupport_fastrtps_cpp::_AdvancedLogicalCameraImage__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mage_msgs, msg, AdvancedLogicalCameraImage)() {
  return &mage_msgs::msg::typesupport_fastrtps_cpp::_AdvancedLogicalCameraImage__handle;
}

#ifdef __cplusplus
}
#endif
