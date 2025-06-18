// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:msg/RadStatus.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__RAD_STATUS__STRUCT_H_
#define CUSTOM_INTERFACES__MSG__DETAIL__RAD_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/RadStatus in the package custom_interfaces.
typedef struct custom_interfaces__msg__RadStatus
{
  std_msgs__msg__Header header;
  /// Current angle reading (deg)
  double angle;
  /// EEPROM Status
  uint8_t eeprom_status;
  /// TMC Status
  uint8_t tmc_status;
  /// encoder status
  uint8_t encoder_status;
  /// rad state
  uint8_t rad_state;
  /// limit switch state
  bool ls_state;
} custom_interfaces__msg__RadStatus;

// Struct for a sequence of custom_interfaces__msg__RadStatus.
typedef struct custom_interfaces__msg__RadStatus__Sequence
{
  custom_interfaces__msg__RadStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__msg__RadStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__RAD_STATUS__STRUCT_H_
