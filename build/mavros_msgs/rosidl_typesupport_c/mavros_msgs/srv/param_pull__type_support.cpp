// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from mavros_msgs:srv/ParamPull.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "mavros_msgs/srv/detail/param_pull__struct.h"
#include "mavros_msgs/srv/detail/param_pull__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace mavros_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ParamPull_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ParamPull_Request_type_support_ids_t;

static const _ParamPull_Request_type_support_ids_t _ParamPull_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ParamPull_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ParamPull_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ParamPull_Request_type_support_symbol_names_t _ParamPull_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mavros_msgs, srv, ParamPull_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mavros_msgs, srv, ParamPull_Request)),
  }
};

typedef struct _ParamPull_Request_type_support_data_t
{
  void * data[2];
} _ParamPull_Request_type_support_data_t;

static _ParamPull_Request_type_support_data_t _ParamPull_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ParamPull_Request_message_typesupport_map = {
  2,
  "mavros_msgs",
  &_ParamPull_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ParamPull_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ParamPull_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ParamPull_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ParamPull_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace mavros_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, mavros_msgs, srv, ParamPull_Request)() {
  return &::mavros_msgs::srv::rosidl_typesupport_c::ParamPull_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mavros_msgs/srv/detail/param_pull__struct.h"
// already included above
// #include "mavros_msgs/srv/detail/param_pull__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mavros_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ParamPull_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ParamPull_Response_type_support_ids_t;

static const _ParamPull_Response_type_support_ids_t _ParamPull_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ParamPull_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ParamPull_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ParamPull_Response_type_support_symbol_names_t _ParamPull_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mavros_msgs, srv, ParamPull_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mavros_msgs, srv, ParamPull_Response)),
  }
};

typedef struct _ParamPull_Response_type_support_data_t
{
  void * data[2];
} _ParamPull_Response_type_support_data_t;

static _ParamPull_Response_type_support_data_t _ParamPull_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ParamPull_Response_message_typesupport_map = {
  2,
  "mavros_msgs",
  &_ParamPull_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ParamPull_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ParamPull_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ParamPull_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ParamPull_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace mavros_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, mavros_msgs, srv, ParamPull_Response)() {
  return &::mavros_msgs::srv::rosidl_typesupport_c::ParamPull_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "mavros_msgs/srv/detail/param_pull__type_support.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mavros_msgs
{

namespace srv
{

namespace rosidl_typesupport_c
{

typedef struct _ParamPull_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ParamPull_type_support_ids_t;

static const _ParamPull_type_support_ids_t _ParamPull_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ParamPull_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ParamPull_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ParamPull_type_support_symbol_names_t _ParamPull_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mavros_msgs, srv, ParamPull)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mavros_msgs, srv, ParamPull)),
  }
};

typedef struct _ParamPull_type_support_data_t
{
  void * data[2];
} _ParamPull_type_support_data_t;

static _ParamPull_type_support_data_t _ParamPull_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ParamPull_service_typesupport_map = {
  2,
  "mavros_msgs",
  &_ParamPull_service_typesupport_ids.typesupport_identifier[0],
  &_ParamPull_service_typesupport_symbol_names.symbol_name[0],
  &_ParamPull_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ParamPull_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ParamPull_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace srv

}  // namespace mavros_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, mavros_msgs, srv, ParamPull)() {
  return &::mavros_msgs::srv::rosidl_typesupport_c::ParamPull_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif