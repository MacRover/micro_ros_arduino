// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:msg/SwerveModule.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__SWERVE_MODULE__STRUCT_H_
#define CUSTOM_INTERFACES__MSG__DETAIL__SWERVE_MODULE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SwerveModule in the package custom_interfaces.
typedef struct custom_interfaces__msg__SwerveModule
{
  double speed;
  double angle;
} custom_interfaces__msg__SwerveModule;

// Struct for a sequence of custom_interfaces__msg__SwerveModule.
typedef struct custom_interfaces__msg__SwerveModule__Sequence
{
  custom_interfaces__msg__SwerveModule * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__msg__SwerveModule__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__SWERVE_MODULE__STRUCT_H_
