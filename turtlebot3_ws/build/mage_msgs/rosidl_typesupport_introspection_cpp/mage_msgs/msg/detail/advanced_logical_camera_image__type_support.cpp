// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mage_msgs:msg/AdvancedLogicalCameraImage.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mage_msgs/msg/detail/advanced_logical_camera_image__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace mage_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void AdvancedLogicalCameraImage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mage_msgs::msg::AdvancedLogicalCameraImage(_init);
}

void AdvancedLogicalCameraImage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mage_msgs::msg::AdvancedLogicalCameraImage *>(message_memory);
  typed_message->~AdvancedLogicalCameraImage();
}

size_t size_function__AdvancedLogicalCameraImage__part_poses(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<mage_msgs::msg::PartPose> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AdvancedLogicalCameraImage__part_poses(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<mage_msgs::msg::PartPose> *>(untyped_member);
  return &member[index];
}

void * get_function__AdvancedLogicalCameraImage__part_poses(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<mage_msgs::msg::PartPose> *>(untyped_member);
  return &member[index];
}

void resize_function__AdvancedLogicalCameraImage__part_poses(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<mage_msgs::msg::PartPose> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AdvancedLogicalCameraImage_message_member_array[2] = {
  {
    "part_poses",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<mage_msgs::msg::PartPose>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mage_msgs::msg::AdvancedLogicalCameraImage, part_poses),  // bytes offset in struct
    nullptr,  // default value
    size_function__AdvancedLogicalCameraImage__part_poses,  // size() function pointer
    get_const_function__AdvancedLogicalCameraImage__part_poses,  // get_const(index) function pointer
    get_function__AdvancedLogicalCameraImage__part_poses,  // get(index) function pointer
    resize_function__AdvancedLogicalCameraImage__part_poses  // resize(index) function pointer
  },
  {
    "sensor_pose",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mage_msgs::msg::AdvancedLogicalCameraImage, sensor_pose),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AdvancedLogicalCameraImage_message_members = {
  "mage_msgs::msg",  // message namespace
  "AdvancedLogicalCameraImage",  // message name
  2,  // number of fields
  sizeof(mage_msgs::msg::AdvancedLogicalCameraImage),
  AdvancedLogicalCameraImage_message_member_array,  // message members
  AdvancedLogicalCameraImage_init_function,  // function to initialize message memory (memory has to be allocated)
  AdvancedLogicalCameraImage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AdvancedLogicalCameraImage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AdvancedLogicalCameraImage_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace mage_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mage_msgs::msg::AdvancedLogicalCameraImage>()
{
  return &::mage_msgs::msg::rosidl_typesupport_introspection_cpp::AdvancedLogicalCameraImage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mage_msgs, msg, AdvancedLogicalCameraImage)() {
  return &::mage_msgs::msg::rosidl_typesupport_introspection_cpp::AdvancedLogicalCameraImage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
