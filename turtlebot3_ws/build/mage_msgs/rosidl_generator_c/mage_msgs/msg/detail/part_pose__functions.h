// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from mage_msgs:msg/PartPose.idl
// generated code does not contain a copyright notice

#ifndef MAGE_MSGS__MSG__DETAIL__PART_POSE__FUNCTIONS_H_
#define MAGE_MSGS__MSG__DETAIL__PART_POSE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "mage_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "mage_msgs/msg/detail/part_pose__struct.h"

/// Initialize msg/PartPose message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * mage_msgs__msg__PartPose
 * )) before or use
 * mage_msgs__msg__PartPose__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_mage_msgs
bool
mage_msgs__msg__PartPose__init(mage_msgs__msg__PartPose * msg);

/// Finalize msg/PartPose message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mage_msgs
void
mage_msgs__msg__PartPose__fini(mage_msgs__msg__PartPose * msg);

/// Create msg/PartPose message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * mage_msgs__msg__PartPose__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mage_msgs
mage_msgs__msg__PartPose *
mage_msgs__msg__PartPose__create();

/// Destroy msg/PartPose message.
/**
 * It calls
 * mage_msgs__msg__PartPose__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mage_msgs
void
mage_msgs__msg__PartPose__destroy(mage_msgs__msg__PartPose * msg);

/// Check for msg/PartPose message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mage_msgs
bool
mage_msgs__msg__PartPose__are_equal(const mage_msgs__msg__PartPose * lhs, const mage_msgs__msg__PartPose * rhs);

/// Copy a msg/PartPose message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_mage_msgs
bool
mage_msgs__msg__PartPose__copy(
  const mage_msgs__msg__PartPose * input,
  mage_msgs__msg__PartPose * output);

/// Initialize array of msg/PartPose messages.
/**
 * It allocates the memory for the number of elements and calls
 * mage_msgs__msg__PartPose__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_mage_msgs
bool
mage_msgs__msg__PartPose__Sequence__init(mage_msgs__msg__PartPose__Sequence * array, size_t size);

/// Finalize array of msg/PartPose messages.
/**
 * It calls
 * mage_msgs__msg__PartPose__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mage_msgs
void
mage_msgs__msg__PartPose__Sequence__fini(mage_msgs__msg__PartPose__Sequence * array);

/// Create array of msg/PartPose messages.
/**
 * It allocates the memory for the array and calls
 * mage_msgs__msg__PartPose__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_mage_msgs
mage_msgs__msg__PartPose__Sequence *
mage_msgs__msg__PartPose__Sequence__create(size_t size);

/// Destroy array of msg/PartPose messages.
/**
 * It calls
 * mage_msgs__msg__PartPose__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_mage_msgs
void
mage_msgs__msg__PartPose__Sequence__destroy(mage_msgs__msg__PartPose__Sequence * array);

/// Check for msg/PartPose message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_mage_msgs
bool
mage_msgs__msg__PartPose__Sequence__are_equal(const mage_msgs__msg__PartPose__Sequence * lhs, const mage_msgs__msg__PartPose__Sequence * rhs);

/// Copy an array of msg/PartPose messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_mage_msgs
bool
mage_msgs__msg__PartPose__Sequence__copy(
  const mage_msgs__msg__PartPose__Sequence * input,
  mage_msgs__msg__PartPose__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MAGE_MSGS__MSG__DETAIL__PART_POSE__FUNCTIONS_H_
