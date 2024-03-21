// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mage_msgs:msg/Sensors.idl
// generated code does not contain a copyright notice

#ifndef MAGE_MSGS__MSG__DETAIL__SENSORS__STRUCT_H_
#define MAGE_MSGS__MSG__DETAIL__SENSORS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/Sensors in the package mage_msgs.
typedef struct mage_msgs__msg__Sensors
{
  bool break_beam;
  bool proximity;
  bool laser_profiler;
  bool lidar;
  bool camera;
  bool logical_camera;
} mage_msgs__msg__Sensors;

// Struct for a sequence of mage_msgs__msg__Sensors.
typedef struct mage_msgs__msg__Sensors__Sequence
{
  mage_msgs__msg__Sensors * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mage_msgs__msg__Sensors__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MAGE_MSGS__MSG__DETAIL__SENSORS__STRUCT_H_
