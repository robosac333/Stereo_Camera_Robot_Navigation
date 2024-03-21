// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mage_msgs:msg/Marker.idl
// generated code does not contain a copyright notice

#ifndef MAGE_MSGS__MSG__DETAIL__MARKER__TRAITS_HPP_
#define MAGE_MSGS__MSG__DETAIL__MARKER__TRAITS_HPP_

#include "mage_msgs/msg/detail/marker__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose_with_covariance__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const mage_msgs::msg::Marker & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_yaml(msg.header, out, indentation + 2);
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_yaml(msg.pose, out, indentation + 2);
  }

  // member: confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence: ";
    value_to_yaml(msg.confidence, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const mage_msgs::msg::Marker & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<mage_msgs::msg::Marker>()
{
  return "mage_msgs::msg::Marker";
}

template<>
inline const char * name<mage_msgs::msg::Marker>()
{
  return "mage_msgs/msg/Marker";
}

template<>
struct has_fixed_size<mage_msgs::msg::Marker>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::PoseWithCovariance>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<mage_msgs::msg::Marker>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::PoseWithCovariance>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<mage_msgs::msg::Marker>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MAGE_MSGS__MSG__DETAIL__MARKER__TRAITS_HPP_
