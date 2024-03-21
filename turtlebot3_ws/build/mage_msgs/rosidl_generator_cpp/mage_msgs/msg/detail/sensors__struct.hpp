// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mage_msgs:msg/Sensors.idl
// generated code does not contain a copyright notice

#ifndef MAGE_MSGS__MSG__DETAIL__SENSORS__STRUCT_HPP_
#define MAGE_MSGS__MSG__DETAIL__SENSORS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__mage_msgs__msg__Sensors __attribute__((deprecated))
#else
# define DEPRECATED__mage_msgs__msg__Sensors __declspec(deprecated)
#endif

namespace mage_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Sensors_
{
  using Type = Sensors_<ContainerAllocator>;

  explicit Sensors_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->break_beam = false;
      this->proximity = false;
      this->laser_profiler = false;
      this->lidar = false;
      this->camera = false;
      this->logical_camera = false;
    }
  }

  explicit Sensors_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->break_beam = false;
      this->proximity = false;
      this->laser_profiler = false;
      this->lidar = false;
      this->camera = false;
      this->logical_camera = false;
    }
  }

  // field types and members
  using _break_beam_type =
    bool;
  _break_beam_type break_beam;
  using _proximity_type =
    bool;
  _proximity_type proximity;
  using _laser_profiler_type =
    bool;
  _laser_profiler_type laser_profiler;
  using _lidar_type =
    bool;
  _lidar_type lidar;
  using _camera_type =
    bool;
  _camera_type camera;
  using _logical_camera_type =
    bool;
  _logical_camera_type logical_camera;

  // setters for named parameter idiom
  Type & set__break_beam(
    const bool & _arg)
  {
    this->break_beam = _arg;
    return *this;
  }
  Type & set__proximity(
    const bool & _arg)
  {
    this->proximity = _arg;
    return *this;
  }
  Type & set__laser_profiler(
    const bool & _arg)
  {
    this->laser_profiler = _arg;
    return *this;
  }
  Type & set__lidar(
    const bool & _arg)
  {
    this->lidar = _arg;
    return *this;
  }
  Type & set__camera(
    const bool & _arg)
  {
    this->camera = _arg;
    return *this;
  }
  Type & set__logical_camera(
    const bool & _arg)
  {
    this->logical_camera = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mage_msgs::msg::Sensors_<ContainerAllocator> *;
  using ConstRawPtr =
    const mage_msgs::msg::Sensors_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mage_msgs::msg::Sensors_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mage_msgs::msg::Sensors_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mage_msgs::msg::Sensors_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mage_msgs::msg::Sensors_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mage_msgs::msg::Sensors_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mage_msgs::msg::Sensors_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mage_msgs::msg::Sensors_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mage_msgs::msg::Sensors_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mage_msgs__msg__Sensors
    std::shared_ptr<mage_msgs::msg::Sensors_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mage_msgs__msg__Sensors
    std::shared_ptr<mage_msgs::msg::Sensors_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Sensors_ & other) const
  {
    if (this->break_beam != other.break_beam) {
      return false;
    }
    if (this->proximity != other.proximity) {
      return false;
    }
    if (this->laser_profiler != other.laser_profiler) {
      return false;
    }
    if (this->lidar != other.lidar) {
      return false;
    }
    if (this->camera != other.camera) {
      return false;
    }
    if (this->logical_camera != other.logical_camera) {
      return false;
    }
    return true;
  }
  bool operator!=(const Sensors_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Sensors_

// alias to use template instance with default allocator
using Sensors =
  mage_msgs::msg::Sensors_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mage_msgs

#endif  // MAGE_MSGS__MSG__DETAIL__SENSORS__STRUCT_HPP_
