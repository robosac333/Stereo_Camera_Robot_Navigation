// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mage_msgs:msg/PartPose.idl
// generated code does not contain a copyright notice

#ifndef MAGE_MSGS__MSG__DETAIL__PART_POSE__STRUCT_H_
#define MAGE_MSGS__MSG__DETAIL__PART_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'part'
#include "mage_msgs/msg/detail/part__struct.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

// Struct defined in msg/PartPose in the package mage_msgs.
typedef struct mage_msgs__msg__PartPose
{
  mage_msgs__msg__Part part;
  geometry_msgs__msg__Pose pose;
} mage_msgs__msg__PartPose;

// Struct for a sequence of mage_msgs__msg__PartPose.
typedef struct mage_msgs__msg__PartPose__Sequence
{
  mage_msgs__msg__PartPose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mage_msgs__msg__PartPose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MAGE_MSGS__MSG__DETAIL__PART_POSE__STRUCT_H_
