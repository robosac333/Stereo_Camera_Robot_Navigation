// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mage_msgs:msg/Part.idl
// generated code does not contain a copyright notice

#ifndef MAGE_MSGS__MSG__DETAIL__PART__STRUCT_HPP_
#define MAGE_MSGS__MSG__DETAIL__PART__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__mage_msgs__msg__Part __attribute__((deprecated))
#else
# define DEPRECATED__mage_msgs__msg__Part __declspec(deprecated)
#endif

namespace mage_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Part_
{
  using Type = Part_<ContainerAllocator>;

  explicit Part_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->color = 0;
      this->type = 0;
    }
  }

  explicit Part_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->color = 0;
      this->type = 0;
    }
  }

  // field types and members
  using _color_type =
    uint8_t;
  _color_type color;
  using _type_type =
    uint8_t;
  _type_type type;

  // setters for named parameter idiom
  Type & set__color(
    const uint8_t & _arg)
  {
    this->color = _arg;
    return *this;
  }
  Type & set__type(
    const uint8_t & _arg)
  {
    this->type = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t RED =
    0u;
  static constexpr uint8_t GREEN =
    1u;
  static constexpr uint8_t BLUE =
    2u;
  static constexpr uint8_t ORANGE =
    3u;
  static constexpr uint8_t PURPLE =
    4u;
  static constexpr uint8_t BATTERY =
    10u;
  static constexpr uint8_t PUMP =
    11u;
  static constexpr uint8_t SENSOR =
    12u;
  static constexpr uint8_t REGULATOR =
    13u;

  // pointer types
  using RawPtr =
    mage_msgs::msg::Part_<ContainerAllocator> *;
  using ConstRawPtr =
    const mage_msgs::msg::Part_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mage_msgs::msg::Part_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mage_msgs::msg::Part_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mage_msgs::msg::Part_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mage_msgs::msg::Part_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mage_msgs::msg::Part_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mage_msgs::msg::Part_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mage_msgs::msg::Part_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mage_msgs::msg::Part_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mage_msgs__msg__Part
    std::shared_ptr<mage_msgs::msg::Part_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mage_msgs__msg__Part
    std::shared_ptr<mage_msgs::msg::Part_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Part_ & other) const
  {
    if (this->color != other.color) {
      return false;
    }
    if (this->type != other.type) {
      return false;
    }
    return true;
  }
  bool operator!=(const Part_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Part_

// alias to use template instance with default allocator
using Part =
  mage_msgs::msg::Part_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t Part_<ContainerAllocator>::RED;
template<typename ContainerAllocator>
constexpr uint8_t Part_<ContainerAllocator>::GREEN;
template<typename ContainerAllocator>
constexpr uint8_t Part_<ContainerAllocator>::BLUE;
template<typename ContainerAllocator>
constexpr uint8_t Part_<ContainerAllocator>::ORANGE;
template<typename ContainerAllocator>
constexpr uint8_t Part_<ContainerAllocator>::PURPLE;
template<typename ContainerAllocator>
constexpr uint8_t Part_<ContainerAllocator>::BATTERY;
template<typename ContainerAllocator>
constexpr uint8_t Part_<ContainerAllocator>::PUMP;
template<typename ContainerAllocator>
constexpr uint8_t Part_<ContainerAllocator>::SENSOR;
template<typename ContainerAllocator>
constexpr uint8_t Part_<ContainerAllocator>::REGULATOR;

}  // namespace msg

}  // namespace mage_msgs

#endif  // MAGE_MSGS__MSG__DETAIL__PART__STRUCT_HPP_
