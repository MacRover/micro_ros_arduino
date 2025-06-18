// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:msg/ViperStatus.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__VIPER_STATUS__STRUCT_H_
#define CUSTOM_INTERFACES__MSG__DETAIL__VIPER_STATUS__STRUCT_H_

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

/// Struct defined in msg/ViperStatus in the package custom_interfaces.
typedef struct custom_interfaces__msg__ViperStatus
{
  std_msgs__msg__Header header;
  /// EEPROM Status
  uint8_t eeprom_status;
  /// Mux Status
  uint8_t mux_status;
  /// Card 0 Status
  uint8_t card_0_status;
  /// Card 1 Status
  uint8_t card_1_status;
  /// Card 2 Status
  uint8_t card_2_status;
  /// Card 3 Status
  uint8_t card_3_status;
  /// Input Voltage (volts)
  double input_voltage;
} custom_interfaces__msg__ViperStatus;

// Struct for a sequence of custom_interfaces__msg__ViperStatus.
typedef struct custom_interfaces__msg__ViperStatus__Sequence
{
  custom_interfaces__msg__ViperStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__msg__ViperStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__VIPER_STATUS__STRUCT_H_
