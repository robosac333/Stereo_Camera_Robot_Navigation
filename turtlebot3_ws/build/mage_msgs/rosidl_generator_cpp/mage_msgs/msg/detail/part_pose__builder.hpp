// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mage_msgs:msg/PartPose.idl
// generated code does not contain a copyright notice

#ifndef MAGE_MSGS__MSG__DETAIL__PART_POSE__BUILDER_HPP_
#define MAGE_MSGS__MSG__DETAIL__PART_POSE__BUILDER_HPP_

#include "mage_msgs/msg/detail/part_pose__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mage_msgs
{

namespace msg
{

namespace builder
{

class Init_PartPose_pose
{
public:
  explicit Init_PartPose_pose(::mage_msgs::msg::PartPose & msg)
  : msg_(msg)
  {}
  ::mage_msgs::msg::PartPose pose(::mage_msgs::msg::PartPose::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mage_msgs::msg::PartPose msg_;
};

class Init_PartPose_part
{
public:
  Init_PartPose_part()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PartPose_pose part(::mage_msgs::msg::PartPose::_part_type arg)
  {
    msg_.part = std::move(arg);
    return Init_PartPose_pose(msg_);
  }

private:
  ::mage_msgs::msg::PartPose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mage_msgs::msg::PartPose>()
{
  return mage_msgs::msg::builder::Init_PartPose_part();
}

}  // namespace mage_msgs

#endif  // MAGE_MSGS__MSG__DETAIL__PART_POSE__BUILDER_HPP_
