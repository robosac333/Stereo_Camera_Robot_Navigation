// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mage_msgs:msg/Part.idl
// generated code does not contain a copyright notice

#ifndef MAGE_MSGS__MSG__DETAIL__PART__BUILDER_HPP_
#define MAGE_MSGS__MSG__DETAIL__PART__BUILDER_HPP_

#include "mage_msgs/msg/detail/part__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mage_msgs
{

namespace msg
{

namespace builder
{

class Init_Part_type
{
public:
  explicit Init_Part_type(::mage_msgs::msg::Part & msg)
  : msg_(msg)
  {}
  ::mage_msgs::msg::Part type(::mage_msgs::msg::Part::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mage_msgs::msg::Part msg_;
};

class Init_Part_color
{
public:
  Init_Part_color()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Part_type color(::mage_msgs::msg::Part::_color_type arg)
  {
    msg_.color = std::move(arg);
    return Init_Part_type(msg_);
  }

private:
  ::mage_msgs::msg::Part msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mage_msgs::msg::Part>()
{
  return mage_msgs::msg::builder::Init_Part_color();
}

}  // namespace mage_msgs

#endif  // MAGE_MSGS__MSG__DETAIL__PART__BUILDER_HPP_
