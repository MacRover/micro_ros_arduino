// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from custom_interfaces:msg/ViperCardStatus.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__VIPER_CARD_STATUS__FUNCTIONS_H_
#define CUSTOM_INTERFACES__MSG__DETAIL__VIPER_CARD_STATUS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "custom_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "custom_interfaces/msg/detail/viper_card_status__struct.h"

/// Initialize msg/ViperCardStatus message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * custom_interfaces__msg__ViperCardStatus
 * )) before or use
 * custom_interfaces__msg__ViperCardStatus__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
bool
custom_interfaces__msg__ViperCardStatus__init(custom_interfaces__msg__ViperCardStatus * msg);

/// Finalize msg/ViperCardStatus message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
void
custom_interfaces__msg__ViperCardStatus__fini(custom_interfaces__msg__ViperCardStatus * msg);

/// Create msg/ViperCardStatus message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * custom_interfaces__msg__ViperCardStatus__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
custom_interfaces__msg__ViperCardStatus *
custom_interfaces__msg__ViperCardStatus__create();

/// Destroy msg/ViperCardStatus message.
/**
 * It calls
 * custom_interfaces__msg__ViperCardStatus__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
void
custom_interfaces__msg__ViperCardStatus__destroy(custom_interfaces__msg__ViperCardStatus * msg);

/// Check for msg/ViperCardStatus message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
bool
custom_interfaces__msg__ViperCardStatus__are_equal(const custom_interfaces__msg__ViperCardStatus * lhs, const custom_interfaces__msg__ViperCardStatus * rhs);

/// Copy a msg/ViperCardStatus message.
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
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
bool
custom_interfaces__msg__ViperCardStatus__copy(
  const custom_interfaces__msg__ViperCardStatus * input,
  custom_interfaces__msg__ViperCardStatus * output);

/// Initialize array of msg/ViperCardStatus messages.
/**
 * It allocates the memory for the number of elements and calls
 * custom_interfaces__msg__ViperCardStatus__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
bool
custom_interfaces__msg__ViperCardStatus__Sequence__init(custom_interfaces__msg__ViperCardStatus__Sequence * array, size_t size);

/// Finalize array of msg/ViperCardStatus messages.
/**
 * It calls
 * custom_interfaces__msg__ViperCardStatus__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
void
custom_interfaces__msg__ViperCardStatus__Sequence__fini(custom_interfaces__msg__ViperCardStatus__Sequence * array);

/// Create array of msg/ViperCardStatus messages.
/**
 * It allocates the memory for the array and calls
 * custom_interfaces__msg__ViperCardStatus__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
custom_interfaces__msg__ViperCardStatus__Sequence *
custom_interfaces__msg__ViperCardStatus__Sequence__create(size_t size);

/// Destroy array of msg/ViperCardStatus messages.
/**
 * It calls
 * custom_interfaces__msg__ViperCardStatus__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
void
custom_interfaces__msg__ViperCardStatus__Sequence__destroy(custom_interfaces__msg__ViperCardStatus__Sequence * array);

/// Check for msg/ViperCardStatus message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
bool
custom_interfaces__msg__ViperCardStatus__Sequence__are_equal(const custom_interfaces__msg__ViperCardStatus__Sequence * lhs, const custom_interfaces__msg__ViperCardStatus__Sequence * rhs);

/// Copy an array of msg/ViperCardStatus messages.
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
ROSIDL_GENERATOR_C_PUBLIC_custom_interfaces
bool
custom_interfaces__msg__ViperCardStatus__Sequence__copy(
  const custom_interfaces__msg__ViperCardStatus__Sequence * input,
  custom_interfaces__msg__ViperCardStatus__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__VIPER_CARD_STATUS__FUNCTIONS_H_
