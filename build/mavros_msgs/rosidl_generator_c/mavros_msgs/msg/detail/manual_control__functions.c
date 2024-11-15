// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mavros_msgs:msg/ManualControl.idl
// generated code does not contain a copyright notice
#include "mavros_msgs/msg/detail/manual_control__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
mavros_msgs__msg__ManualControl__init(mavros_msgs__msg__ManualControl * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mavros_msgs__msg__ManualControl__fini(msg);
    return false;
  }
  // x
  // y
  // z
  // r
  // buttons
  // buttons2
  // enabled_extensions
  // s
  // t
  // aux1
  // aux2
  // aux3
  // aux4
  // aux5
  // aux6
  return true;
}

void
mavros_msgs__msg__ManualControl__fini(mavros_msgs__msg__ManualControl * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // x
  // y
  // z
  // r
  // buttons
  // buttons2
  // enabled_extensions
  // s
  // t
  // aux1
  // aux2
  // aux3
  // aux4
  // aux5
  // aux6
}

bool
mavros_msgs__msg__ManualControl__are_equal(const mavros_msgs__msg__ManualControl * lhs, const mavros_msgs__msg__ManualControl * rhs)
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
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  // r
  if (lhs->r != rhs->r) {
    return false;
  }
  // buttons
  if (lhs->buttons != rhs->buttons) {
    return false;
  }
  // buttons2
  if (lhs->buttons2 != rhs->buttons2) {
    return false;
  }
  // enabled_extensions
  if (lhs->enabled_extensions != rhs->enabled_extensions) {
    return false;
  }
  // s
  if (lhs->s != rhs->s) {
    return false;
  }
  // t
  if (lhs->t != rhs->t) {
    return false;
  }
  // aux1
  if (lhs->aux1 != rhs->aux1) {
    return false;
  }
  // aux2
  if (lhs->aux2 != rhs->aux2) {
    return false;
  }
  // aux3
  if (lhs->aux3 != rhs->aux3) {
    return false;
  }
  // aux4
  if (lhs->aux4 != rhs->aux4) {
    return false;
  }
  // aux5
  if (lhs->aux5 != rhs->aux5) {
    return false;
  }
  // aux6
  if (lhs->aux6 != rhs->aux6) {
    return false;
  }
  return true;
}

bool
mavros_msgs__msg__ManualControl__copy(
  const mavros_msgs__msg__ManualControl * input,
  mavros_msgs__msg__ManualControl * output)
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
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  // r
  output->r = input->r;
  // buttons
  output->buttons = input->buttons;
  // buttons2
  output->buttons2 = input->buttons2;
  // enabled_extensions
  output->enabled_extensions = input->enabled_extensions;
  // s
  output->s = input->s;
  // t
  output->t = input->t;
  // aux1
  output->aux1 = input->aux1;
  // aux2
  output->aux2 = input->aux2;
  // aux3
  output->aux3 = input->aux3;
  // aux4
  output->aux4 = input->aux4;
  // aux5
  output->aux5 = input->aux5;
  // aux6
  output->aux6 = input->aux6;
  return true;
}

mavros_msgs__msg__ManualControl *
mavros_msgs__msg__ManualControl__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mavros_msgs__msg__ManualControl * msg = (mavros_msgs__msg__ManualControl *)allocator.allocate(sizeof(mavros_msgs__msg__ManualControl), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mavros_msgs__msg__ManualControl));
  bool success = mavros_msgs__msg__ManualControl__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mavros_msgs__msg__ManualControl__destroy(mavros_msgs__msg__ManualControl * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mavros_msgs__msg__ManualControl__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mavros_msgs__msg__ManualControl__Sequence__init(mavros_msgs__msg__ManualControl__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mavros_msgs__msg__ManualControl * data = NULL;

  if (size) {
    data = (mavros_msgs__msg__ManualControl *)allocator.zero_allocate(size, sizeof(mavros_msgs__msg__ManualControl), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mavros_msgs__msg__ManualControl__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mavros_msgs__msg__ManualControl__fini(&data[i - 1]);
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
mavros_msgs__msg__ManualControl__Sequence__fini(mavros_msgs__msg__ManualControl__Sequence * array)
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
      mavros_msgs__msg__ManualControl__fini(&array->data[i]);
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

mavros_msgs__msg__ManualControl__Sequence *
mavros_msgs__msg__ManualControl__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mavros_msgs__msg__ManualControl__Sequence * array = (mavros_msgs__msg__ManualControl__Sequence *)allocator.allocate(sizeof(mavros_msgs__msg__ManualControl__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mavros_msgs__msg__ManualControl__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mavros_msgs__msg__ManualControl__Sequence__destroy(mavros_msgs__msg__ManualControl__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mavros_msgs__msg__ManualControl__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mavros_msgs__msg__ManualControl__Sequence__are_equal(const mavros_msgs__msg__ManualControl__Sequence * lhs, const mavros_msgs__msg__ManualControl__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mavros_msgs__msg__ManualControl__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mavros_msgs__msg__ManualControl__Sequence__copy(
  const mavros_msgs__msg__ManualControl__Sequence * input,
  mavros_msgs__msg__ManualControl__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mavros_msgs__msg__ManualControl);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mavros_msgs__msg__ManualControl * data =
      (mavros_msgs__msg__ManualControl *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mavros_msgs__msg__ManualControl__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mavros_msgs__msg__ManualControl__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mavros_msgs__msg__ManualControl__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
