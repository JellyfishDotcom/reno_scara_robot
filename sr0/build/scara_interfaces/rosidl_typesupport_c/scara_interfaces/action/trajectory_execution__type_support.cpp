// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from scara_interfaces:action/TrajectoryExecution.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "scara_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
#include "scara_interfaces/action/detail/trajectory_execution__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace scara_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _TrajectoryExecution_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TrajectoryExecution_Goal_type_support_ids_t;

static const _TrajectoryExecution_Goal_type_support_ids_t _TrajectoryExecution_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TrajectoryExecution_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TrajectoryExecution_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TrajectoryExecution_Goal_type_support_symbol_names_t _TrajectoryExecution_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, scara_interfaces, action, TrajectoryExecution_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, scara_interfaces, action, TrajectoryExecution_Goal)),
  }
};

typedef struct _TrajectoryExecution_Goal_type_support_data_t
{
  void * data[2];
} _TrajectoryExecution_Goal_type_support_data_t;

static _TrajectoryExecution_Goal_type_support_data_t _TrajectoryExecution_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TrajectoryExecution_Goal_message_typesupport_map = {
  2,
  "scara_interfaces",
  &_TrajectoryExecution_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_TrajectoryExecution_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_TrajectoryExecution_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TrajectoryExecution_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TrajectoryExecution_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace scara_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_scara_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, scara_interfaces, action, TrajectoryExecution_Goal)() {
  return &::scara_interfaces::action::rosidl_typesupport_c::TrajectoryExecution_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "scara_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "scara_interfaces/action/detail/trajectory_execution__struct.h"
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

namespace scara_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _TrajectoryExecution_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TrajectoryExecution_Result_type_support_ids_t;

static const _TrajectoryExecution_Result_type_support_ids_t _TrajectoryExecution_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TrajectoryExecution_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TrajectoryExecution_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TrajectoryExecution_Result_type_support_symbol_names_t _TrajectoryExecution_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, scara_interfaces, action, TrajectoryExecution_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, scara_interfaces, action, TrajectoryExecution_Result)),
  }
};

typedef struct _TrajectoryExecution_Result_type_support_data_t
{
  void * data[2];
} _TrajectoryExecution_Result_type_support_data_t;

static _TrajectoryExecution_Result_type_support_data_t _TrajectoryExecution_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TrajectoryExecution_Result_message_typesupport_map = {
  2,
  "scara_interfaces",
  &_TrajectoryExecution_Result_message_typesupport_ids.typesupport_identifier[0],
  &_TrajectoryExecution_Result_message_typesupport_symbol_names.symbol_name[0],
  &_TrajectoryExecution_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TrajectoryExecution_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TrajectoryExecution_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace scara_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_scara_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, scara_interfaces, action, TrajectoryExecution_Result)() {
  return &::scara_interfaces::action::rosidl_typesupport_c::TrajectoryExecution_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "scara_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "scara_interfaces/action/detail/trajectory_execution__struct.h"
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

namespace scara_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _TrajectoryExecution_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TrajectoryExecution_Feedback_type_support_ids_t;

static const _TrajectoryExecution_Feedback_type_support_ids_t _TrajectoryExecution_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TrajectoryExecution_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TrajectoryExecution_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TrajectoryExecution_Feedback_type_support_symbol_names_t _TrajectoryExecution_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, scara_interfaces, action, TrajectoryExecution_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, scara_interfaces, action, TrajectoryExecution_Feedback)),
  }
};

typedef struct _TrajectoryExecution_Feedback_type_support_data_t
{
  void * data[2];
} _TrajectoryExecution_Feedback_type_support_data_t;

static _TrajectoryExecution_Feedback_type_support_data_t _TrajectoryExecution_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TrajectoryExecution_Feedback_message_typesupport_map = {
  2,
  "scara_interfaces",
  &_TrajectoryExecution_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_TrajectoryExecution_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_TrajectoryExecution_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TrajectoryExecution_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TrajectoryExecution_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace scara_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_scara_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, scara_interfaces, action, TrajectoryExecution_Feedback)() {
  return &::scara_interfaces::action::rosidl_typesupport_c::TrajectoryExecution_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "scara_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "scara_interfaces/action/detail/trajectory_execution__struct.h"
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

namespace scara_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _TrajectoryExecution_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TrajectoryExecution_SendGoal_Request_type_support_ids_t;

static const _TrajectoryExecution_SendGoal_Request_type_support_ids_t _TrajectoryExecution_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TrajectoryExecution_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TrajectoryExecution_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TrajectoryExecution_SendGoal_Request_type_support_symbol_names_t _TrajectoryExecution_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, scara_interfaces, action, TrajectoryExecution_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, scara_interfaces, action, TrajectoryExecution_SendGoal_Request)),
  }
};

