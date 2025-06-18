// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:msg/ViperCardStatus.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__VIPER_CARD_STATUS__STRUCT_H_
#define CUSTOM_INTERFACES__MSG__DETAIL__VIPER_CARD_STATUS__STRUCT_H_

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

/// Struct defined in msg/ViperCardStatus in the package custom_interfaces.
typedef struct custom_interfaces__msg__ViperCardStatus
{
  std_msgs__msg__Header header;
  /// Input Current (milliamps)
  double input_current;
  /// Temperature
  double temperature_backplane;
  double temperature_card_a;
  double temperature_card_b;
  /// Output For A
  double output_voltage_a;
  double output_current_a;
  double output_power_a;
  /// Output For B (unused for high power cards)
  double output_voltage_b;
  double output_current_b;
  double output_power_b;
  /// Faults
  bool input_fault;
  bool output_a_fault;
  bool output_b_fault;
} custom_interfaces__msg__ViperCardStatus;

// Struct for a sequence of custom_interfaces__msg__ViperCardStatus.
typedef struct custom_interfaces__msg__ViperCardStatus__Sequence
{
  custom_interfaces__msg__ViperCardStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__msg__ViperCardStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__VIPER_CARD_STATUS__STRUCT_H_
