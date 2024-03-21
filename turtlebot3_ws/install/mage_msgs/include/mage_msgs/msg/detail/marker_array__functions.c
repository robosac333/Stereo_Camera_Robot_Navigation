// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mage_msgs:msg/MarkerArray.idl
// generated code does not contain a copyright notice
#include "mage_msgs/msg/detail/marker_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `markers`
#include "mage_msgs/msg/detail/marker__functions.h"

bool
mage_msgs__msg__MarkerArray__init(mage_msgs__msg__MarkerArray * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mage_msgs__msg__MarkerArray__fini(msg);
    return false;
  }
  // markers
  if (!mage_msgs__msg__Marker__Sequence__init(&msg->markers, 0)) {
    mage_msgs__msg__MarkerArray__fini(msg);
    return false;
  }
  return true;
}

void
mage_msgs__msg__MarkerArray__fini(mage_msgs__msg__MarkerArray * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // markers
  mage_msgs__msg__Marker__Sequence__fini(&msg->markers);
}

bool
mage_msgs__msg__MarkerArray__are_equal(const mage_msgs__msg__MarkerArray * lhs, const mage_msgs__msg__MarkerArray * rhs)
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
  // markers
  if (!mage_msgs__msg__Marker__Sequence__are_equal(
      &(lhs->markers), &(rhs->markers)))
  {
    return false;
  }
  return true;
}

bool
mage_msgs__msg__MarkerArray__copy(
  const mage_msgs__msg__MarkerArray * input,
  mage_msgs__msg__MarkerArray * output)
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
  // markers
  if (!mage_msgs__msg__Marker__Sequence__copy(
      &(input->markers), &(output->markers)))
  {
    return false;
  }
  return true;
}

mage_msgs__msg__MarkerArray *
mage_msgs__msg__MarkerArray__create()
{
  mage_msgs__msg__MarkerArray * msg = (mage_msgs__msg__MarkerArray *)malloc(sizeof(mage_msgs__msg__MarkerArray));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mage_msgs__msg__MarkerArray));
  bool success = mage_msgs__msg__MarkerArray__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
mage_msgs__msg__MarkerArray__destroy(mage_msgs__msg__MarkerArray * msg)
{
  if (msg) {
    mage_msgs__msg__MarkerArray__fini(msg);
  }
  free(msg);
}


bool
mage_msgs__msg__MarkerArray__Sequence__init(mage_msgs__msg__MarkerArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  mage_msgs__msg__MarkerArray * data = NULL;
  if (size) {
    data = (mage_msgs__msg__MarkerArray *)calloc(size, sizeof(mage_msgs__msg__MarkerArray));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mage_msgs__msg__MarkerArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mage_msgs__msg__MarkerArray__fini(&data[i - 1]);
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
mage_msgs__msg__MarkerArray__Sequence__fini(mage_msgs__msg__MarkerArray__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mage_msgs__msg__MarkerArray__fini(&array->data[i]);
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

mage_msgs__msg__MarkerArray__Sequence *
mage_msgs__msg__MarkerArray__Sequence__create(size_t size)
{
  mage_msgs__msg__MarkerArray__Sequence * array = (mage_msgs__msg__MarkerArray__Sequence *)malloc(sizeof(mage_msgs__msg__MarkerArray__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = mage_msgs__msg__MarkerArray__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
mage_msgs__msg__MarkerArray__Sequence__destroy(mage_msgs__msg__MarkerArray__Sequence * array)
{
  if (array) {
    mage_msgs__msg__MarkerArray__Sequence__fini(array);
  }
  free(array);
}

bool
mage_msgs__msg__MarkerArray__Sequence__are_equal(const mage_msgs__msg__MarkerArray__Sequence * lhs, const mage_msgs__msg__MarkerArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mage_msgs__msg__MarkerArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mage_msgs__msg__MarkerArray__Sequence__copy(
  const mage_msgs__msg__MarkerArray__Sequence * input,
  mage_msgs__msg__MarkerArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mage_msgs__msg__MarkerArray);
    mage_msgs__msg__MarkerArray * data =
      (mage_msgs__msg__MarkerArray *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mage_msgs__msg__MarkerArray__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          mage_msgs__msg__MarkerArray__fini(&data[i]);
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
    if (!mage_msgs__msg__MarkerArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