typedef struct _TrajectoryExecution_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _TrajectoryExecution_SendGoal_Request_type_support_data_t;

static _TrajectoryExecution_SendGoal_Request_type_support_data_t _TrajectoryExecution_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TrajectoryExecution_SendGoal_Request_message_typesupport_map = {
  2,
  "scara_interfaces",
  &_TrajectoryExecution_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_TrajectoryExecution_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_TrajectoryExecution_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TrajectoryExecution_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TrajectoryExecution_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace scara_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_scara_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, scara_interfaces, action, TrajectoryExecution_SendGoal_Request)() {
  return &::scara_interfaces::action::rosidl_typesupport_c::TrajectoryExecution_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "scara_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "scara_interfaces/action/detail/trajectory_execution__struct.h"
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

namespace scara_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _TrajectoryExecution_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TrajectoryExecution_SendGoal_Response_type_support_ids_t;

static const _TrajectoryExecution_SendGoal_Response_type_support_ids_t _TrajectoryExecution_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TrajectoryExecution_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TrajectoryExecution_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TrajectoryExecution_SendGoal_Response_type_support_symbol_names_t _TrajectoryExecution_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, scara_interfaces, action, TrajectoryExecution_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, scara_interfaces, action, TrajectoryExecution_SendGoal_Response)),
  }
};

typedef struct _TrajectoryExecution_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _TrajectoryExecution_SendGoal_Response_type_support_data_t;

static _TrajectoryExecution_SendGoal_Response_type_support_data_t _TrajectoryExecution_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TrajectoryExecution_SendGoal_Response_message_typesupport_map = {
  2,
  "scara_interfaces",
  &_TrajectoryExecution_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_TrajectoryExecution_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_TrajectoryExecution_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TrajectoryExecution_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TrajectoryExecution_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace scara_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_scara_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, scara_interfaces, action, TrajectoryExecution_SendGoal_Response)() {
  return &::scara_interfaces::action::rosidl_typesupport_c::TrajectoryExecution_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "scara_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace scara_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _TrajectoryExecution_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TrajectoryExecution_SendGoal_type_support_ids_t;

static const _TrajectoryExecution_SendGoal_type_support_ids_t _TrajectoryExecution_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TrajectoryExecution_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TrajectoryExecution_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TrajectoryExecution_SendGoal_type_support_symbol_names_t _TrajectoryExecution_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, scara_interfaces, action, TrajectoryExecution_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, scara_interfaces, action, TrajectoryExecution_SendGoal)),
  }
};

typedef struct _TrajectoryExecution_SendGoal_type_support_data_t
{
  void * data[2];
} _TrajectoryExecution_SendGoal_type_support_data_t;

static _TrajectoryExecution_SendGoal_type_support_data_t _TrajectoryExecution_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TrajectoryExecution_SendGoal_service_typesupport_map = {
  2,
  "scara_interfaces",
  &_TrajectoryExecution_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_TrajectoryExecution_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_TrajectoryExecution_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t TrajectoryExecution_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TrajectoryExecution_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace scara_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_scara_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, scara_interfaces, action, TrajectoryExecution_SendGoal)() {
  return &::scara_interfaces::action::rosidl_typesupport_c::TrajectoryExecution_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "scara_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "scara_interfaces/action/detail/trajectory_execution__struct.h"
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

namespace scara_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _TrajectoryExecution_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TrajectoryExecution_GetResult_Request_type_support_ids_t;

static const _TrajectoryExecution_GetResult_Request_type_support_ids_t _TrajectoryExecution_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TrajectoryExecution_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TrajectoryExecution_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TrajectoryExecution_GetResult_Request_type_support_symbol_names_t _TrajectoryExecution_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, scara_interfaces, action, TrajectoryExecution_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, scara_interfaces, action, TrajectoryExecution_GetResult_Request)),
  }
};

typedef struct _TrajectoryExecution_GetResult_Request_type_support_data_t
{
  void * data[2];
} _TrajectoryExecution_GetResult_Request_type_support_data_t;

static _TrajectoryExecution_GetResult_Request_type_support_data_t _TrajectoryExecution_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TrajectoryExecution_GetResult_Request_message_typesupport_map = {
  2,
  "scara_interfaces",
  &_TrajectoryExecution_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_TrajectoryExecution_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_TrajectoryExecution_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TrajectoryExecution_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TrajectoryExecution_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace scara_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_scara_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, scara_interfaces, action, TrajectoryExecution_GetResult_Request)() {
  return &::scara_interfaces::action::rosidl_typesupport_c::TrajectoryExecution_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "scara_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "scara_interfaces/action/detail/trajectory_execution__struct.h"
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

namespace scara_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _TrajectoryExecution_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TrajectoryExecution_GetResult_Response_type_support_ids_t;

static const _TrajectoryExecution_GetResult_Response_type_support_ids_t _TrajectoryExecution_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TrajectoryExecution_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TrajectoryExecution_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TrajectoryExecution_GetResult_Response_type_support_symbol_names_t _TrajectoryExecution_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, scara_interfaces, action, TrajectoryExecution_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, scara_interfaces, action, TrajectoryExecution_GetResult_Response)),
  }
};

typedef struct _TrajectoryExecution_GetResult_Response_type_support_data_t
{
  void * data[2];
} _TrajectoryExecution_GetResult_Response_type_support_data_t;

static _TrajectoryExecution_GetResult_Response_type_support_data_t _TrajectoryExecution_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TrajectoryExecution_GetResult_Response_message_typesupport_map = {
  2,
  "scara_interfaces",
  &_TrajectoryExecution_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_TrajectoryExecution_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_TrajectoryExecution_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TrajectoryExecution_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TrajectoryExecution_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace scara_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_scara_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, scara_interfaces, action, TrajectoryExecution_GetResult_Response)() {
  return &::scara_interfaces::action::rosidl_typesupport_c::TrajectoryExecution_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "scara_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace scara_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _TrajectoryExecution_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TrajectoryExecution_GetResult_type_support_ids_t;

static const _TrajectoryExecution_GetResult_type_support_ids_t _TrajectoryExecution_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TrajectoryExecution_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TrajectoryExecution_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TrajectoryExecution_GetResult_type_support_symbol_names_t _TrajectoryExecution_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, scara_interfaces, action, TrajectoryExecution_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, scara_interfaces, action, TrajectoryExecution_GetResult)),
  }
};

typedef struct _TrajectoryExecution_GetResult_type_support_data_t
{
  void * data[2];
} _TrajectoryExecution_GetResult_type_support_data_t;

static _TrajectoryExecution_GetResult_type_support_data_t _TrajectoryExecution_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TrajectoryExecution_GetResult_service_typesupport_map = {
  2,
  "scara_interfaces",
  &_TrajectoryExecution_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_TrajectoryExecution_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_TrajectoryExecution_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t TrajectoryExecution_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TrajectoryExecution_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace scara_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_scara_interfaces
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, scara_interfaces, action, TrajectoryExecution_GetResult)() {
  return &::scara_interfaces::action::rosidl_typesupport_c::TrajectoryExecution_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "scara_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "scara_interfaces/action/detail/trajectory_execution__struct.h"
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

namespace scara_interfaces
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _TrajectoryExecution_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TrajectoryExecution_FeedbackMessage_type_support_ids_t;

static const _TrajectoryExecution_FeedbackMessage_type_support_ids_t _TrajectoryExecution_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TrajectoryExecution_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TrajectoryExecution_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TrajectoryExecution_FeedbackMessage_type_support_symbol_names_t _TrajectoryExecution_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, scara_interfaces, action, TrajectoryExecution_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, scara_interfaces, action, TrajectoryExecution_FeedbackMessage)),
  }
};

typedef struct _TrajectoryExecution_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _TrajectoryExecution_FeedbackMessage_type_support_data_t;

static _TrajectoryExecution_FeedbackMessage_type_support_data_t _TrajectoryExecution_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TrajectoryExecution_FeedbackMessage_message_typesupport_map = {
  2,
  "scara_interfaces",
  &_TrajectoryExecution_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_TrajectoryExecution_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_TrajectoryExecution_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TrajectoryExecution_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TrajectoryExecution_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace scara_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_scara_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, scara_interfaces, action, TrajectoryExecution_FeedbackMessage)() {
  return &::scara_interfaces::action::rosidl_typesupport_c::TrajectoryExecution_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "scara_interfaces/action/trajectory_execution.h"
#include "scara_interfaces/action/detail/trajectory_execution__type_support.h"

static rosidl_action_type_support_t _scara_interfaces__action__TrajectoryExecution__typesupport_c;

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_scara_interfaces
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, scara_interfaces, action, TrajectoryExecution)()
{
  // Thread-safe by always writing the same values to the static struct
  _scara_interfaces__action__TrajectoryExecution__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, scara_interfaces, action, TrajectoryExecution_SendGoal)();
  _scara_interfaces__action__TrajectoryExecution__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, scara_interfaces, action, TrajectoryExecution_GetResult)();
  _scara_interfaces__action__TrajectoryExecution__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _scara_interfaces__action__TrajectoryExecution__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, scara_interfaces, action, TrajectoryExecution_FeedbackMessage)();
  _scara_interfaces__action__TrajectoryExecution__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_scara_interfaces__action__TrajectoryExecution__typesupport_c;
}

#ifdef __cplusplus
}
#endif