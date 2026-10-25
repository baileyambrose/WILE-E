// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from norlab_custom_interfaces:msg/EncoderState.idl
// generated code does not contain a copyright notice
#include "norlab_custom_interfaces/msg/detail/encoder_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
norlab_custom_interfaces__msg__EncoderState__init(norlab_custom_interfaces__msg__EncoderState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    norlab_custom_interfaces__msg__EncoderState__fini(msg);
    return false;
  }
  // position
  // velocity
  // ticks_per_rotation
  // ticks_per_meter
  return true;
}

void
norlab_custom_interfaces__msg__EncoderState__fini(norlab_custom_interfaces__msg__EncoderState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // position
  // velocity
  // ticks_per_rotation
  // ticks_per_meter
}

bool
norlab_custom_interfaces__msg__EncoderState__are_equal(const norlab_custom_interfaces__msg__EncoderState * lhs, const norlab_custom_interfaces__msg__EncoderState * rhs)
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
  // position
  if (lhs->position != rhs->position) {
    return false;
  }
  // velocity
  if (lhs->velocity != rhs->velocity) {
    return false;
  }
  // ticks_per_rotation
  if (lhs->ticks_per_rotation != rhs->ticks_per_rotation) {
    return false;
  }
  // ticks_per_meter
  if (lhs->ticks_per_meter != rhs->ticks_per_meter) {
    return false;
  }
  return true;
}

bool
norlab_custom_interfaces__msg__EncoderState__copy(
  const norlab_custom_interfaces__msg__EncoderState * input,
  norlab_custom_interfaces__msg__EncoderState * output)
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
  // position
  output->position = input->position;
  // velocity
  output->velocity = input->velocity;
  // ticks_per_rotation
  output->ticks_per_rotation = input->ticks_per_rotation;
  // ticks_per_meter
  output->ticks_per_meter = input->ticks_per_meter;
  return true;
}

norlab_custom_interfaces__msg__EncoderState *
norlab_custom_interfaces__msg__EncoderState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  norlab_custom_interfaces__msg__EncoderState * msg = (norlab_custom_interfaces__msg__EncoderState *)allocator.allocate(sizeof(norlab_custom_interfaces__msg__EncoderState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(norlab_custom_interfaces__msg__EncoderState));
  bool success = norlab_custom_interfaces__msg__EncoderState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
norlab_custom_interfaces__msg__EncoderState__destroy(norlab_custom_interfaces__msg__EncoderState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    norlab_custom_interfaces__msg__EncoderState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
norlab_custom_interfaces__msg__EncoderState__Sequence__init(norlab_custom_interfaces__msg__EncoderState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  norlab_custom_interfaces__msg__EncoderState * data = NULL;

  if (size) {
    data = (norlab_custom_interfaces__msg__EncoderState *)allocator.zero_allocate(size, sizeof(norlab_custom_interfaces__msg__EncoderState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = norlab_custom_interfaces__msg__EncoderState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        norlab_custom_interfaces__msg__EncoderState__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
norlab_custom_interfaces__msg__EncoderState__Sequence__fini(norlab_custom_interfaces__msg__EncoderState__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      norlab_custom_interfaces__msg__EncoderState__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

norlab_custom_interfaces__msg__EncoderState__Sequence *
norlab_custom_interfaces__msg__EncoderState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  norlab_custom_interfaces__msg__EncoderState__Sequence * array = (norlab_custom_interfaces__msg__EncoderState__Sequence *)allocator.allocate(sizeof(norlab_custom_interfaces__msg__EncoderState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = norlab_custom_interfaces__msg__EncoderState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
norlab_custom_interfaces__msg__EncoderState__Sequence__destroy(norlab_custom_interfaces__msg__EncoderState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    norlab_custom_interfaces__msg__EncoderState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
norlab_custom_interfaces__msg__EncoderState__Sequence__are_equal(const norlab_custom_interfaces__msg__EncoderState__Sequence * lhs, const norlab_custom_interfaces__msg__EncoderState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!norlab_custom_interfaces__msg__EncoderState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
norlab_custom_interfaces__msg__EncoderState__Sequence__copy(
  const norlab_custom_interfaces__msg__EncoderState__Sequence * input,
  norlab_custom_interfaces__msg__EncoderState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(norlab_custom_interfaces__msg__EncoderState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    norlab_custom_interfaces__msg__EncoderState * data =
      (norlab_custom_interfaces__msg__EncoderState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!norlab_custom_interfaces__msg__EncoderState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          norlab_custom_interfaces__msg__EncoderState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!norlab_custom_interfaces__msg__EncoderState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
