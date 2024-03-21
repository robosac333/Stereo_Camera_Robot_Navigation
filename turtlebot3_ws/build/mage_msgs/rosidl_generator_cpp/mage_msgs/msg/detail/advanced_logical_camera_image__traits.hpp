// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mage_msgs:msg/AdvancedLogicalCameraImage.idl
// generated code does not contain a copyright notice

#ifndef MAGE_MSGS__MSG__DETAIL__ADVANCED_LOGICAL_CAMERA_IMAGE__TRAITS_HPP_
#define MAGE_MSGS__MSG__DETAIL__ADVANCED_LOGICAL_CAMERA_IMAGE__TRAITS_HPP_

#include "mage_msgs/msg/detail/advanced_logical_camera_image__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'part_poses'
#include "mage_msgs/msg/detail/part_pose__traits.hpp"
// Member 'sensor_pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const mage_msgs::msg::AdvancedLogicalCameraImage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: part_poses
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.part_poses.size() == 0) {
      out << "part_poses: []\n";
    } else {
      out << "part_poses:\n";
      for (auto item : msg.part_poses) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: sensor_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_pose:\n";
    to_yaml(msg.sensor_pose, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const mage_msgs::msg::AdvancedLogicalCameraImage & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<mage_msgs::msg::AdvancedLogicalCameraImage>()
{
  return "mage_msgs::msg::AdvancedLogicalCameraImage";
}

template<>
inline const char * name<mage_msgs::msg::AdvancedLogicalCameraImage>()
{
  return "mage_msgs/msg/AdvancedLogicalCameraImage";
}

template<>
struct has_fixed_size<mage_msgs::msg::AdvancedLogicalCameraImage>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mage_msgs::msg::AdvancedLogicalCameraImage>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mage_msgs::msg::AdvancedLogicalCameraImage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MAGE_MSGS__MSG__DETAIL__ADVANCED_LOGICAL_CAMERA_IMAGE__TRAITS_HPP_
