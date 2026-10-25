// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from wile_e_interfaces:srv/MotorSensorData.idl
// generated code does not contain a copyright notice
#include "wile_e_interfaces/srv/detail/motor_sensor_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
wile_e_interfaces__srv__MotorSensorData_Request__init(wile_e_interfaces__srv__MotorSensorData_Request * msg)
{
  if (!msg) {
    return false;
  }
  // call
  return true;
}

void
wile_e_interfaces__srv__MotorSensorData_Request__fini(wile_e_interfaces__srv__MotorSensorData_Request * msg)
{
  if (!msg) {
    return;
  }
  // call
}

bool
wile_e_interfaces__srv__MotorSensorData_Request__are_equal(const wile_e_interfaces__srv__MotorSensorData_Request * lhs, const wile_e_interfaces__srv__MotorSensorData_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // call
  if (lhs->call != rhs->call) {
    return false;
  }
  return true;
}

bool
wile_e_interfaces__srv__MotorSensorData_Request__copy(
  const wile_e_interfaces__srv__MotorSensorData_Request * input,
  wile_e_interfaces__srv__MotorSensorData_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // call
  output->call = input->call;
  return true;
}

wile_e_interfaces__srv__MotorSensorData_Request *
wile_e_interfaces__srv__MotorSensorData_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wile_e_interfaces__srv__MotorSensorData_Request * msg = (wile_e_interfaces__srv__MotorSensorData_Request *)allocator.allocate(sizeof(wile_e_interfaces__srv__MotorSensorData_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wile_e_interfaces__srv__MotorSensorData_Request));
  bool success = wile_e_interfaces__srv__MotorSensorData_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wile_e_interfaces__srv__MotorSensorData_Request__destroy(wile_e_interfaces__srv__MotorSensorData_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wile_e_interfaces__srv__MotorSensorData_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wile_e_interfaces__srv__MotorSensorData_Request__Sequence__init(wile_e_interfaces__srv__MotorSensorData_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wile_e_interfaces__srv__MotorSensorData_Request * data = NULL;

  if (size) {
    data = (wile_e_interfaces__srv__MotorSensorData_Request *)allocator.zero_allocate(size, sizeof(wile_e_interfaces__srv__MotorSensorData_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wile_e_interfaces__srv__MotorSensorData_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wile_e_interfaces__srv__MotorSensorData_Request__fini(&data[i - 1]);
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
wile_e_interfaces__srv__MotorSensorData_Request__Sequence__fini(wile_e_interfaces__srv__MotorSensorData_Request__Sequence * array)
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
      wile_e_interfaces__srv__MotorSensorData_Request__fini(&array->data[i]);
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

wile_e_interfaces__srv__MotorSensorData_Request__Sequence *
wile_e_interfaces__srv__MotorSensorData_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wile_e_interfaces__srv__MotorSensorData_Request__Sequence * array = (wile_e_interfaces__srv__MotorSensorData_Request__Sequence *)allocator.allocate(sizeof(wile_e_interfaces__srv__MotorSensorData_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wile_e_interfaces__srv__MotorSensorData_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wile_e_interfaces__srv__MotorSensorData_Request__Sequence__destroy(wile_e_interfaces__srv__MotorSensorData_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wile_e_interfaces__srv__MotorSensorData_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wile_e_interfaces__srv__MotorSensorData_Request__Sequence__are_equal(const wile_e_interfaces__srv__MotorSensorData_Request__Sequence * lhs, const wile_e_interfaces__srv__MotorSensorData_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wile_e_interfaces__srv__MotorSensorData_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wile_e_interfaces__srv__MotorSensorData_Request__Sequence__copy(
  const wile_e_interfaces__srv__MotorSensorData_Request__Sequence * input,
  wile_e_interfaces__srv__MotorSensorData_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wile_e_interfaces__srv__MotorSensorData_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wile_e_interfaces__srv__MotorSensorData_Request * data =
      (wile_e_interfaces__srv__MotorSensorData_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wile_e_interfaces__srv__MotorSensorData_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wile_e_interfaces__srv__MotorSensorData_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wile_e_interfaces__srv__MotorSensorData_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
wile_e_interfaces__srv__MotorSensorData_Response__init(wile_e_interfaces__srv__MotorSensorData_Response * msg)
{
  if (!msg) {
    return false;
  }
  // left_shoulder
  // right_shoulder
  // left_elbow
  // right_elbow
  return true;
}

void
wile_e_interfaces__srv__MotorSensorData_Response__fini(wile_e_interfaces__srv__MotorSensorData_Response * msg)
{
  if (!msg) {
    return;
  }
  // left_shoulder
  // right_shoulder
  // left_elbow
  // right_elbow
}

bool
wile_e_interfaces__srv__MotorSensorData_Response__are_equal(const wile_e_interfaces__srv__MotorSensorData_Response * lhs, const wile_e_interfaces__srv__MotorSensorData_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // left_shoulder
  if (lhs->left_shoulder != rhs->left_shoulder) {
    return false;
  }
  // right_shoulder
  if (lhs->right_shoulder != rhs->right_shoulder) {
    return false;
  }
  // left_elbow
  if (lhs->left_elbow != rhs->left_elbow) {
    return false;
  }
  // right_elbow
  if (lhs->right_elbow != rhs->right_elbow) {
    return false;
  }
  return true;
}

bool
wile_e_interfaces__srv__MotorSensorData_Response__copy(
  const wile_e_interfaces__srv__MotorSensorData_Response * input,
  wile_e_interfaces__srv__MotorSensorData_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // left_shoulder
  output->left_shoulder = input->left_shoulder;
  // right_shoulder
  output->right_shoulder = input->right_shoulder;
  // left_elbow
  output->left_elbow = input->left_elbow;
  // right_elbow
  output->right_elbow = input->right_elbow;
  return true;
}

wile_e_interfaces__srv__MotorSensorData_Response *
wile_e_interfaces__srv__MotorSensorData_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wile_e_interfaces__srv__MotorSensorData_Response * msg = (wile_e_interfaces__srv__MotorSensorData_Response *)allocator.allocate(sizeof(wile_e_interfaces__srv__MotorSensorData_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(wile_e_interfaces__srv__MotorSensorData_Response));
  bool success = wile_e_interfaces__srv__MotorSensorData_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
wile_e_interfaces__srv__MotorSensorData_Response__destroy(wile_e_interfaces__srv__MotorSensorData_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    wile_e_interfaces__srv__MotorSensorData_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
wile_e_interfaces__srv__MotorSensorData_Response__Sequence__init(wile_e_interfaces__srv__MotorSensorData_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wile_e_interfaces__srv__MotorSensorData_Response * data = NULL;

  if (size) {
    data = (wile_e_interfaces__srv__MotorSensorData_Response *)allocator.zero_allocate(size, sizeof(wile_e_interfaces__srv__MotorSensorData_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = wile_e_interfaces__srv__MotorSensorData_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        wile_e_interfaces__srv__MotorSensorData_Response__fini(&data[i - 1]);
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
wile_e_interfaces__srv__MotorSensorData_Response__Sequence__fini(wile_e_interfaces__srv__MotorSensorData_Response__Sequence * array)
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
      wile_e_interfaces__srv__MotorSensorData_Response__fini(&array->data[i]);
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

wile_e_interfaces__srv__MotorSensorData_Response__Sequence *
wile_e_interfaces__srv__MotorSensorData_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  wile_e_interfaces__srv__MotorSensorData_Response__Sequence * array = (wile_e_interfaces__srv__MotorSensorData_Response__Sequence *)allocator.allocate(sizeof(wile_e_interfaces__srv__MotorSensorData_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = wile_e_interfaces__srv__MotorSensorData_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
wile_e_interfaces__srv__MotorSensorData_Response__Sequence__destroy(wile_e_interfaces__srv__MotorSensorData_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    wile_e_interfaces__srv__MotorSensorData_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
wile_e_interfaces__srv__MotorSensorData_Response__Sequence__are_equal(const wile_e_interfaces__srv__MotorSensorData_Response__Sequence * lhs, const wile_e_interfaces__srv__MotorSensorData_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!wile_e_interfaces__srv__MotorSensorData_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
wile_e_interfaces__srv__MotorSensorData_Response__Sequence__copy(
  const wile_e_interfaces__srv__MotorSensorData_Response__Sequence * input,
  wile_e_interfaces__srv__MotorSensorData_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(wile_e_interfaces__srv__MotorSensorData_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    wile_e_interfaces__srv__MotorSensorData_Response * data =
      (wile_e_interfaces__srv__MotorSensorData_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!wile_e_interfaces__srv__MotorSensorData_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          wile_e_interfaces__srv__MotorSensorData_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!wile_e_interfaces__srv__MotorSensorData_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
