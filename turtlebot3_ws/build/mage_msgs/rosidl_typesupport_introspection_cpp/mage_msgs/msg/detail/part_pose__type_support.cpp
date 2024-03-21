// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mage_msgs:msg/PartPose.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mage_msgs/msg/detail/part_pose__struct.hpp"
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

void PartPose_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mage_msgs::msg::PartPose(_init);
}

void PartPose_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mage_msgs::msg::PartPose *>(message_memory);
  typed_message->~PartPose();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PartPose_message_member_array[2] = {
  {
    "part",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<mage_msgs::msg::Part>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mage_msgs::msg::PartPose, part),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pose",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mage_msgs::msg::PartPose, pose),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PartPose_message_members = {
  "mage_msgs::msg",  // message namespace
  "PartPose",  // message name
  2,  // number of fields
  sizeof(mage_msgs::msg::PartPose),
  PartPose_message_member_array,  // message members
  PartPose_init_function,  // function to initialize message memory (memory has to be allocated)
  PartPose_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PartPose_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PartPose_message_members,
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
get_message_type_support_handle<mage_msgs::msg::PartPose>()
{
  return &::mage_msgs::msg::rosidl_typesupport_introspection_cpp::PartPose_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mage_msgs, msg, PartPose)() {
  return &::mage_msgs::msg::rosidl_typesupport_introspection_cpp::PartPose_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
