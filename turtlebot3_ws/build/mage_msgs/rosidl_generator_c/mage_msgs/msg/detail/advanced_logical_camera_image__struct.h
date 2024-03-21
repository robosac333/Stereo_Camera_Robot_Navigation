// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mage_msgs:msg/AdvancedLogicalCameraImage.idl
// generated code does not contain a copyright notice

#ifndef MAGE_MSGS__MSG__DETAIL__ADVANCED_LOGICAL_CAMERA_IMAGE__STRUCT_H_
#define MAGE_MSGS__MSG__DETAIL__ADVANCED_LOGICAL_CAMERA_IMAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'part_poses'
#include "mage_msgs/msg/detail/part_pose__struct.h"
// Member 'sensor_pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

// Struct defined in msg/AdvancedLogicalCameraImage in the package mage_msgs.
typedef struct mage_msgs__msg__AdvancedLogicalCameraImage
{
  mage_msgs__msg__PartPose__Sequence part_poses;
  geometry_msgs__msg__Pose sensor_pose;
} mage_msgs__msg__AdvancedLogicalCameraImage;

// Struct for a sequence of mage_msgs__msg__AdvancedLogicalCameraImage.
typedef struct mage_msgs__msg__AdvancedLogicalCameraImage__Sequence
{
  mage_msgs__msg__AdvancedLogicalCameraImage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mage_msgs__msg__AdvancedLogicalCameraImage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MAGE_MSGS__MSG__DETAIL__ADVANCED_LOGICAL_CAMERA_IMAGE__STRUCT_H_
