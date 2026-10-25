// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from wile_e_interfaces:msg/RoboclawStateBroadcast.idl
// generated code does not contain a copyright notice
#include "wile_e_interfaces/msg/detail/roboclaw_state_broadcast__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
wile_e_interfaces__msg__RoboclawStateBroadcast__init(wile_e_interfaces__msg__RoboclawStateBroadcast * msg)
{
  if (!msg) {
    return false;
  }
  // right_shoulder
  // left_shoulder
  // right_elbow
  // left_elbow
  // right_shoulder_speed
  // left_shoulder_speed
  // right_elbow_speed
  // left_elbow_speed
  // right_wheel_speed
  // left_wheel_speed
  return true;
}

void
wile_e_interfaces__msg__RoboclawStateBroadcast__fini(wile_e_interfaces__msg__RoboclawStateBroadcast * msg)
{
  if (!msg) {
    return;
  }
  // right_shoulder
  // left_shoulder
  // right_elbow
  // left_elbow
  // right_shoulder_speed
  // left_shoulder_speed
  // right_elbow_speed
  // left_elbow_speed
  // right_wheel_speed
  // left_wheel_speed
}

bool
wile_e_interfaces__msg__RoboclawStateBroadcast__are_equal(const wile_e_interfaces__msg__RoboclawStateBroadcast * lhs, const wile_e_interfaces__msg__RoboclawStateBroadcast * rhs)
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
  // right_shoulder_speed
  if (lhs->right_shoulder_speed != rhs->right_shoulder_speed) {
    return false;
  }
  // left_shoulder_speed
  if (lhs->left_shoulder_speed != rhs->left_shoulder_speed) {
    return false;
  }
  // right_elbow_speed
  if (lhs->right_elbow_speed != rhs->right_elbow_speed) {
    return false;
  }
  // left_elbow_speed
  if (lhs->left_elbow_speed != rhs->left_elbow_speed) {
    return false;
  }
  // right_wheel_speed
  if (lhs->right_wheel_speed != rhs->right_wheel_speed) {
    return false;
  }
  // left_wheel_speed
  if (lhs->left_wheel_speed != rhs->left_wheel_speed) {
    return false;
  }
  return true;
}

bool
wile_e_interfaces__msg__RoboclawStateBroadcast__copy(
  const wile_e_interfaces__msg__RoboclawStateBroadcast * input,
  wile_e_interfaces__msg__RoboclawStateBroadcast * output)
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
  // right_shoulder_speed
  output->right_shoulder_speed = input->right_shoulder_speed;
  // left_shoulder_speed
  output->left_shoulder_speed = input->left_shoulder_speed;
  // right_elbow_speed
  output->right_elbow_speed = input->right_elbow_speed;
  // left_elbow_speed
  output->left_elbow_speed = input->left_elbow_speed;
  // right_wheel_speed
  output->right_wheel_speed = input->right_wheel_speed;
  // left_wheel_speed
  output->left_wheel_speed = input->left_wheel_speed;
  return true;
}

wile_e_interfaces__msg__RoboclawStateBroadcast *
wile_e_interfaces__msg__RoboclawStateBroadcast__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wile_e_interfaces__msg__RoboclawStateBroadcast * msg = (wile_e_interfaces__msg__RoboclawStateBroadcast *)allocator.allocate(sizeof(wile_e_interfaces__msg__RoboclawStateBroadcast), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wile_e_interfaces__msg__RoboclawStateBroadcast));
  bool success = wile_e_interfaces__msg__RoboclawStateBroadcast__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wile_e_interfaces__msg__RoboclawStateBroadcast__destroy(wile_e_interfaces__msg__RoboclawStateBroadcast * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wile_e_interfaces__msg__RoboclawStateBroadcast__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wile_e_interfaces__msg__RoboclawStateBroadcast__Sequence__init(wile_e_interfaces__msg__RoboclawStateBroadcast__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wile_e_interfaces__msg__RoboclawStateBroadcast * data = NULL;

  if (size) {
    data = (wile_e_interfaces__msg__RoboclawStateBroadcast *)allocator.zero_allocate(size, sizeof(wile_e_interfaces__msg__RoboclawStateBroadcast), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wile_e_interfaces__msg__RoboclawStateBroadcast__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wile_e_interfaces__msg__RoboclawStateBroadcast__fini(&data[i - 1]);
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
wile_e_interfaces__msg__RoboclawStateBroadcast__Sequence__fini(wile_e_interfaces__msg__RoboclawStateBroadcast__Sequence * array)
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
      wile_e_interfaces__msg__RoboclawStateBroadcast__fini(&array->data[i]);
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

wile_e_interfaces__msg__RoboclawStateBroadcast__Sequence *
wile_e_interfaces__msg__RoboclawStateBroadcast__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wile_e_interfaces__msg__RoboclawStateBroadcast__Sequence * array = (wile_e_interfaces__msg__RoboclawStateBroadcast__Sequence *)allocator.allocate(sizeof(wile_e_interfaces__msg__RoboclawStateBroadcast__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wile_e_interfaces__msg__RoboclawStateBroadcast__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wile_e_interfaces__msg__RoboclawStateBroadcast__Sequence__destroy(wile_e_interfaces__msg__RoboclawStateBroadcast__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wile_e_interfaces__msg__RoboclawStateBroadcast__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wile_e_interfaces__msg__RoboclawStateBroadcast__Sequence__are_equal(const wile_e_interfaces__msg__RoboclawStateBroadcast__Sequence * lhs, const wile_e_interfaces__msg__RoboclawStateBroadcast__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wile_e_interfaces__msg__RoboclawStateBroadcast__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wile_e_interfaces__msg__RoboclawStateBroadcast__Sequence__copy(
  const wile_e_interfaces__msg__RoboclawStateBroadcast__Sequence * input,
  wile_e_interfaces__msg__RoboclawStateBroadcast__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wile_e_interfaces__msg__RoboclawStateBroadcast);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wile_e_interfaces__msg__RoboclawStateBroadcast * data =
      (wile_e_interfaces__msg__RoboclawStateBroadcast *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wile_e_interfaces__msg__RoboclawStateBroadcast__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wile_e_interfaces__msg__RoboclawStateBroadcast__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wile_e_interfaces__msg__RoboclawStateBroadcast__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
