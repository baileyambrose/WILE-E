// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from wile_e_interfaces:srv/MotorSensorData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "wile_e_interfaces/srv/detail/motor_sensor_data__rosidl_typesupport_introspection_c.h"
#include "wile_e_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "wile_e_interfaces/srv/detail/motor_sensor_data__functions.h"
#include "wile_e_interfaces/srv/detail/motor_sensor_data__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void wile_e_interfaces__srv__MotorSensorData_Request__rosidl_typesupport_introspection_c__MotorSensorData_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  wile_e_interfaces__srv__MotorSensorData_Request__init(message_memory);
}

void wile_e_interfaces__srv__MotorSensorData_Request__rosidl_typesupport_introspection_c__MotorSensorData_Request_fini_function(void * message_memory)
{
  wile_e_interfaces__srv__MotorSensorData_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember wile_e_interfaces__srv__MotorSensorData_Request__rosidl_typesupport_introspection_c__MotorSensorData_Request_message_member_array[1] = {
  {
    "call",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wile_e_interfaces__srv__MotorSensorData_Request, call),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers wile_e_interfaces__srv__MotorSensorData_Request__rosidl_typesupport_introspection_c__MotorSensorData_Request_message_members = {
  "wile_e_interfaces__srv",  // message namespace
  "MotorSensorData_Request",  // message name
  1,  // number of fields
  sizeof(wile_e_interfaces__srv__MotorSensorData_Request),
  wile_e_interfaces__srv__MotorSensorData_Request__rosidl_typesupport_introspection_c__MotorSensorData_Request_message_member_array,  // message members
  wile_e_interfaces__srv__MotorSensorData_Request__rosidl_typesupport_introspection_c__MotorSensorData_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  wile_e_interfaces__srv__MotorSensorData_Request__rosidl_typesupport_introspection_c__MotorSensorData_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t wile_e_interfaces__srv__MotorSensorData_Request__rosidl_typesupport_introspection_c__MotorSensorData_Request_message_type_support_handle = {
  0,
  &wile_e_interfaces__srv__MotorSensorData_Request__rosidl_typesupport_introspection_c__MotorSensorData_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_wile_e_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, wile_e_interfaces, srv, MotorSensorData_Request)() {
  if (!wile_e_interfaces__srv__MotorSensorData_Request__rosidl_typesupport_introspection_c__MotorSensorData_Request_message_type_support_handle.typesupport_identifier) {
    wile_e_interfaces__srv__MotorSensorData_Request__rosidl_typesupport_introspection_c__MotorSensorData_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &wile_e_interfaces__srv__MotorSensorData_Request__rosidl_typesupport_introspection_c__MotorSensorData_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "wile_e_interfaces/srv/detail/motor_sensor_data__rosidl_typesupport_introspection_c.h"
// already included above
// #include "wile_e_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "wile_e_interfaces/srv/detail/motor_sensor_data__functions.h"
// already included above
// #include "wile_e_interfaces/srv/detail/motor_sensor_data__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void wile_e_interfaces__srv__MotorSensorData_Response__rosidl_typesupport_introspection_c__MotorSensorData_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  wile_e_interfaces__srv__MotorSensorData_Response__init(message_memory);
}

void wile_e_interfaces__srv__MotorSensorData_Response__rosidl_typesupport_introspection_c__MotorSensorData_Response_fini_function(void * message_memory)
{
  wile_e_interfaces__srv__MotorSensorData_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember wile_e_interfaces__srv__MotorSensorData_Response__rosidl_typesupport_introspection_c__MotorSensorData_Response_message_member_array[4] = {
  {
    "left_shoulder",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wile_e_interfaces__srv__MotorSensorData_Response, left_shoulder),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right_shoulder",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wile_e_interfaces__srv__MotorSensorData_Response, right_shoulder),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "left_elbow",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wile_e_interfaces__srv__MotorSensorData_Response, left_elbow),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "right_elbow",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(wile_e_interfaces__srv__MotorSensorData_Response, right_elbow),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers wile_e_interfaces__srv__MotorSensorData_Response__rosidl_typesupport_introspection_c__MotorSensorData_Response_message_members = {
  "wile_e_interfaces__srv",  // message namespace
  "MotorSensorData_Response",  // message name
  4,  // number of fields
  sizeof(wile_e_interfaces__srv__MotorSensorData_Response),
  wile_e_interfaces__srv__MotorSensorData_Response__rosidl_typesupport_introspection_c__MotorSensorData_Response_message_member_array,  // message members
  wile_e_interfaces__srv__MotorSensorData_Response__rosidl_typesupport_introspection_c__MotorSensorData_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  wile_e_interfaces__srv__MotorSensorData_Response__rosidl_typesupport_introspection_c__MotorSensorData_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t wile_e_interfaces__srv__MotorSensorData_Response__rosidl_typesupport_introspection_c__MotorSensorData_Response_message_type_support_handle = {
  0,
  &wile_e_interfaces__srv__MotorSensorData_Response__rosidl_typesupport_introspection_c__MotorSensorData_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_wile_e_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, wile_e_interfaces, srv, MotorSensorData_Response)() {
  if (!wile_e_interfaces__srv__MotorSensorData_Response__rosidl_typesupport_introspection_c__MotorSensorData_Response_message_type_support_handle.typesupport_identifier) {
    wile_e_interfaces__srv__MotorSensorData_Response__rosidl_typesupport_introspection_c__MotorSensorData_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &wile_e_interfaces__srv__MotorSensorData_Response__rosidl_typesupport_introspection_c__MotorSensorData_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "wile_e_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "wile_e_interfaces/srv/detail/motor_sensor_data__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers wile_e_interfaces__srv__detail__motor_sensor_data__rosidl_typesupport_introspection_c__MotorSensorData_service_members = {
  "wile_e_interfaces__srv",  // service namespace
  "MotorSensorData",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // wile_e_interfaces__srv__detail__motor_sensor_data__rosidl_typesupport_introspection_c__MotorSensorData_Request_message_type_support_handle,
  NULL  // response message
  // wile_e_interfaces__srv__detail__motor_sensor_data__rosidl_typesupport_introspection_c__MotorSensorData_Response_message_type_support_handle
};

static rosidl_service_type_support_t wile_e_interfaces__srv__detail__motor_sensor_data__rosidl_typesupport_introspection_c__MotorSensorData_service_type_support_handle = {
  0,
  &wile_e_interfaces__srv__detail__motor_sensor_data__rosidl_typesupport_introspection_c__MotorSensorData_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, wile_e_interfaces, srv, MotorSensorData_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, wile_e_interfaces, srv, MotorSensorData_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_wile_e_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, wile_e_interfaces, srv, MotorSensorData)() {
  if (!wile_e_interfaces__srv__detail__motor_sensor_data__rosidl_typesupport_introspection_c__MotorSensorData_service_type_support_handle.typesupport_identifier) {
    wile_e_interfaces__srv__detail__motor_sensor_data__rosidl_typesupport_introspection_c__MotorSensorData_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)wile_e_interfaces__srv__detail__motor_sensor_data__rosidl_typesupport_introspection_c__MotorSensorData_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, wile_e_interfaces, srv, MotorSensorData_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, wile_e_interfaces, srv, MotorSensorData_Response)()->data;
  }

  return &wile_e_interfaces__srv__detail__motor_sensor_data__rosidl_typesupport_introspection_c__MotorSensorData_service_type_support_handle;
}
