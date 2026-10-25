// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from wile_e_interfaces:msg/ArduinoCommand.idl
// generated code does not contain a copyright notice

#ifndef WILE_E_INTERFACES__MSG__DETAIL__ARDUINO_COMMAND__FUNCTIONS_H_
#define WILE_E_INTERFACES__MSG__DETAIL__ARDUINO_COMMAND__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "wile_e_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "wile_e_interfaces/msg/detail/arduino_command__struct.h"

/// Initialize msg/ArduinoCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * wile_e_interfaces__msg__ArduinoCommand
 * )) before or use
 * wile_e_interfaces__msg__ArduinoCommand__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_wile_e_interfaces
bool
wile_e_interfaces__msg__ArduinoCommand__init(wile_e_interfaces__msg__ArduinoCommand * msg);

/// Finalize msg/ArduinoCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wile_e_interfaces
void
wile_e_interfaces__msg__ArduinoCommand__fini(wile_e_interfaces__msg__ArduinoCommand * msg);

/// Create msg/ArduinoCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * wile_e_interfaces__msg__ArduinoCommand__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_wile_e_interfaces
wile_e_interfaces__msg__ArduinoCommand *
wile_e_interfaces__msg__ArduinoCommand__create();

/// Destroy msg/ArduinoCommand message.
/**
 * It calls
 * wile_e_interfaces__msg__ArduinoCommand__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wile_e_interfaces
void
wile_e_interfaces__msg__ArduinoCommand__destroy(wile_e_interfaces__msg__ArduinoCommand * msg);

/// Check for msg/ArduinoCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_wile_e_interfaces
bool
wile_e_interfaces__msg__ArduinoCommand__are_equal(const wile_e_interfaces__msg__ArduinoCommand * lhs, const wile_e_interfaces__msg__ArduinoCommand * rhs);

/// Copy a msg/ArduinoCommand message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_wile_e_interfaces
bool
wile_e_interfaces__msg__ArduinoCommand__copy(
  const wile_e_interfaces__msg__ArduinoCommand * input,
  wile_e_interfaces__msg__ArduinoCommand * output);

/// Initialize array of msg/ArduinoCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * wile_e_interfaces__msg__ArduinoCommand__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_wile_e_interfaces
bool
wile_e_interfaces__msg__ArduinoCommand__Sequence__init(wile_e_interfaces__msg__ArduinoCommand__Sequence * array, size_t size);

/// Finalize array of msg/ArduinoCommand messages.
/**
 * It calls
 * wile_e_interfaces__msg__ArduinoCommand__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wile_e_interfaces
void
wile_e_interfaces__msg__ArduinoCommand__Sequence__fini(wile_e_interfaces__msg__ArduinoCommand__Sequence * array);

/// Create array of msg/ArduinoCommand messages.
/**
 * It allocates the memory for the array and calls
 * wile_e_interfaces__msg__ArduinoCommand__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_wile_e_interfaces
wile_e_interfaces__msg__ArduinoCommand__Sequence *
wile_e_interfaces__msg__ArduinoCommand__Sequence__create(size_t size);

/// Destroy array of msg/ArduinoCommand messages.
/**
 * It calls
 * wile_e_interfaces__msg__ArduinoCommand__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_wile_e_interfaces
void
wile_e_interfaces__msg__ArduinoCommand__Sequence__destroy(wile_e_interfaces__msg__ArduinoCommand__Sequence * array);

/// Check for msg/ArduinoCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_wile_e_interfaces
bool
wile_e_interfaces__msg__ArduinoCommand__Sequence__are_equal(const wile_e_interfaces__msg__ArduinoCommand__Sequence * lhs, const wile_e_interfaces__msg__ArduinoCommand__Sequence * rhs);

/// Copy an array of msg/ArduinoCommand messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_wile_e_interfaces
bool
wile_e_interfaces__msg__ArduinoCommand__Sequence__copy(
  const wile_e_interfaces__msg__ArduinoCommand__Sequence * input,
  wile_e_interfaces__msg__ArduinoCommand__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // WILE_E_INTERFACES__MSG__DETAIL__ARDUINO_COMMAND__FUNCTIONS_H_
