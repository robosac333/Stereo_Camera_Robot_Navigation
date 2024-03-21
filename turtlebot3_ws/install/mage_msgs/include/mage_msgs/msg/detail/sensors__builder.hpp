// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mage_msgs:msg/Sensors.idl
// generated code does not contain a copyright notice

#ifndef MAGE_MSGS__MSG__DETAIL__SENSORS__BUILDER_HPP_
#define MAGE_MSGS__MSG__DETAIL__SENSORS__BUILDER_HPP_

#include "mage_msgs/msg/detail/sensors__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mage_msgs
{

namespace msg
{

namespace builder
{

class Init_Sensors_logical_camera
{
public:
  explicit Init_Sensors_logical_camera(::mage_msgs::msg::Sensors & msg)
  : msg_(msg)
  {}
  ::mage_msgs::msg::Sensors logical_camera(::mage_msgs::msg::Sensors::_logical_camera_type arg)
  {
    msg_.logical_camera = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mage_msgs::msg::Sensors msg_;
};

class Init_Sensors_camera
{
public:
  explicit Init_Sensors_camera(::mage_msgs::msg::Sensors & msg)
  : msg_(msg)
  {}
  Init_Sensors_logical_camera camera(::mage_msgs::msg::Sensors::_camera_type arg)
  {
    msg_.camera = std::move(arg);
    return Init_Sensors_logical_camera(msg_);
  }

private:
  ::mage_msgs::msg::Sensors msg_;
};

class Init_Sensors_lidar
{
public:
  explicit Init_Sensors_lidar(::mage_msgs::msg::Sensors & msg)
  : msg_(msg)
  {}
  Init_Sensors_camera lidar(::mage_msgs::msg::Sensors::_lidar_type arg)
  {
    msg_.lidar = std::move(arg);
    return Init_Sensors_camera(msg_);
  }

private:
  ::mage_msgs::msg::Sensors msg_;
};

class Init_Sensors_laser_profiler
{
public:
  explicit Init_Sensors_laser_profiler(::mage_msgs::msg::Sensors & msg)
  : msg_(msg)
  {}
  Init_Sensors_lidar laser_profiler(::mage_msgs::msg::Sensors::_laser_profiler_type arg)
  {
    msg_.laser_profiler = std::move(arg);
    return Init_Sensors_lidar(msg_);
  }

private:
  ::mage_msgs::msg::Sensors msg_;
};

class Init_Sensors_proximity
{
public:
  explicit Init_Sensors_proximity(::mage_msgs::msg::Sensors & msg)
  : msg_(msg)
  {}
  Init_Sensors_laser_profiler proximity(::mage_msgs::msg::Sensors::_proximity_type arg)
  {
    msg_.proximity = std::move(arg);
    return Init_Sensors_laser_profiler(msg_);
  }

private:
  ::mage_msgs::msg::Sensors msg_;
};

class Init_Sensors_break_beam
{
public:
  Init_Sensors_break_beam()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Sensors_proximity break_beam(::mage_msgs::msg::Sensors::_break_beam_type arg)
  {
    msg_.break_beam = std::move(arg);
    return Init_Sensors_proximity(msg_);
  }

private:
  ::mage_msgs::msg::Sensors msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mage_msgs::msg::Sensors>()
{
  return mage_msgs::msg::builder::Init_Sensors_break_beam();
}

}  // namespace mage_msgs

#endif  // MAGE_MSGS__MSG__DETAIL__SENSORS__BUILDER_HPP_
