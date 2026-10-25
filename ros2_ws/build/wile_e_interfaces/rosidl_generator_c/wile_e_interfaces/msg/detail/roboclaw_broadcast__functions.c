// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from wile_e_interfaces:msg/RoboclawBroadcast.idl
// generated code does not contain a copyright notice
#include "wile_e_interfaces/msg/detail/roboclaw_broadcast__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
wile_e_interfaces__msg__RoboclawBroadcast__init(wile_e_interfaces__msg__RoboclawBroadcast * msg)
{
  if (!msg) {
    return false;
  }
  // right_shoulder
  // left_shoulder
  // right_elbow
  // left_elbow
  // right_wheel
  // left_wheel
  return true;
}

void
wile_e_interfaces__msg__RoboclawBroadcast__fini(wile_e_interfaces__msg__RoboclawBroadcast * msg)
{
  if (!msg) {
    return;
  }
  // right_shoulder
  // left_shoulder
  // right_elbow
  // left_elbow
  // right_wheel
  // left_wheel
}

bool
wile_e_interfaces__msg__RoboclawBroadcast__are_equal(const wile_e_interfaces__msg__RoboclawBroadcast * lhs, const wile_e_interfaces__msg__RoboclawBroadcast * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // right_shoulder
  if (lhs->right_shoulder != rhs->right_shoulder) {
    return false;
  }
  // left_shoulder
  if (lhs->left_shoulder != rhs->left_shoulder) {
    return false;
  }
  // right_elbow
  if (lhs->right_elbow != rhs->right_elbow) {
    return false;
  }
  // left_elbow
  if (lhs->left_elbow != rhs->left_elbow) {
    return false;
  }
  // right_wheel
  if (lhs->right_wheel != rhs->right_wheel) {
    return false;
  }
  // left_wheel
  if (lhs->left_wheel != rhs->left_wheel) {
    return false;
  }
  return true;
}

bool
wile_e_interfaces__msg__RoboclawBroadcast__copy(
  const wile_e_interfaces__msg__RoboclawBroadcast * input,
  wile_e_interfaces__msg__RoboclawBroadcast * output)
{
  if (!input || !output) {
    return false;
  }
  // right_shoulder
  output->right_shoulder = input->right_shoulder;
  // left_shoulder
  output->left_shoulder = input->left_shoulder;
  // right_elbow
  output->right_elbow = input->right_elbow;
  // left_elbow
  output->left_elbow = input->left_elbow;
  // right_wheel
  output->right_wheel = input->right_wheel;
  // left_wheel
  output->left_wheel = input->left_wheel;
  return true;
}

wile_e_interfaces__msg__RoboclawBroadcast *
wile_e_interfaces__msg__RoboclawBroadcast__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wile_e_interfaces__msg__RoboclawBroadcast * msg = (wile_e_interfaces__msg__RoboclawBroadcast *)allocator.allocate(sizeof(wile_e_interfaces__msg__RoboclawBroadcast), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wile_e_interfaces__msg__RoboclawBroadcast));
  bool success = wile_e_interfaces__msg__RoboclawBroadcast__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wile_e_interfaces__msg__RoboclawBroadcast__destroy(wile_e_interfaces__msg__RoboclawBroadcast * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wile_e_interfaces__msg__RoboclawBroadcast__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wile_e_interfaces__msg__RoboclawBroadcast__Sequence__init(wile_e_interfaces__msg__RoboclawBroadcast__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wile_e_interfaces__msg__RoboclawBroadcast * data = NULL;

  if (size) {
    data = (wile_e_interfaces__msg__RoboclawBroadcast *)allocator.zero_allocate(size, sizeof(wile_e_interfaces__msg__RoboclawBroadcast), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wile_e_interfaces__msg__RoboclawBroadcast__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wile_e_interfaces__msg__RoboclawBroadcast__fini(&data[i - 1]);
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
wile_e_interfaces__msg__RoboclawBroadcast__Sequence__fini(wile_e_interfaces__msg__RoboclawBroadcast__Sequence * array)
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
      wile_e_interfaces__msg__RoboclawBroadcast__fini(&array->data[i]);
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

wile_e_interfaces__msg__RoboclawBroadcast__Sequence *
wile_e_interfaces__msg__RoboclawBroadcast__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wile_e_interfaces__msg__RoboclawBroadcast__Sequence * array = (wile_e_interfaces__msg__RoboclawBroadcast__Sequence *)allocator.allocate(sizeof(wile_e_interfaces__msg__RoboclawBroadcast__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wile_e_interfaces__msg__RoboclawBroadcast__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wile_e_interfaces__msg__RoboclawBroadcast__Sequence__destroy(wile_e_interfaces__msg__RoboclawBroadcast__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wile_e_interfaces__msg__RoboclawBroadcast__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wile_e_interfaces__msg__RoboclawBroadcast__Sequence__are_equal(const wile_e_interfaces__msg__RoboclawBroadcast__Sequence * lhs, const wile_e_interfaces__msg__RoboclawBroadcast__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wile_e_interfaces__msg__RoboclawBroadcast__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wile_e_interfaces__msg__RoboclawBroadcast__Sequence__copy(
  const wile_e_interfaces__msg__RoboclawBroadcast__Sequence * input,
  wile_e_interfaces__msg__RoboclawBroadcast__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wile_e_interfaces__msg__RoboclawBroadcast);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wile_e_interfaces__msg__RoboclawBroadcast * data =
      (wile_e_interfaces__msg__RoboclawBroadcast *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wile_e_interfaces__msg__RoboclawBroadcast__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wile_e_interfaces__msg__RoboclawBroadcast__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wile_e_interfaces__msg__RoboclawBroadcast__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
