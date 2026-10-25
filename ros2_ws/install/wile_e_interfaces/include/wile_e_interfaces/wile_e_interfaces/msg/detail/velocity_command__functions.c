// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from wile_e_interfaces:msg/VelocityCommand.idl
// generated code does not contain a copyright notice
#include "wile_e_interfaces/msg/detail/velocity_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
wile_e_interfaces__msg__VelocityCommand__init(wile_e_interfaces__msg__VelocityCommand * msg)
{
  if (!msg) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    wile_e_interfaces__msg__VelocityCommand__fini(msg);
    return false;
  }
  // velocity
  // ang_velocity
  return true;
}

void
wile_e_interfaces__msg__VelocityCommand__fini(wile_e_interfaces__msg__VelocityCommand * msg)
{
  if (!msg) {
    return;
  }
  // message
  rosidl_runtime_c__String__fini(&msg->message);
  // velocity
  // ang_velocity
}

bool
wile_e_interfaces__msg__VelocityCommand__are_equal(const wile_e_interfaces__msg__VelocityCommand * lhs, const wile_e_interfaces__msg__VelocityCommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  // velocity
  if (lhs->velocity != rhs->velocity) {
    return false;
  }
  // ang_velocity
  if (lhs->ang_velocity != rhs->ang_velocity) {
    return false;
  }
  return true;
}

bool
wile_e_interfaces__msg__VelocityCommand__copy(
  const wile_e_interfaces__msg__VelocityCommand * input,
  wile_e_interfaces__msg__VelocityCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  // velocity
  output->velocity = input->velocity;
  // ang_velocity
  output->ang_velocity = input->ang_velocity;
  return true;
}

wile_e_interfaces__msg__VelocityCommand *
wile_e_interfaces__msg__VelocityCommand__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wile_e_interfaces__msg__VelocityCommand * msg = (wile_e_interfaces__msg__VelocityCommand *)allocator.allocate(sizeof(wile_e_interfaces__msg__VelocityCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wile_e_interfaces__msg__VelocityCommand));
  bool success = wile_e_interfaces__msg__VelocityCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wile_e_interfaces__msg__VelocityCommand__destroy(wile_e_interfaces__msg__VelocityCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wile_e_interfaces__msg__VelocityCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wile_e_interfaces__msg__VelocityCommand__Sequence__init(wile_e_interfaces__msg__VelocityCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wile_e_interfaces__msg__VelocityCommand * data = NULL;

  if (size) {
    data = (wile_e_interfaces__msg__VelocityCommand *)allocator.zero_allocate(size, sizeof(wile_e_interfaces__msg__VelocityCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wile_e_interfaces__msg__VelocityCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wile_e_interfaces__msg__VelocityCommand__fini(&data[i - 1]);
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
wile_e_interfaces__msg__VelocityCommand__Sequence__fini(wile_e_interfaces__msg__VelocityCommand__Sequence * array)
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
      wile_e_interfaces__msg__VelocityCommand__fini(&array->data[i]);
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

wile_e_interfaces__msg__VelocityCommand__Sequence *
wile_e_interfaces__msg__VelocityCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wile_e_interfaces__msg__VelocityCommand__Sequence * array = (wile_e_interfaces__msg__VelocityCommand__Sequence *)allocator.allocate(sizeof(wile_e_interfaces__msg__VelocityCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wile_e_interfaces__msg__VelocityCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wile_e_interfaces__msg__VelocityCommand__Sequence__destroy(wile_e_interfaces__msg__VelocityCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wile_e_interfaces__msg__VelocityCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wile_e_interfaces__msg__VelocityCommand__Sequence__are_equal(const wile_e_interfaces__msg__VelocityCommand__Sequence * lhs, const wile_e_interfaces__msg__VelocityCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wile_e_interfaces__msg__VelocityCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wile_e_interfaces__msg__VelocityCommand__Sequence__copy(
  const wile_e_interfaces__msg__VelocityCommand__Sequence * input,
  wile_e_interfaces__msg__VelocityCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wile_e_interfaces__msg__VelocityCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wile_e_interfaces__msg__VelocityCommand * data =
      (wile_e_interfaces__msg__VelocityCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wile_e_interfaces__msg__VelocityCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wile_e_interfaces__msg__VelocityCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wile_e_interfaces__msg__VelocityCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
