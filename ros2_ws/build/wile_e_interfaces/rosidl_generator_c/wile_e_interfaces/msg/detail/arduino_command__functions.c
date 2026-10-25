// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from wile_e_interfaces:msg/ArduinoCommand.idl
// generated code does not contain a copyright notice
#include "wile_e_interfaces/msg/detail/arduino_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
wile_e_interfaces__msg__ArduinoCommand__init(wile_e_interfaces__msg__ArduinoCommand * msg)
{
  if (!msg) {
    return false;
  }
  // tail
  // head_raise
  // head_turn
  // eyes
  // fan
  // headlight
  // face_detection
  return true;
}

void
wile_e_interfaces__msg__ArduinoCommand__fini(wile_e_interfaces__msg__ArduinoCommand * msg)
{
  if (!msg) {
    return;
  }
  // tail
  // head_raise
  // head_turn
  // eyes
  // fan
  // headlight
  // face_detection
}

bool
wile_e_interfaces__msg__ArduinoCommand__are_equal(const wile_e_interfaces__msg__ArduinoCommand * lhs, const wile_e_interfaces__msg__ArduinoCommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // tail
  if (lhs->tail != rhs->tail) {
    return false;
  }
  // head_raise
  if (lhs->head_raise != rhs->head_raise) {
    return false;
  }
  // head_turn
  if (lhs->head_turn != rhs->head_turn) {
    return false;
  }
  // eyes
  if (lhs->eyes != rhs->eyes) {
    return false;
  }
  // fan
  if (lhs->fan != rhs->fan) {
    return false;
  }
  // headlight
  if (lhs->headlight != rhs->headlight) {
    return false;
  }
  // face_detection
  if (lhs->face_detection != rhs->face_detection) {
    return false;
  }
  return true;
}

bool
wile_e_interfaces__msg__ArduinoCommand__copy(
  const wile_e_interfaces__msg__ArduinoCommand * input,
  wile_e_interfaces__msg__ArduinoCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // tail
  output->tail = input->tail;
  // head_raise
  output->head_raise = input->head_raise;
  // head_turn
  output->head_turn = input->head_turn;
  // eyes
  output->eyes = input->eyes;
  // fan
  output->fan = input->fan;
  // headlight
  output->headlight = input->headlight;
  // face_detection
  output->face_detection = input->face_detection;
  return true;
}

wile_e_interfaces__msg__ArduinoCommand *
wile_e_interfaces__msg__ArduinoCommand__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wile_e_interfaces__msg__ArduinoCommand * msg = (wile_e_interfaces__msg__ArduinoCommand *)allocator.allocate(sizeof(wile_e_interfaces__msg__ArduinoCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wile_e_interfaces__msg__ArduinoCommand));
  bool success = wile_e_interfaces__msg__ArduinoCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wile_e_interfaces__msg__ArduinoCommand__destroy(wile_e_interfaces__msg__ArduinoCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wile_e_interfaces__msg__ArduinoCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wile_e_interfaces__msg__ArduinoCommand__Sequence__init(wile_e_interfaces__msg__ArduinoCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wile_e_interfaces__msg__ArduinoCommand * data = NULL;

  if (size) {
    data = (wile_e_interfaces__msg__ArduinoCommand *)allocator.zero_allocate(size, sizeof(wile_e_interfaces__msg__ArduinoCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wile_e_interfaces__msg__ArduinoCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wile_e_interfaces__msg__ArduinoCommand__fini(&data[i - 1]);
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
wile_e_interfaces__msg__ArduinoCommand__Sequence__fini(wile_e_interfaces__msg__ArduinoCommand__Sequence * array)
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
      wile_e_interfaces__msg__ArduinoCommand__fini(&array->data[i]);
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

wile_e_interfaces__msg__ArduinoCommand__Sequence *
wile_e_interfaces__msg__ArduinoCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wile_e_interfaces__msg__ArduinoCommand__Sequence * array = (wile_e_interfaces__msg__ArduinoCommand__Sequence *)allocator.allocate(sizeof(wile_e_interfaces__msg__ArduinoCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wile_e_interfaces__msg__ArduinoCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wile_e_interfaces__msg__ArduinoCommand__Sequence__destroy(wile_e_interfaces__msg__ArduinoCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wile_e_interfaces__msg__ArduinoCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wile_e_interfaces__msg__ArduinoCommand__Sequence__are_equal(const wile_e_interfaces__msg__ArduinoCommand__Sequence * lhs, const wile_e_interfaces__msg__ArduinoCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wile_e_interfaces__msg__ArduinoCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wile_e_interfaces__msg__ArduinoCommand__Sequence__copy(
  const wile_e_interfaces__msg__ArduinoCommand__Sequence * input,
  wile_e_interfaces__msg__ArduinoCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wile_e_interfaces__msg__ArduinoCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wile_e_interfaces__msg__ArduinoCommand * data =
      (wile_e_interfaces__msg__ArduinoCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wile_e_interfaces__msg__ArduinoCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wile_e_interfaces__msg__ArduinoCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wile_e_interfaces__msg__ArduinoCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
