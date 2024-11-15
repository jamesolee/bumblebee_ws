// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mavros_msgs:msg/GimbalManagerStatus.idl
// generated code does not contain a copyright notice
#include "mavros_msgs/msg/detail/gimbal_manager_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
mavros_msgs__msg__GimbalManagerStatus__init(mavros_msgs__msg__GimbalManagerStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mavros_msgs__msg__GimbalManagerStatus__fini(msg);
    return false;
  }
  // flags
  // gimbal_device_id
  // sysid_primary
  // compid_primary
  // sysid_secondary
  // compid_secondary
  return true;
}

void
mavros_msgs__msg__GimbalManagerStatus__fini(mavros_msgs__msg__GimbalManagerStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // flags
  // gimbal_device_id
  // sysid_primary
  // compid_primary
  // sysid_secondary
  // compid_secondary
}

bool
mavros_msgs__msg__GimbalManagerStatus__are_equal(const mavros_msgs__msg__GimbalManagerStatus * lhs, const mavros_msgs__msg__GimbalManagerStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // flags
  if (lhs->flags != rhs->flags) {
    return false;
  }
  // gimbal_device_id
  if (lhs->gimbal_device_id != rhs->gimbal_device_id) {
    return false;
  }
  // sysid_primary
  if (lhs->sysid_primary != rhs->sysid_primary) {
    return false;
  }
  // compid_primary
  if (lhs->compid_primary != rhs->compid_primary) {
    return false;
  }
  // sysid_secondary
  if (lhs->sysid_secondary != rhs->sysid_secondary) {
    return false;
  }
  // compid_secondary
  if (lhs->compid_secondary != rhs->compid_secondary) {
    return false;
  }
  return true;
}

bool
mavros_msgs__msg__GimbalManagerStatus__copy(
  const mavros_msgs__msg__GimbalManagerStatus * input,
  mavros_msgs__msg__GimbalManagerStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // flags
  output->flags = input->flags;
  // gimbal_device_id
  output->gimbal_device_id = input->gimbal_device_id;
  // sysid_primary
  output->sysid_primary = input->sysid_primary;
  // compid_primary
  output->compid_primary = input->compid_primary;
  // sysid_secondary
  output->sysid_secondary = input->sysid_secondary;
  // compid_secondary
  output->compid_secondary = input->compid_secondary;
  return true;
}

mavros_msgs__msg__GimbalManagerStatus *
mavros_msgs__msg__GimbalManagerStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mavros_msgs__msg__GimbalManagerStatus * msg = (mavros_msgs__msg__GimbalManagerStatus *)allocator.allocate(sizeof(mavros_msgs__msg__GimbalManagerStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mavros_msgs__msg__GimbalManagerStatus));
  bool success = mavros_msgs__msg__GimbalManagerStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mavros_msgs__msg__GimbalManagerStatus__destroy(mavros_msgs__msg__GimbalManagerStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mavros_msgs__msg__GimbalManagerStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mavros_msgs__msg__GimbalManagerStatus__Sequence__init(mavros_msgs__msg__GimbalManagerStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mavros_msgs__msg__GimbalManagerStatus * data = NULL;

  if (size) {
    data = (mavros_msgs__msg__GimbalManagerStatus *)allocator.zero_allocate(size, sizeof(mavros_msgs__msg__GimbalManagerStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mavros_msgs__msg__GimbalManagerStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mavros_msgs__msg__GimbalManagerStatus__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
mavros_msgs__msg__GimbalManagerStatus__Sequence__fini(mavros_msgs__msg__GimbalManagerStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mavros_msgs__msg__GimbalManagerStatus__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

mavros_msgs__msg__GimbalManagerStatus__Sequence *
mavros_msgs__msg__GimbalManagerStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mavros_msgs__msg__GimbalManagerStatus__Sequence * array = (mavros_msgs__msg__GimbalManagerStatus__Sequence *)allocator.allocate(sizeof(mavros_msgs__msg__GimbalManagerStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mavros_msgs__msg__GimbalManagerStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mavros_msgs__msg__GimbalManagerStatus__Sequence__destroy(mavros_msgs__msg__GimbalManagerStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mavros_msgs__msg__GimbalManagerStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mavros_msgs__msg__GimbalManagerStatus__Sequence__are_equal(const mavros_msgs__msg__GimbalManagerStatus__Sequence * lhs, const mavros_msgs__msg__GimbalManagerStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mavros_msgs__msg__GimbalManagerStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mavros_msgs__msg__GimbalManagerStatus__Sequence__copy(
  const mavros_msgs__msg__GimbalManagerStatus__Sequence * input,
  mavros_msgs__msg__GimbalManagerStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mavros_msgs__msg__GimbalManagerStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mavros_msgs__msg__GimbalManagerStatus * data =
      (mavros_msgs__msg__GimbalManagerStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mavros_msgs__msg__GimbalManagerStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mavros_msgs__msg__GimbalManagerStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mavros_msgs__msg__GimbalManagerStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
