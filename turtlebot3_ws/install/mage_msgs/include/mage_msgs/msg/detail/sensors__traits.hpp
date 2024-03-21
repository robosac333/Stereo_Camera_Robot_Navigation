// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mage_msgs:msg/Sensors.idl
// generated code does not contain a copyright notice

#ifndef MAGE_MSGS__MSG__DETAIL__SENSORS__TRAITS_HPP_
#define MAGE_MSGS__MSG__DETAIL__SENSORS__TRAITS_HPP_

#include "mage_msgs/msg/detail/sensors__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const mage_msgs::msg::Sensors & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: break_beam
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "break_beam: ";
    value_to_yaml(msg.break_beam, out);
    out << "\n";
  }

  // member: proximity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "proximity: ";
    value_to_yaml(msg.proximity, out);
    out << "\n";
  }

  // member: laser_profiler
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "laser_profiler: ";
    value_to_yaml(msg.laser_profiler, out);
    out << "\n";
  }

  // member: lidar
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lidar: ";
    value_to_yaml(msg.lidar, out);
    out << "\n";
  }

  // member: camera
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "camera: ";
    value_to_yaml(msg.camera, out);
    out << "\n";
  }

  // member: logical_camera
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "logical_camera: ";
    value_to_yaml(msg.logical_camera, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const mage_msgs::msg::Sensors & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<mage_msgs::msg::Sensors>()
{
  return "mage_msgs::msg::Sensors";
}

template<>
inline const char * name<mage_msgs::msg::Sensors>()
{
  return "mage_msgs/msg/Sensors";
}

template<>
struct has_fixed_size<mage_msgs::msg::Sensors>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mage_msgs::msg::Sensors>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mage_msgs::msg::Sensors>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MAGE_MSGS__MSG__DETAIL__SENSORS__TRAITS_HPP_
