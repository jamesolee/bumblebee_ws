// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mavros_msgs:srv/VehicleInfoGet.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mavros_msgs/srv/detail/vehicle_info_get__rosidl_typesupport_introspection_c.h"
#include "mavros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mavros_msgs/srv/detail/vehicle_info_get__functions.h"
#include "mavros_msgs/srv/detail/vehicle_info_get__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void mavros_msgs__srv__VehicleInfoGet_Request__rosidl_typesupport_introspection_c__VehicleInfoGet_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mavros_msgs__srv__VehicleInfoGet_Request__init(message_memory);
}

void mavros_msgs__srv__VehicleInfoGet_Request__rosidl_typesupport_introspection_c__VehicleInfoGet_Request_fini_function(void * message_memory)
{
  mavros_msgs__srv__VehicleInfoGet_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mavros_msgs__srv__VehicleInfoGet_Request__rosidl_typesupport_introspection_c__VehicleInfoGet_Request_message_member_array[3] = {
  {
    "sysid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mavros_msgs__srv__VehicleInfoGet_Request, sysid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "compid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mavros_msgs__srv__VehicleInfoGet_Request, compid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "get_all",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mavros_msgs__srv__VehicleInfoGet_Request, get_all),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mavros_msgs__srv__VehicleInfoGet_Request__rosidl_typesupport_introspection_c__VehicleInfoGet_Request_message_members = {
  "mavros_msgs__srv",  // message namespace
  "VehicleInfoGet_Request",  // message name
  3,  // number of fields
  sizeof(mavros_msgs__srv__VehicleInfoGet_Request),
  mavros_msgs__srv__VehicleInfoGet_Request__rosidl_typesupport_introspection_c__VehicleInfoGet_Request_message_member_array,  // message members
  mavros_msgs__srv__VehicleInfoGet_Request__rosidl_typesupport_introspection_c__VehicleInfoGet_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  mavros_msgs__srv__VehicleInfoGet_Request__rosidl_typesupport_introspection_c__VehicleInfoGet_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mavros_msgs__srv__VehicleInfoGet_Request__rosidl_typesupport_introspection_c__VehicleInfoGet_Request_message_type_support_handle = {
  0,
  &mavros_msgs__srv__VehicleInfoGet_Request__rosidl_typesupport_introspection_c__VehicleInfoGet_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mavros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mavros_msgs, srv, VehicleInfoGet_Request)() {
  if (!mavros_msgs__srv__VehicleInfoGet_Request__rosidl_typesupport_introspection_c__VehicleInfoGet_Request_message_type_support_handle.typesupport_identifier) {
    mavros_msgs__srv__VehicleInfoGet_Request__rosidl_typesupport_introspection_c__VehicleInfoGet_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mavros_msgs__srv__VehicleInfoGet_Request__rosidl_typesupport_introspection_c__VehicleInfoGet_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "mavros_msgs/srv/detail/vehicle_info_get__rosidl_typesupport_introspection_c.h"
// already included above
// #include "mavros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "mavros_msgs/srv/detail/vehicle_info_get__functions.h"
// already included above
// #include "mavros_msgs/srv/detail/vehicle_info_get__struct.h"


// Include directives for member types
// Member `vehicles`
#include "mavros_msgs/msg/vehicle_info.h"
// Member `vehicles`
#include "mavros_msgs/msg/detail/vehicle_info__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mavros_msgs__srv__VehicleInfoGet_Response__rosidl_typesupport_introspection_c__VehicleInfoGet_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mavros_msgs__srv__VehicleInfoGet_Response__init(message_memory);
}

void mavros_msgs__srv__VehicleInfoGet_Response__rosidl_typesupport_introspection_c__VehicleInfoGet_Response_fini_function(void * message_memory)
{
  mavros_msgs__srv__VehicleInfoGet_Response__fini(message_memory);
}

size_t mavros_msgs__srv__VehicleInfoGet_Response__rosidl_typesupport_introspection_c__size_function__VehicleInfoGet_Response__vehicles(
  const void * untyped_member)
{
  const mavros_msgs__msg__VehicleInfo__Sequence * member =
    (const mavros_msgs__msg__VehicleInfo__Sequence *)(untyped_member);
  return member->size;
}

const void * mavros_msgs__srv__VehicleInfoGet_Response__rosidl_typesupport_introspection_c__get_const_function__VehicleInfoGet_Response__vehicles(
  const void * untyped_member, size_t index)
{
  const mavros_msgs__msg__VehicleInfo__Sequence * member =
    (const mavros_msgs__msg__VehicleInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mavros_msgs__srv__VehicleInfoGet_Response__rosidl_typesupport_introspection_c__get_function__VehicleInfoGet_Response__vehicles(
  void * untyped_member, size_t index)
{
  mavros_msgs__msg__VehicleInfo__Sequence * member =
    (mavros_msgs__msg__VehicleInfo__Sequence *)(untyped_member);
  return &member->data[index];
}

void mavros_msgs__srv__VehicleInfoGet_Response__rosidl_typesupport_introspection_c__fetch_function__VehicleInfoGet_Response__vehicles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const mavros_msgs__msg__VehicleInfo * item =
    ((const mavros_msgs__msg__VehicleInfo *)
    mavros_msgs__srv__VehicleInfoGet_Response__rosidl_typesupport_introspection_c__get_const_function__VehicleInfoGet_Response__vehicles(untyped_member, index));
  mavros_msgs__msg__VehicleInfo * value =
    (mavros_msgs__msg__VehicleInfo *)(untyped_value);
  *value = *item;
}

void mavros_msgs__srv__VehicleInfoGet_Response__rosidl_typesupport_introspection_c__assign_function__VehicleInfoGet_Response__vehicles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  mavros_msgs__msg__VehicleInfo * item =
    ((mavros_msgs__msg__VehicleInfo *)
    mavros_msgs__srv__VehicleInfoGet_Response__rosidl_typesupport_introspection_c__get_function__VehicleInfoGet_Response__vehicles(untyped_member, index));
  const mavros_msgs__msg__VehicleInfo * value =
    (const mavros_msgs__msg__VehicleInfo *)(untyped_value);
  *item = *value;
}

bool mavros_msgs__srv__VehicleInfoGet_Response__rosidl_typesupport_introspection_c__resize_function__VehicleInfoGet_Response__vehicles(
  void * untyped_member, size_t size)
{
  mavros_msgs__msg__VehicleInfo__Sequence * member =
    (mavros_msgs__msg__VehicleInfo__Sequence *)(untyped_member);
  mavros_msgs__msg__VehicleInfo__Sequence__fini(member);
  return mavros_msgs__msg__VehicleInfo__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mavros_msgs__srv__VehicleInfoGet_Response__rosidl_typesupport_introspection_c__VehicleInfoGet_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mavros_msgs__srv__VehicleInfoGet_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vehicles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mavros_msgs__srv__VehicleInfoGet_Response, vehicles),  // bytes offset in struct
    NULL,  // default value
    mavros_msgs__srv__VehicleInfoGet_Response__rosidl_typesupport_introspection_c__size_function__VehicleInfoGet_Response__vehicles,  // size() function pointer
    mavros_msgs__srv__VehicleInfoGet_Response__rosidl_typesupport_introspection_c__get_const_function__VehicleInfoGet_Response__vehicles,  // get_const(index) function pointer
    mavros_msgs__srv__VehicleInfoGet_Response__rosidl_typesupport_introspection_c__get_function__VehicleInfoGet_Response__vehicles,  // get(index) function pointer
    mavros_msgs__srv__VehicleInfoGet_Response__rosidl_typesupport_introspection_c__fetch_function__VehicleInfoGet_Response__vehicles,  // fetch(index, &value) function pointer
    mavros_msgs__srv__VehicleInfoGet_Response__rosidl_typesupport_introspection_c__assign_function__VehicleInfoGet_Response__vehicles,  // assign(index, value) function pointer
    mavros_msgs__srv__VehicleInfoGet_Response__rosidl_typesupport_introspection_c__resize_function__VehicleInfoGet_Response__vehicles  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mavros_msgs__srv__VehicleInfoGet_Response__rosidl_typesupport_introspection_c__VehicleInfoGet_Response_message_members = {
  "mavros_msgs__srv",  // message namespace
  "VehicleInfoGet_Response",  // message name
  2,  // number of fields
  sizeof(mavros_msgs__srv__VehicleInfoGet_Response),
  mavros_msgs__srv__VehicleInfoGet_Response__rosidl_typesupport_introspection_c__VehicleInfoGet_Response_message_member_array,  // message members
  mavros_msgs__srv__VehicleInfoGet_Response__rosidl_typesupport_introspection_c__VehicleInfoGet_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  mavros_msgs__srv__VehicleInfoGet_Response__rosidl_typesupport_introspection_c__VehicleInfoGet_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mavros_msgs__srv__VehicleInfoGet_Response__rosidl_typesupport_introspection_c__VehicleInfoGet_Response_message_type_support_handle = {
  0,
  &mavros_msgs__srv__VehicleInfoGet_Response__rosidl_typesupport_introspection_c__VehicleInfoGet_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mavros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mavros_msgs, srv, VehicleInfoGet_Response)() {
  mavros_msgs__srv__VehicleInfoGet_Response__rosidl_typesupport_introspection_c__VehicleInfoGet_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mavros_msgs, msg, VehicleInfo)();
  if (!mavros_msgs__srv__VehicleInfoGet_Response__rosidl_typesupport_introspection_c__VehicleInfoGet_Response_message_type_support_handle.typesupport_identifier) {
    mavros_msgs__srv__VehicleInfoGet_Response__rosidl_typesupport_introspection_c__VehicleInfoGet_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mavros_msgs__srv__VehicleInfoGet_Response__rosidl_typesupport_introspection_c__VehicleInfoGet_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "mavros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "mavros_msgs/srv/detail/vehicle_info_get__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers mavros_msgs__srv__detail__vehicle_info_get__rosidl_typesupport_introspection_c__VehicleInfoGet_service_members = {
  "mavros_msgs__srv",  // service namespace
  "VehicleInfoGet",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // mavros_msgs__srv__detail__vehicle_info_get__rosidl_typesupport_introspection_c__VehicleInfoGet_Request_message_type_support_handle,
  NULL  // response message
  // mavros_msgs__srv__detail__vehicle_info_get__rosidl_typesupport_introspection_c__VehicleInfoGet_Response_message_type_support_handle
};

static rosidl_service_type_support_t mavros_msgs__srv__detail__vehicle_info_get__rosidl_typesupport_introspection_c__VehicleInfoGet_service_type_support_handle = {
  0,
  &mavros_msgs__srv__detail__vehicle_info_get__rosidl_typesupport_introspection_c__VehicleInfoGet_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mavros_msgs, srv, VehicleInfoGet_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mavros_msgs, srv, VehicleInfoGet_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mavros_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mavros_msgs, srv, VehicleInfoGet)() {
  if (!mavros_msgs__srv__detail__vehicle_info_get__rosidl_typesupport_introspection_c__VehicleInfoGet_service_type_support_handle.typesupport_identifier) {
    mavros_msgs__srv__detail__vehicle_info_get__rosidl_typesupport_introspection_c__VehicleInfoGet_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)mavros_msgs__srv__detail__vehicle_info_get__rosidl_typesupport_introspection_c__VehicleInfoGet_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mavros_msgs, srv, VehicleInfoGet_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mavros_msgs, srv, VehicleInfoGet_Response)()->data;
  }

  return &mavros_msgs__srv__detail__vehicle_info_get__rosidl_typesupport_introspection_c__VehicleInfoGet_service_type_support_handle;
}