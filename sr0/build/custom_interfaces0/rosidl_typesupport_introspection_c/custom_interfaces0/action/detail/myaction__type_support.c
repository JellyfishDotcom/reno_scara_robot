// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from custom_interfaces0:action/Myaction.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "custom_interfaces0/action/detail/myaction__rosidl_typesupport_introspection_c.h"
#include "custom_interfaces0/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "custom_interfaces0/action/detail/myaction__functions.h"
#include "custom_interfaces0/action/detail/myaction__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Myaction_Goal__rosidl_typesupport_introspection_c__Myaction_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_interfaces0__action__Myaction_Goal__init(message_memory);
}

void Myaction_Goal__rosidl_typesupport_introspection_c__Myaction_Goal_fini_function(void * message_memory)
{
  custom_interfaces0__action__Myaction_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Myaction_Goal__rosidl_typesupport_introspection_c__Myaction_Goal_message_member_array[1] = {
  {
    "goal_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(custom_interfaces0__action__Myaction_Goal, goal_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Myaction_Goal__rosidl_typesupport_introspection_c__Myaction_Goal_message_members = {
  "custom_interfaces0__action",  // message namespace
  "Myaction_Goal",  // message name
  1,  // number of fields
  sizeof(custom_interfaces0__action__Myaction_Goal),
  Myaction_Goal__rosidl_typesupport_introspection_c__Myaction_Goal_message_member_array,  // message members
  Myaction_Goal__rosidl_typesupport_introspection_c__Myaction_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  Myaction_Goal__rosidl_typesupport_introspection_c__Myaction_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Myaction_Goal__rosidl_typesupport_introspection_c__Myaction_Goal_message_type_support_handle = {
  0,
  &Myaction_Goal__rosidl_typesupport_introspection_c__Myaction_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_interfaces0
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces0, action, Myaction_Goal)() {
  if (!Myaction_Goal__rosidl_typesupport_introspection_c__Myaction_Goal_message_type_support_handle.typesupport_identifier) {
    Myaction_Goal__rosidl_typesupport_introspection_c__Myaction_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Myaction_Goal__rosidl_typesupport_introspection_c__Myaction_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "custom_interfaces0/action/detail/myaction__rosidl_typesupport_introspection_c.h"
// already included above
// #include "custom_interfaces0/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "custom_interfaces0/action/detail/myaction__functions.h"
// already included above
// #include "custom_interfaces0/action/detail/myaction__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Myaction_Result__rosidl_typesupport_introspection_c__Myaction_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_interfaces0__action__Myaction_Result__init(message_memory);
}

void Myaction_Result__rosidl_typesupport_introspection_c__Myaction_Result_fini_function(void * message_memory)
{
  custom_interfaces0__action__Myaction_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Myaction_Result__rosidl_typesupport_introspection_c__Myaction_Result_message_member_array[1] = {
  {
    "result_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(custom_interfaces0__action__Myaction_Result, result_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Myaction_Result__rosidl_typesupport_introspection_c__Myaction_Result_message_members = {
  "custom_interfaces0__action",  // message namespace
  "Myaction_Result",  // message name
  1,  // number of fields
  sizeof(custom_interfaces0__action__Myaction_Result),
  Myaction_Result__rosidl_typesupport_introspection_c__Myaction_Result_message_member_array,  // message members
  Myaction_Result__rosidl_typesupport_introspection_c__Myaction_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  Myaction_Result__rosidl_typesupport_introspection_c__Myaction_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Myaction_Result__rosidl_typesupport_introspection_c__Myaction_Result_message_type_support_handle = {
  0,
  &Myaction_Result__rosidl_typesupport_introspection_c__Myaction_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_interfaces0
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces0, action, Myaction_Result)() {
  if (!Myaction_Result__rosidl_typesupport_introspection_c__Myaction_Result_message_type_support_handle.typesupport_identifier) {
    Myaction_Result__rosidl_typesupport_introspection_c__Myaction_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Myaction_Result__rosidl_typesupport_introspection_c__Myaction_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "custom_interfaces0/action/detail/myaction__rosidl_typesupport_introspection_c.h"
// already included above
// #include "custom_interfaces0/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "custom_interfaces0/action/detail/myaction__functions.h"
// already included above
// #include "custom_interfaces0/action/detail/myaction__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Myaction_Feedback__rosidl_typesupport_introspection_c__Myaction_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_interfaces0__action__Myaction_Feedback__init(message_memory);
}

void Myaction_Feedback__rosidl_typesupport_introspection_c__Myaction_Feedback_fini_function(void * message_memory)
{
  custom_interfaces0__action__Myaction_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Myaction_Feedback__rosidl_typesupport_introspection_c__Myaction_Feedback_message_member_array[1] = {
  {
    "current_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(custom_interfaces0__action__Myaction_Feedback, current_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Myaction_Feedback__rosidl_typesupport_introspection_c__Myaction_Feedback_message_members = {
  "custom_interfaces0__action",  // message namespace
  "Myaction_Feedback",  // message name
  1,  // number of fields
  sizeof(custom_interfaces0__action__Myaction_Feedback),
  Myaction_Feedback__rosidl_typesupport_introspection_c__Myaction_Feedback_message_member_array,  // message members
  Myaction_Feedback__rosidl_typesupport_introspection_c__Myaction_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  Myaction_Feedback__rosidl_typesupport_introspection_c__Myaction_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Myaction_Feedback__rosidl_typesupport_introspection_c__Myaction_Feedback_message_type_support_handle = {
  0,
  &Myaction_Feedback__rosidl_typesupport_introspection_c__Myaction_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_interfaces0
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces0, action, Myaction_Feedback)() {
  if (!Myaction_Feedback__rosidl_typesupport_introspection_c__Myaction_Feedback_message_type_support_handle.typesupport_identifier) {
    Myaction_Feedback__rosidl_typesupport_introspection_c__Myaction_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Myaction_Feedback__rosidl_typesupport_introspection_c__Myaction_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "custom_interfaces0/action/detail/myaction__rosidl_typesupport_introspection_c.h"
// already included above
// #include "custom_interfaces0/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "custom_interfaces0/action/detail/myaction__functions.h"
// already included above
// #include "custom_interfaces0/action/detail/myaction__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "custom_interfaces0/action/myaction.h"
// Member `goal`
// already included above
// #include "custom_interfaces0/action/detail/myaction__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Myaction_SendGoal_Request__rosidl_typesupport_introspection_c__Myaction_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_interfaces0__action__Myaction_SendGoal_Request__init(message_memory);
}

void Myaction_SendGoal_Request__rosidl_typesupport_introspection_c__Myaction_SendGoal_Request_fini_function(void * message_memory)
{
  custom_interfaces0__action__Myaction_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Myaction_SendGoal_Request__rosidl_typesupport_introspection_c__Myaction_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interfaces0__action__Myaction_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interfaces0__action__Myaction_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Myaction_SendGoal_Request__rosidl_typesupport_introspection_c__Myaction_SendGoal_Request_message_members = {
  "custom_interfaces0__action",  // message namespace
  "Myaction_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(custom_interfaces0__action__Myaction_SendGoal_Request),
  Myaction_SendGoal_Request__rosidl_typesupport_introspection_c__Myaction_SendGoal_Request_message_member_array,  // message members
  Myaction_SendGoal_Request__rosidl_typesupport_introspection_c__Myaction_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Myaction_SendGoal_Request__rosidl_typesupport_introspection_c__Myaction_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Myaction_SendGoal_Request__rosidl_typesupport_introspection_c__Myaction_SendGoal_Request_message_type_support_handle = {
  0,
  &Myaction_SendGoal_Request__rosidl_typesupport_introspection_c__Myaction_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_interfaces0
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces0, action, Myaction_SendGoal_Request)() {
  Myaction_SendGoal_Request__rosidl_typesupport_introspection_c__Myaction_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  Myaction_SendGoal_Request__rosidl_typesupport_introspection_c__Myaction_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces0, action, Myaction_Goal)();
  if (!Myaction_SendGoal_Request__rosidl_typesupport_introspection_c__Myaction_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    Myaction_SendGoal_Request__rosidl_typesupport_introspection_c__Myaction_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Myaction_SendGoal_Request__rosidl_typesupport_introspection_c__Myaction_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "custom_interfaces0/action/detail/myaction__rosidl_typesupport_introspection_c.h"
// already included above
// #include "custom_interfaces0/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "custom_interfaces0/action/detail/myaction__functions.h"
// already included above
// #include "custom_interfaces0/action/detail/myaction__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Myaction_SendGoal_Response__rosidl_typesupport_introspection_c__Myaction_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_interfaces0__action__Myaction_SendGoal_Response__init(message_memory);
}

void Myaction_SendGoal_Response__rosidl_typesupport_introspection_c__Myaction_SendGoal_Response_fini_function(void * message_memory)
{
  custom_interfaces0__action__Myaction_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Myaction_SendGoal_Response__rosidl_typesupport_introspection_c__Myaction_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interfaces0__action__Myaction_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interfaces0__action__Myaction_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Myaction_SendGoal_Response__rosidl_typesupport_introspection_c__Myaction_SendGoal_Response_message_members = {
  "custom_interfaces0__action",  // message namespace
  "Myaction_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(custom_interfaces0__action__Myaction_SendGoal_Response),
  Myaction_SendGoal_Response__rosidl_typesupport_introspection_c__Myaction_SendGoal_Response_message_member_array,  // message members
  Myaction_SendGoal_Response__rosidl_typesupport_introspection_c__Myaction_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Myaction_SendGoal_Response__rosidl_typesupport_introspection_c__Myaction_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Myaction_SendGoal_Response__rosidl_typesupport_introspection_c__Myaction_SendGoal_Response_message_type_support_handle = {
  0,
  &Myaction_SendGoal_Response__rosidl_typesupport_introspection_c__Myaction_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_interfaces0
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces0, action, Myaction_SendGoal_Response)() {
  Myaction_SendGoal_Response__rosidl_typesupport_introspection_c__Myaction_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!Myaction_SendGoal_Response__rosidl_typesupport_introspection_c__Myaction_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    Myaction_SendGoal_Response__rosidl_typesupport_introspection_c__Myaction_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Myaction_SendGoal_Response__rosidl_typesupport_introspection_c__Myaction_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "custom_interfaces0/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "custom_interfaces0/action/detail/myaction__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers custom_interfaces0__action__detail__myaction__rosidl_typesupport_introspection_c__Myaction_SendGoal_service_members = {
  "custom_interfaces0__action",  // service namespace
  "Myaction_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // custom_interfaces0__action__detail__myaction__rosidl_typesupport_introspection_c__Myaction_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // custom_interfaces0__action__detail__myaction__rosidl_typesupport_introspection_c__Myaction_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t custom_interfaces0__action__detail__myaction__rosidl_typesupport_introspection_c__Myaction_SendGoal_service_type_support_handle = {
  0,
  &custom_interfaces0__action__detail__myaction__rosidl_typesupport_introspection_c__Myaction_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces0, action, Myaction_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces0, action, Myaction_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_interfaces0
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces0, action, Myaction_SendGoal)() {
  if (!custom_interfaces0__action__detail__myaction__rosidl_typesupport_introspection_c__Myaction_SendGoal_service_type_support_handle.typesupport_identifier) {
    custom_interfaces0__action__detail__myaction__rosidl_typesupport_introspection_c__Myaction_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)custom_interfaces0__action__detail__myaction__rosidl_typesupport_introspection_c__Myaction_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces0, action, Myaction_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces0, action, Myaction_SendGoal_Response)()->data;
  }

  return &custom_interfaces0__action__detail__myaction__rosidl_typesupport_introspection_c__Myaction_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "custom_interfaces0/action/detail/myaction__rosidl_typesupport_introspection_c.h"
// already included above
// #include "custom_interfaces0/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "custom_interfaces0/action/detail/myaction__functions.h"
// already included above
// #include "custom_interfaces0/action/detail/myaction__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Myaction_GetResult_Request__rosidl_typesupport_introspection_c__Myaction_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_interfaces0__action__Myaction_GetResult_Request__init(message_memory);
}

void Myaction_GetResult_Request__rosidl_typesupport_introspection_c__Myaction_GetResult_Request_fini_function(void * message_memory)
{
  custom_interfaces0__action__Myaction_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Myaction_GetResult_Request__rosidl_typesupport_introspection_c__Myaction_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interfaces0__action__Myaction_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Myaction_GetResult_Request__rosidl_typesupport_introspection_c__Myaction_GetResult_Request_message_members = {
  "custom_interfaces0__action",  // message namespace
  "Myaction_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(custom_interfaces0__action__Myaction_GetResult_Request),
  Myaction_GetResult_Request__rosidl_typesupport_introspection_c__Myaction_GetResult_Request_message_member_array,  // message members
  Myaction_GetResult_Request__rosidl_typesupport_introspection_c__Myaction_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Myaction_GetResult_Request__rosidl_typesupport_introspection_c__Myaction_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Myaction_GetResult_Request__rosidl_typesupport_introspection_c__Myaction_GetResult_Request_message_type_support_handle = {
  0,
  &Myaction_GetResult_Request__rosidl_typesupport_introspection_c__Myaction_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_interfaces0
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces0, action, Myaction_GetResult_Request)() {
  Myaction_GetResult_Request__rosidl_typesupport_introspection_c__Myaction_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!Myaction_GetResult_Request__rosidl_typesupport_introspection_c__Myaction_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    Myaction_GetResult_Request__rosidl_typesupport_introspection_c__Myaction_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Myaction_GetResult_Request__rosidl_typesupport_introspection_c__Myaction_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "custom_interfaces0/action/detail/myaction__rosidl_typesupport_introspection_c.h"
// already included above
// #include "custom_interfaces0/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "custom_interfaces0/action/detail/myaction__functions.h"
// already included above
// #include "custom_interfaces0/action/detail/myaction__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "custom_interfaces0/action/myaction.h"
// Member `result`
// already included above
// #include "custom_interfaces0/action/detail/myaction__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Myaction_GetResult_Response__rosidl_typesupport_introspection_c__Myaction_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_interfaces0__action__Myaction_GetResult_Response__init(message_memory);
}

void Myaction_GetResult_Response__rosidl_typesupport_introspection_c__Myaction_GetResult_Response_fini_function(void * message_memory)
{
  custom_interfaces0__action__Myaction_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Myaction_GetResult_Response__rosidl_typesupport_introspection_c__Myaction_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interfaces0__action__Myaction_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interfaces0__action__Myaction_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Myaction_GetResult_Response__rosidl_typesupport_introspection_c__Myaction_GetResult_Response_message_members = {
  "custom_interfaces0__action",  // message namespace
  "Myaction_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(custom_interfaces0__action__Myaction_GetResult_Response),
  Myaction_GetResult_Response__rosidl_typesupport_introspection_c__Myaction_GetResult_Response_message_member_array,  // message members
  Myaction_GetResult_Response__rosidl_typesupport_introspection_c__Myaction_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Myaction_GetResult_Response__rosidl_typesupport_introspection_c__Myaction_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Myaction_GetResult_Response__rosidl_typesupport_introspection_c__Myaction_GetResult_Response_message_type_support_handle = {
  0,
  &Myaction_GetResult_Response__rosidl_typesupport_introspection_c__Myaction_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_interfaces0
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces0, action, Myaction_GetResult_Response)() {
  Myaction_GetResult_Response__rosidl_typesupport_introspection_c__Myaction_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces0, action, Myaction_Result)();
  if (!Myaction_GetResult_Response__rosidl_typesupport_introspection_c__Myaction_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    Myaction_GetResult_Response__rosidl_typesupport_introspection_c__Myaction_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Myaction_GetResult_Response__rosidl_typesupport_introspection_c__Myaction_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "custom_interfaces0/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "custom_interfaces0/action/detail/myaction__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers custom_interfaces0__action__detail__myaction__rosidl_typesupport_introspection_c__Myaction_GetResult_service_members = {
  "custom_interfaces0__action",  // service namespace
  "Myaction_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // custom_interfaces0__action__detail__myaction__rosidl_typesupport_introspection_c__Myaction_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // custom_interfaces0__action__detail__myaction__rosidl_typesupport_introspection_c__Myaction_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t custom_interfaces0__action__detail__myaction__rosidl_typesupport_introspection_c__Myaction_GetResult_service_type_support_handle = {
  0,
  &custom_interfaces0__action__detail__myaction__rosidl_typesupport_introspection_c__Myaction_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces0, action, Myaction_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces0, action, Myaction_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_interfaces0
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces0, action, Myaction_GetResult)() {
  if (!custom_interfaces0__action__detail__myaction__rosidl_typesupport_introspection_c__Myaction_GetResult_service_type_support_handle.typesupport_identifier) {
    custom_interfaces0__action__detail__myaction__rosidl_typesupport_introspection_c__Myaction_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)custom_interfaces0__action__detail__myaction__rosidl_typesupport_introspection_c__Myaction_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces0, action, Myaction_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces0, action, Myaction_GetResult_Response)()->data;
  }

  return &custom_interfaces0__action__detail__myaction__rosidl_typesupport_introspection_c__Myaction_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "custom_interfaces0/action/detail/myaction__rosidl_typesupport_introspection_c.h"
// already included above
// #include "custom_interfaces0/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "custom_interfaces0/action/detail/myaction__functions.h"
// already included above
// #include "custom_interfaces0/action/detail/myaction__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "custom_interfaces0/action/myaction.h"
// Member `feedback`
// already included above
// #include "custom_interfaces0/action/detail/myaction__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Myaction_FeedbackMessage__rosidl_typesupport_introspection_c__Myaction_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  custom_interfaces0__action__Myaction_FeedbackMessage__init(message_memory);
}

void Myaction_FeedbackMessage__rosidl_typesupport_introspection_c__Myaction_FeedbackMessage_fini_function(void * message_memory)
{
  custom_interfaces0__action__Myaction_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Myaction_FeedbackMessage__rosidl_typesupport_introspection_c__Myaction_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interfaces0__action__Myaction_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(custom_interfaces0__action__Myaction_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Myaction_FeedbackMessage__rosidl_typesupport_introspection_c__Myaction_FeedbackMessage_message_members = {
  "custom_interfaces0__action",  // message namespace
  "Myaction_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(custom_interfaces0__action__Myaction_FeedbackMessage),
  Myaction_FeedbackMessage__rosidl_typesupport_introspection_c__Myaction_FeedbackMessage_message_member_array,  // message members
  Myaction_FeedbackMessage__rosidl_typesupport_introspection_c__Myaction_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  Myaction_FeedbackMessage__rosidl_typesupport_introspection_c__Myaction_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Myaction_FeedbackMessage__rosidl_typesupport_introspection_c__Myaction_FeedbackMessage_message_type_support_handle = {
  0,
  &Myaction_FeedbackMessage__rosidl_typesupport_introspection_c__Myaction_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_custom_interfaces0
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces0, action, Myaction_FeedbackMessage)() {
  Myaction_FeedbackMessage__rosidl_typesupport_introspection_c__Myaction_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  Myaction_FeedbackMessage__rosidl_typesupport_introspection_c__Myaction_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, custom_interfaces0, action, Myaction_Feedback)();
  if (!Myaction_FeedbackMessage__rosidl_typesupport_introspection_c__Myaction_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    Myaction_FeedbackMessage__rosidl_typesupport_introspection_c__Myaction_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Myaction_FeedbackMessage__rosidl_typesupport_introspection_c__Myaction_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif