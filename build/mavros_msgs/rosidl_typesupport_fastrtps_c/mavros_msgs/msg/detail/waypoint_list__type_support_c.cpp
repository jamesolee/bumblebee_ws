// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mavros_msgs:msg/WaypointList.idl
// generated code does not contain a copyright notice
#include "mavros_msgs/msg/detail/waypoint_list__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mavros_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mavros_msgs/msg/detail/waypoint_list__struct.h"
#include "mavros_msgs/msg/detail/waypoint_list__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "mavros_msgs/msg/detail/waypoint__functions.h"  // waypoints

// forward declare type support functions
size_t get_serialized_size_mavros_msgs__msg__Waypoint(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_mavros_msgs__msg__Waypoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mavros_msgs, msg, Waypoint)();


using _WaypointList__ros_msg_type = mavros_msgs__msg__WaypointList;

static bool _WaypointList__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _WaypointList__ros_msg_type * ros_message = static_cast<const _WaypointList__ros_msg_type *>(untyped_ros_message);
  // Field name: current_seq
  {
    cdr << ros_message->current_seq;
  }

  // Field name: waypoints
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, mavros_msgs, msg, Waypoint
      )()->data);
    size_t size = ros_message->waypoints.size;
    auto array_ptr = ros_message->waypoints.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _WaypointList__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _WaypointList__ros_msg_type * ros_message = static_cast<_WaypointList__ros_msg_type *>(untyped_ros_message);
  // Field name: current_seq
  {
    cdr >> ros_message->current_seq;
  }

  // Field name: waypoints
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, mavros_msgs, msg, Waypoint
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->waypoints.data) {
      mavros_msgs__msg__Waypoint__Sequence__fini(&ros_message->waypoints);
    }
    if (!mavros_msgs__msg__Waypoint__Sequence__init(&ros_message->waypoints, size)) {
      fprintf(stderr, "failed to create array for field 'waypoints'");
      return false;
    }
    auto array_ptr = ros_message->waypoints.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mavros_msgs
size_t get_serialized_size_mavros_msgs__msg__WaypointList(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _WaypointList__ros_msg_type * ros_message = static_cast<const _WaypointList__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name current_seq
  {
    size_t item_size = sizeof(ros_message->current_seq);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name waypoints
  {
    size_t array_size = ros_message->waypoints.size;
    auto array_ptr = ros_message->waypoints.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_mavros_msgs__msg__Waypoint(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _WaypointList__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mavros_msgs__msg__WaypointList(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mavros_msgs
size_t max_serialized_size_mavros_msgs__msg__WaypointList(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: current_seq
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: waypoints
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_mavros_msgs__msg__Waypoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = mavros_msgs__msg__WaypointList;
    is_plain =
      (
      offsetof(DataType, waypoints) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _WaypointList__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_mavros_msgs__msg__WaypointList(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_WaypointList = {
  "mavros_msgs::msg",
  "WaypointList",
  _WaypointList__cdr_serialize,
  _WaypointList__cdr_deserialize,
  _WaypointList__get_serialized_size,
  _WaypointList__max_serialized_size
};

static rosidl_message_type_support_t _WaypointList__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_WaypointList,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mavros_msgs, msg, WaypointList)() {
  return &_WaypointList__type_support;
}

#if defined(__cplusplus)
}
#endif
