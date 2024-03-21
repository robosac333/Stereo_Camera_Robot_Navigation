// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mage_msgs:msg/PartPose.idl
// generated code does not contain a copyright notice

#ifndef MAGE_MSGS__MSG__DETAIL__PART_POSE__TRAITS_HPP_
#define MAGE_MSGS__MSG__DETAIL__PART_POSE__TRAITS_HPP_

#include "mage_msgs/msg/detail/part_pose__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'part'
#include "mage_msgs/msg/detail/part__traits.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const mage_msgs::msg::PartPose & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: part
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "part:\n";
    to_yaml(msg.part, out, indentation + 2);
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_yaml(msg.pose, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const mage_msgs::msg::PartPose & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<mage_msgs::msg::PartPose>()
{
  return "mage_msgs::msg::PartPose";
}

template<>
inline const char * name<mage_msgs::msg::PartPose>()
{
  return "mage_msgs/msg/PartPose";
}

template<>
struct has_fixed_size<mage_msgs::msg::PartPose>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value && has_fixed_size<mage_msgs::msg::Part>::value> {};

template<>
struct has_bounded_size<mage_msgs::msg::PartPose>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value && has_bounded_size<mage_msgs::msg::Part>::value> {};

template<>
struct is_message<mage_msgs::msg::PartPose>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MAGE_MSGS__MSG__DETAIL__PART_POSE__TRAITS_HPP_
