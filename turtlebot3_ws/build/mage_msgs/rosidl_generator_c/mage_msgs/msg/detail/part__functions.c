// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mage_msgs:msg/Part.idl
// generated code does not contain a copyright notice
#include "mage_msgs/msg/detail/part__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
mage_msgs__msg__Part__init(mage_msgs__msg__Part * msg)
{
  if (!msg) {
    return false;
  }
  // color
  // type
  return true;
}

void
mage_msgs__msg__Part__fini(mage_msgs__msg__Part * msg)
{
  if (!msg) {
    return;
  }
  // color
  // type
}

bool
mage_msgs__msg__Part__are_equal(const mage_msgs__msg__Part * lhs, const mage_msgs__msg__Part * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // color
  if (lhs->color != rhs->color) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  return true;
}

bool
mage_msgs__msg__Part__copy(
  const mage_msgs__msg__Part * input,
  mage_msgs__msg__Part * output)
{
  if (!input || !output) {
    return false;
  }
  // color
  output->color = input->color;
  // type
  output->type = input->type;
  return true;
}

mage_msgs__msg__Part *
mage_msgs__msg__Part__create()
{
  mage_msgs__msg__Part * msg = (mage_msgs__msg__Part *)malloc(sizeof(mage_msgs__msg__Part));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mage_msgs__msg__Part));
  bool success = mage_msgs__msg__Part__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
mage_msgs__msg__Part__destroy(mage_msgs__msg__Part * msg)
{
  if (msg) {
    mage_msgs__msg__Part__fini(msg);
  }
  free(msg);
}


bool
mage_msgs__msg__Part__Sequence__init(mage_msgs__msg__Part__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  mage_msgs__msg__Part * data = NULL;
  if (size) {
    data = (mage_msgs__msg__Part *)calloc(size, sizeof(mage_msgs__msg__Part));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mage_msgs__msg__Part__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mage_msgs__msg__Part__fini(&data[i - 1]);
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
mage_msgs__msg__Part__Sequence__fini(mage_msgs__msg__Part__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mage_msgs__msg__Part__fini(&array->data[i]);
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

mage_msgs__msg__Part__Sequence *
mage_msgs__msg__Part__Sequence__create(size_t size)
{
  mage_msgs__msg__Part__Sequence * array = (mage_msgs__msg__Part__Sequence *)malloc(sizeof(mage_msgs__msg__Part__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = mage_msgs__msg__Part__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
mage_msgs__msg__Part__Sequence__destroy(mage_msgs__msg__Part__Sequence * array)
{
  if (array) {
    mage_msgs__msg__Part__Sequence__fini(array);
  }
  free(array);
}

bool
mage_msgs__msg__Part__Sequence__are_equal(const mage_msgs__msg__Part__Sequence * lhs, const mage_msgs__msg__Part__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mage_msgs__msg__Part__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mage_msgs__msg__Part__Sequence__copy(
  const mage_msgs__msg__Part__Sequence * input,
  mage_msgs__msg__Part__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mage_msgs__msg__Part);
    mage_msgs__msg__Part * data =
      (mage_msgs__msg__Part *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mage_msgs__msg__Part__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          mage_msgs__msg__Part__fini(&data[i]);
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
    if (!mage_msgs__msg__Part__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
