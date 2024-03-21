// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mage_msgs:msg/AdvancedLogicalCameraImage.idl
// generated code does not contain a copyright notice

#ifndef MAGE_MSGS__MSG__DETAIL__ADVANCED_LOGICAL_CAMERA_IMAGE__BUILDER_HPP_
#define MAGE_MSGS__MSG__DETAIL__ADVANCED_LOGICAL_CAMERA_IMAGE__BUILDER_HPP_

#include "mage_msgs/msg/detail/advanced_logical_camera_image__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mage_msgs
{

namespace msg
{

namespace builder
{

class Init_AdvancedLogicalCameraImage_sensor_pose
{
public:
  explicit Init_AdvancedLogicalCameraImage_sensor_pose(::mage_msgs::msg::AdvancedLogicalCameraImage & msg)
  : msg_(msg)
  {}
  ::mage_msgs::msg::AdvancedLogicalCameraImage sensor_pose(::mage_msgs::msg::AdvancedLogicalCameraImage::_sensor_pose_type arg)
  {
    msg_.sensor_pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mage_msgs::msg::AdvancedLogicalCameraImage msg_;
};

class Init_AdvancedLogicalCameraImage_part_poses
{
public:
  Init_AdvancedLogicalCameraImage_part_poses()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AdvancedLogicalCameraImage_sensor_pose part_poses(::mage_msgs::msg::AdvancedLogicalCameraImage::_part_poses_type arg)
  {
    msg_.part_poses = std::move(arg);
    return Init_AdvancedLogicalCameraImage_sensor_pose(msg_);
  }

private:
  ::mage_msgs::msg::AdvancedLogicalCameraImage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mage_msgs::msg::AdvancedLogicalCameraImage>()
{
  return mage_msgs::msg::builder::Init_AdvancedLogicalCameraImage_part_poses();
}

}  // namespace mage_msgs

#endif  // MAGE_MSGS__MSG__DETAIL__ADVANCED_LOGICAL_CAMERA_IMAGE__BUILDER_HPP_
