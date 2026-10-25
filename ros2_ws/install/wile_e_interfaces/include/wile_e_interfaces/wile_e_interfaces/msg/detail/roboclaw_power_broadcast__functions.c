// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from wile_e_interfaces:msg/RoboclawPowerBroadcast.idl
// generated code does not contain a copyright notice
#include "wile_e_interfaces/msg/detail/roboclaw_power_broadcast__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
wile_e_interfaces__msg__RoboclawPowerBroadcast__init(wile_e_interfaces__msg__RoboclawPowerBroadcast * msg)
{
  if (!msg) {
    return false;
  }
  // battery_voltage
  // current_draw
  return true;
}

void
wile_e_interfaces__msg__RoboclawPowerBroadcast__fini(wile_e_interfaces__msg__RoboclawPowerBroadcast * msg)
{
  if (!msg) {
    return;
  }
  // battery_voltage
  // current_draw
}

bool
wile_e_interfaces__msg__RoboclawPowerBroadcast__are_equal(const wile_e_interfaces__msg__RoboclawPowerBroadcast * lhs, const wile_e_interfaces__msg__RoboclawPowerBroadcast * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // battery_voltage
  if (lhs->battery_voltage != rhs->battery_voltage) {
    return false;
  }
  // current_draw
  if (lhs->current_draw != rhs->current_draw) {
    return false;
  }
  return true;
}

bool
wile_e_interfaces__msg__RoboclawPowerBroadcast__copy(
  const wile_e_interfaces__msg__RoboclawPowerBroadcast * input,
  wile_e_interfaces__msg__RoboclawPowerBroadcast * output)
{
  if (!input || !output) {
    return false;
  }
  // battery_voltage
  output->battery_voltage = input->battery_voltage;
  // current_draw
  output->current_draw = input->current_draw;
  return true;
}

wile_e_interfaces__msg__RoboclawPowerBroadcast *
wile_e_interfaces__msg__RoboclawPowerBroadcast__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wile_e_interfaces__msg__RoboclawPowerBroadcast * msg = (wile_e_interfaces__msg__RoboclawPowerBroadcast *)allocator.allocate(sizeof(wile_e_interfaces__msg__RoboclawPowerBroadcast), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wile_e_interfaces__msg__RoboclawPowerBroadcast));
  bool success = wile_e_interfaces__msg__RoboclawPowerBroadcast__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wile_e_interfaces__msg__RoboclawPowerBroadcast__destroy(wile_e_interfaces__msg__RoboclawPowerBroadcast * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wile_e_interfaces__msg__RoboclawPowerBroadcast__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wile_e_interfaces__msg__RoboclawPowerBroadcast__Sequence__init(wile_e_interfaces__msg__RoboclawPowerBroadcast__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wile_e_interfaces__msg__RoboclawPowerBroadcast * data = NULL;

  if (size) {
    data = (wile_e_interfaces__msg__RoboclawPowerBroadcast *)allocator.zero_allocate(size, sizeof(wile_e_interfaces__msg__RoboclawPowerBroadcast), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wile_e_interfaces__msg__RoboclawPowerBroadcast__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wile_e_interfaces__msg__RoboclawPowerBroadcast__fini(&data[i - 1]);
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
wile_e_interfaces__msg__RoboclawPowerBroadcast__Sequence__fini(wile_e_interfaces__msg__RoboclawPowerBroadcast__Sequence * array)
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
      wile_e_interfaces__msg__RoboclawPowerBroadcast__fini(&array->data[i]);
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

wile_e_interfaces__msg__RoboclawPowerBroadcast__Sequence *
wile_e_interfaces__msg__RoboclawPowerBroadcast__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wile_e_interfaces__msg__RoboclawPowerBroadcast__Sequence * array = (wile_e_interfaces__msg__RoboclawPowerBroadcast__Sequence *)allocator.allocate(sizeof(wile_e_interfaces__msg__RoboclawPowerBroadcast__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wile_e_interfaces__msg__RoboclawPowerBroadcast__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wile_e_interfaces__msg__RoboclawPowerBroadcast__Sequence__destroy(wile_e_interfaces__msg__RoboclawPowerBroadcast__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wile_e_interfaces__msg__RoboclawPowerBroadcast__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wile_e_interfaces__msg__RoboclawPowerBroadcast__Sequence__are_equal(const wile_e_interfaces__msg__RoboclawPowerBroadcast__Sequence * lhs, const wile_e_interfaces__msg__RoboclawPowerBroadcast__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wile_e_interfaces__msg__RoboclawPowerBroadcast__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wile_e_interfaces__msg__RoboclawPowerBroadcast__Sequence__copy(
  const wile_e_interfaces__msg__RoboclawPowerBroadcast__Sequence * input,
  wile_e_interfaces__msg__RoboclawPowerBroadcast__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wile_e_interfaces__msg__RoboclawPowerBroadcast);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wile_e_interfaces__msg__RoboclawPowerBroadcast * data =
      (wile_e_interfaces__msg__RoboclawPowerBroadcast *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wile_e_interfaces__msg__RoboclawPowerBroadcast__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wile_e_interfaces__msg__RoboclawPowerBroadcast__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wile_e_interfaces__msg__RoboclawPowerBroadcast__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
