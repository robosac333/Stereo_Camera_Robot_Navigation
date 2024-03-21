// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from mage_msgs:msg/Sensors.idl
// generated code does not contain a copyright notice
#include "mage_msgs/msg/detail/sensors__rosidl_typesupport_fastrtps_cpp.hpp"
#include "mage_msgs/msg/detail/sensors__struct.hpp"

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

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mage_msgs
cdr_serialize(
  const mage_msgs::msg::Sensors & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: break_beam
  cdr << (ros_message.break_beam ? true : false);
  // Member: proximity
  cdr << (ros_message.proximity ? true : false);
  // Member: laser_profiler
  cdr << (ros_message.laser_profiler ? true : false);
  // Member: lidar
  cdr << (ros_message.lidar ? true : false);
  // Member: camera
  cdr << (ros_message.camera ? true : false);
  // Member: logical_camera
  cdr << (ros_message.logical_camera ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mage_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mage_msgs::msg::Sensors & ros_message)
{
  // Member: break_beam
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.break_beam = tmp ? true : false;
  }

  // Member: proximity
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.proximity = tmp ? true : false;
  }

  // Member: laser_profiler
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.laser_profiler = tmp ? true : false;
  }

  // Member: lidar
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.lidar = tmp ? true : false;
  }

  // Member: camera
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.camera = tmp ? true : false;
  }

  // Member: logical_camera
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.logical_camera = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mage_msgs
get_serialized_size(
  const mage_msgs::msg::Sensors & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: break_beam
  {
    size_t item_size = sizeof(ros_message.break_beam);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: proximity
  {
    size_t item_size = sizeof(ros_message.proximity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: laser_profiler
  {
    size_t item_size = sizeof(ros_message.laser_profiler);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lidar
  {
    size_t item_size = sizeof(ros_message.lidar);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: camera
  {
    size_t item_size = sizeof(ros_message.camera);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: logical_camera
  {
    size_t item_size = sizeof(ros_message.logical_camera);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mage_msgs
max_serialized_size_Sensors(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: break_beam
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: proximity
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: laser_profiler
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: lidar
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: camera
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: logical_camera
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _Sensors__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const mage_msgs::msg::Sensors *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Sensors__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<mage_msgs::msg::Sensors *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Sensors__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const mage_msgs::msg::Sensors *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Sensors__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Sensors(full_bounded, 0);
}

static message_type_support_callbacks_t _Sensors__callbacks = {
  "mage_msgs::msg",
  "Sensors",
  _Sensors__cdr_serialize,
  _Sensors__cdr_deserialize,
  _Sensors__get_serialized_size,
  _Sensors__max_serialized_size
};

static rosidl_message_type_support_t _Sensors__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Sensors__callbacks,
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
get_message_type_support_handle<mage_msgs::msg::Sensors>()
{
  return &mage_msgs::msg::typesupport_fastrtps_cpp::_Sensors__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mage_msgs, msg, Sensors)() {
  return &mage_msgs::msg::typesupport_fastrtps_cpp::_Sensors__handle;
}

#ifdef __cplusplus
}
#endif
