// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from custom_interfaces:msg/SwerveModulesList.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES__MSG__DETAIL__SWERVE_MODULES_LIST__STRUCT_H_
#define CUSTOM_INTERFACES__MSG__DETAIL__SWERVE_MODULES_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'front_left'
// Member 'front_right'
// Member 'rear_left'
// Member 'rear_right'
#include "custom_interfaces/msg/detail/swerve_module__struct.h"

/// Struct defined in msg/SwerveModulesList in the package custom_interfaces.
typedef struct custom_interfaces__msg__SwerveModulesList
{
  custom_interfaces__msg__SwerveModule front_left;
  custom_interfaces__msg__SwerveModule front_right;
  custom_interfaces__msg__SwerveModule rear_left;
  custom_interfaces__msg__SwerveModule rear_right;
} custom_interfaces__msg__SwerveModulesList;

// Struct for a sequence of custom_interfaces__msg__SwerveModulesList.
typedef struct custom_interfaces__msg__SwerveModulesList__Sequence
{
  custom_interfaces__msg__SwerveModulesList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} custom_interfaces__msg__SwerveModulesList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CUSTOM_INTERFACES__MSG__DETAIL__SWERVE_MODULES_LIST__STRUCT_H_
