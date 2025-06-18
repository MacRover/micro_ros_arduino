// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:msg/SwerveModulePulse.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__SWERVE_MODULE_PULSE__STRUCT_H_
#define CUSTOM_INTERFACES__MSG__DETAIL__SWERVE_MODULE_PULSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SwerveModulePulse in the package custom_interfaces.
typedef struct custom_interfaces__msg__SwerveModulePulse
{
  float front_left_pulse;
  float front_right_pulse;
  float rear_left_pulse;
  float rear_right_pulse;
} custom_interfaces__msg__SwerveModulePulse;

// Struct for a sequence of custom_interfaces__msg__SwerveModulePulse.
typedef struct custom_interfaces__msg__SwerveModulePulse__Sequence
{
  custom_interfaces__msg__SwerveModulePulse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__msg__SwerveModulePulse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__SWERVE_MODULE_PULSE__STRUCT_H_
