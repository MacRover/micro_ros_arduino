// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:msg/CANraw.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__CA_NRAW__STRUCT_H_
#define CUSTOM_INTERFACES__MSG__DETAIL__CA_NRAW__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

// constants for array fields with an upper bound
// data
enum
{
  custom_interfaces__msg__CANraw__data__MAX_SIZE = 8
};

/// Struct defined in msg/CANraw in the package custom_interfaces.
typedef struct custom_interfaces__msg__CANraw
{
  uint32_t address;
  rosidl_runtime_c__uint8__Sequence data;
  bool extended;
} custom_interfaces__msg__CANraw;

// Struct for a sequence of custom_interfaces__msg__CANraw.
typedef struct custom_interfaces__msg__CANraw__Sequence
{
  custom_interfaces__msg__CANraw * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__msg__CANraw__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__CA_NRAW__STRUCT_H_
