// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:msg/CANstamped.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__CA_NSTAMPED__STRUCT_H_
#define CUSTOM_INTERFACES__MSG__DETAIL__CA_NSTAMPED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'can_raw'
#include "custom_interfaces/msg/detail/ca_nraw__struct.h"

/// Struct defined in msg/CANstamped in the package custom_interfaces.
typedef struct custom_interfaces__msg__CANstamped
{
  builtin_interfaces__msg__Time stamp;
  custom_interfaces__msg__CANraw can_raw;
} custom_interfaces__msg__CANstamped;

// Struct for a sequence of custom_interfaces__msg__CANstamped.
typedef struct custom_interfaces__msg__CANstamped__Sequence
{
  custom_interfaces__msg__CANstamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__msg__CANstamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__CA_NSTAMPED__STRUCT_H_
