// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mage_msgs:msg/Marker.idl
// generated code does not contain a copyright notice
#include "mage_msgs/msg/detail/marker__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `pose`
#include "geometry_msgs/msg/detail/pose_with_covariance__functions.h"

bool
mage_msgs__msg__Marker__init(mage_msgs__msg__Marker * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mage_msgs__msg__Marker__fini(msg);
    return false;
  }
  // id
  // pose
  if (!geometry_msgs__msg__PoseWithCovariance__init(&msg->pose)) {
    mage_msgs__msg__Marker__fini(msg);
    return false;
  }
  // confidence
  return true;
}

void
mage_msgs__msg__Marker__fini(mage_msgs__msg__Marker * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // id
  // pose
  geometry_msgs__msg__PoseWithCovariance__fini(&msg->pose);
  // confidence
}

bool
mage_msgs__msg__Marker__are_equal(const mage_msgs__msg__Marker * lhs, const mage_msgs__msg__Marker * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__PoseWithCovariance__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // confidence
  if (lhs->confidence != rhs->confidence) {
    return false;
  }
  return true;
}

bool
mage_msgs__msg__Marker__copy(
  const mage_msgs__msg__Marker * input,
  mage_msgs__msg__Marker * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // id
  output->id = input->id;
  // pose
  if (!geometry_msgs__msg__PoseWithCovariance__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // confidence
  output->confidence = input->confidence;
  return true;
}

mage_msgs__msg__Marker *
mage_msgs__msg__Marker__create()
{
  mage_msgs__msg__Marker * msg = (mage_msgs__msg__Marker *)malloc(sizeof(mage_msgs__msg__Marker));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mage_msgs__msg__Marker));
  bool success = mage_msgs__msg__Marker__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
mage_msgs__msg__Marker__destroy(mage_msgs__msg__Marker * msg)
{
  if (msg) {
    mage_msgs__msg__Marker__fini(msg);
  }
  free(msg);
}


bool
mage_msgs__msg__Marker__Sequence__init(mage_msgs__msg__Marker__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  mage_msgs__msg__Marker * data = NULL;
  if (size) {
    data = (mage_msgs__msg__Marker *)calloc(size, sizeof(mage_msgs__msg__Marker));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mage_msgs__msg__Marker__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mage_msgs__msg__Marker__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
mage_msgs__msg__Marker__Sequence__fini(mage_msgs__msg__Marker__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mage_msgs__msg__Marker__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

mage_msgs__msg__Marker__Sequence *
mage_msgs__msg__Marker__Sequence__create(size_t size)
{
  mage_msgs__msg__Marker__Sequence * array = (mage_msgs__msg__Marker__Sequence *)malloc(sizeof(mage_msgs__msg__Marker__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = mage_msgs__msg__Marker__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
mage_msgs__msg__Marker__Sequence__destroy(mage_msgs__msg__Marker__Sequence * array)
{
  if (array) {
    mage_msgs__msg__Marker__Sequence__fini(array);
  }
  free(array);
}

bool
mage_msgs__msg__Marker__Sequence__are_equal(const mage_msgs__msg__Marker__Sequence * lhs, const mage_msgs__msg__Marker__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mage_msgs__msg__Marker__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mage_msgs__msg__Marker__Sequence__copy(
  const mage_msgs__msg__Marker__Sequence * input,
  mage_msgs__msg__Marker__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mage_msgs__msg__Marker);
    mage_msgs__msg__Marker * data =
      (mage_msgs__msg__Marker *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mage_msgs__msg__Marker__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          mage_msgs__msg__Marker__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mage_msgs__msg__Marker__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
