// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mage_msgs:msg/Marker.idl
// generated code does not contain a copyright notice

#ifndef MAGE_MSGS__MSG__DETAIL__MARKER__BUILDER_HPP_
#define MAGE_MSGS__MSG__DETAIL__MARKER__BUILDER_HPP_

#include "mage_msgs/msg/detail/marker__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mage_msgs
{

namespace msg
{

namespace builder
{

class Init_Marker_confidence
{
public:
  explicit Init_Marker_confidence(::mage_msgs::msg::Marker & msg)
  : msg_(msg)
  {}
  ::mage_msgs::msg::Marker confidence(::mage_msgs::msg::Marker::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mage_msgs::msg::Marker msg_;
};

class Init_Marker_pose
{
public:
  explicit Init_Marker_pose(::mage_msgs::msg::Marker & msg)
  : msg_(msg)
  {}
  Init_Marker_confidence pose(::mage_msgs::msg::Marker::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_Marker_confidence(msg_);
  }

private:
  ::mage_msgs::msg::Marker msg_;
};

class Init_Marker_id
{
public:
  explicit Init_Marker_id(::mage_msgs::msg::Marker & msg)
  : msg_(msg)
  {}
  Init_Marker_pose id(::mage_msgs::msg::Marker::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Marker_pose(msg_);
  }

private:
  ::mage_msgs::msg::Marker msg_;
};

class Init_Marker_header
{
public:
  Init_Marker_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Marker_id header(::mage_msgs::msg::Marker::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Marker_id(msg_);
  }

private:
  ::mage_msgs::msg::Marker msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mage_msgs::msg::Marker>()
{
  return mage_msgs::msg::builder::Init_Marker_header();
}

}  // namespace mage_msgs

#endif  // MAGE_MSGS__MSG__DETAIL__MARKER__BUILDER_HPP_
