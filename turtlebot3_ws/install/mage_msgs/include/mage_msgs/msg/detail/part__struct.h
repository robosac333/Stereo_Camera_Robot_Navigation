// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mage_msgs:msg/Part.idl
// generated code does not contain a copyright notice

#ifndef MAGE_MSGS__MSG__DETAIL__PART__STRUCT_H_
#define MAGE_MSGS__MSG__DETAIL__PART__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'RED'.
enum
{
  mage_msgs__msg__Part__RED = 0
};

/// Constant 'GREEN'.
enum
{
  mage_msgs__msg__Part__GREEN = 1
};

/// Constant 'BLUE'.
enum
{
  mage_msgs__msg__Part__BLUE = 2
};

/// Constant 'ORANGE'.
enum
{
  mage_msgs__msg__Part__ORANGE = 3
};

/// Constant 'PURPLE'.
enum
{
  mage_msgs__msg__Part__PURPLE = 4
};

/// Constant 'BATTERY'.
enum
{
  mage_msgs__msg__Part__BATTERY = 10
};

/// Constant 'PUMP'.
enum
{
  mage_msgs__msg__Part__PUMP = 11
};

/// Constant 'SENSOR'.
enum
{
  mage_msgs__msg__Part__SENSOR = 12
};

/// Constant 'REGULATOR'.
enum
{
  mage_msgs__msg__Part__REGULATOR = 13
};

// Struct defined in msg/Part in the package mage_msgs.
typedef struct mage_msgs__msg__Part
{
  uint8_t color;
  uint8_t type;
} mage_msgs__msg__Part;

// Struct for a sequence of mage_msgs__msg__Part.
typedef struct mage_msgs__msg__Part__Sequence
{
  mage_msgs__msg__Part * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mage_msgs__msg__Part__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MAGE_MSGS__MSG__DETAIL__PART__STRUCT_H_
