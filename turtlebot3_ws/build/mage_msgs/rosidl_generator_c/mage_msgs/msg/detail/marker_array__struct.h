// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mage_msgs:msg/MarkerArray.idl
// generated code does not contain a copyright notice

#ifndef MAGE_MSGS__MSG__DETAIL__MARKER_ARRAY__STRUCT_H_
#define MAGE_MSGS__MSG__DETAIL__MARKER_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'markers'
#include "mage_msgs/msg/detail/marker__struct.h"

// Struct defined in msg/MarkerArray in the package mage_msgs.
typedef struct mage_msgs__msg__MarkerArray
{
  std_msgs__msg__Header header;
  mage_msgs__msg__Marker__Sequence markers;
} mage_msgs__msg__MarkerArray;

// Struct for a sequence of mage_msgs__msg__MarkerArray.
typedef struct mage_msgs__msg__MarkerArray__Sequence
{
  mage_msgs__msg__MarkerArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mage_msgs__msg__MarkerArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MAGE_MSGS__MSG__DETAIL__MARKER_ARRAY__STRUCT_H_
