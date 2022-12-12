// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from custom_interfaces0:action/Myaction.idl
// generated code does not contain a copyright notice

#ifndef CUSTOM_INTERFACES0__ACTION__DETAIL__MYACTION__BUILDER_HPP_
#define CUSTOM_INTERFACES0__ACTION__DETAIL__MYACTION__BUILDER_HPP_

#include "custom_interfaces0/action/detail/myaction__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace custom_interfaces0
{

namespace action
{

namespace builder
{

class Init_Myaction_Goal_goal_position
{
public:
  Init_Myaction_Goal_goal_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interfaces0::action::Myaction_Goal goal_position(::custom_interfaces0::action::Myaction_Goal::_goal_position_type arg)
  {
    msg_.goal_position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces0::action::Myaction_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces0::action::Myaction_Goal>()
{
  return custom_interfaces0::action::builder::Init_Myaction_Goal_goal_position();
}

}  // namespace custom_interfaces0


namespace custom_interfaces0
{

namespace action
{

namespace builder
{

class Init_Myaction_Result_result_position
{
public:
  Init_Myaction_Result_result_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interfaces0::action::Myaction_Result result_position(::custom_interfaces0::action::Myaction_Result::_result_position_type arg)
  {
    msg_.result_position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces0::action::Myaction_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces0::action::Myaction_Result>()
{
  return custom_interfaces0::action::builder::Init_Myaction_Result_result_position();
}

}  // namespace custom_interfaces0


namespace custom_interfaces0
{

namespace action
{

namespace builder
{

class Init_Myaction_Feedback_current_position
{
public:
  Init_Myaction_Feedback_current_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interfaces0::action::Myaction_Feedback current_position(::custom_interfaces0::action::Myaction_Feedback::_current_position_type arg)
  {
    msg_.current_position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces0::action::Myaction_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces0::action::Myaction_Feedback>()
{
  return custom_interfaces0::action::builder::Init_Myaction_Feedback_current_position();
}

}  // namespace custom_interfaces0


namespace custom_interfaces0
{

namespace action
{

namespace builder
{

class Init_Myaction_SendGoal_Request_goal
{
public:
  explicit Init_Myaction_SendGoal_Request_goal(::custom_interfaces0::action::Myaction_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::custom_interfaces0::action::Myaction_SendGoal_Request goal(::custom_interfaces0::action::Myaction_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces0::action::Myaction_SendGoal_Request msg_;
};

class Init_Myaction_SendGoal_Request_goal_id
{
public:
  Init_Myaction_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Myaction_SendGoal_Request_goal goal_id(::custom_interfaces0::action::Myaction_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Myaction_SendGoal_Request_goal(msg_);
  }

private:
  ::custom_interfaces0::action::Myaction_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces0::action::Myaction_SendGoal_Request>()
{
  return custom_interfaces0::action::builder::Init_Myaction_SendGoal_Request_goal_id();
}

}  // namespace custom_interfaces0


namespace custom_interfaces0
{

namespace action
{

namespace builder
{

class Init_Myaction_SendGoal_Response_stamp
{
public:
  explicit Init_Myaction_SendGoal_Response_stamp(::custom_interfaces0::action::Myaction_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::custom_interfaces0::action::Myaction_SendGoal_Response stamp(::custom_interfaces0::action::Myaction_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces0::action::Myaction_SendGoal_Response msg_;
};

class Init_Myaction_SendGoal_Response_accepted
{
public:
  Init_Myaction_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Myaction_SendGoal_Response_stamp accepted(::custom_interfaces0::action::Myaction_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Myaction_SendGoal_Response_stamp(msg_);
  }

private:
  ::custom_interfaces0::action::Myaction_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces0::action::Myaction_SendGoal_Response>()
{
  return custom_interfaces0::action::builder::Init_Myaction_SendGoal_Response_accepted();
}

}  // namespace custom_interfaces0


namespace custom_interfaces0
{

namespace action
{

namespace builder
{

class Init_Myaction_GetResult_Request_goal_id
{
public:
  Init_Myaction_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::custom_interfaces0::action::Myaction_GetResult_Request goal_id(::custom_interfaces0::action::Myaction_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces0::action::Myaction_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces0::action::Myaction_GetResult_Request>()
{
  return custom_interfaces0::action::builder::Init_Myaction_GetResult_Request_goal_id();
}

}  // namespace custom_interfaces0


namespace custom_interfaces0
{

namespace action
{

namespace builder
{

class Init_Myaction_GetResult_Response_result
{
public:
  explicit Init_Myaction_GetResult_Response_result(::custom_interfaces0::action::Myaction_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::custom_interfaces0::action::Myaction_GetResult_Response result(::custom_interfaces0::action::Myaction_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces0::action::Myaction_GetResult_Response msg_;
};

class Init_Myaction_GetResult_Response_status
{
public:
  Init_Myaction_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Myaction_GetResult_Response_result status(::custom_interfaces0::action::Myaction_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Myaction_GetResult_Response_result(msg_);
  }

private:
  ::custom_interfaces0::action::Myaction_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces0::action::Myaction_GetResult_Response>()
{
  return custom_interfaces0::action::builder::Init_Myaction_GetResult_Response_status();
}

}  // namespace custom_interfaces0


namespace custom_interfaces0
{

namespace action
{

namespace builder
{

class Init_Myaction_FeedbackMessage_feedback
{
public:
  explicit Init_Myaction_FeedbackMessage_feedback(::custom_interfaces0::action::Myaction_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::custom_interfaces0::action::Myaction_FeedbackMessage feedback(::custom_interfaces0::action::Myaction_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::custom_interfaces0::action::Myaction_FeedbackMessage msg_;
};

class Init_Myaction_FeedbackMessage_goal_id
{
public:
  Init_Myaction_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Myaction_FeedbackMessage_feedback goal_id(::custom_interfaces0::action::Myaction_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Myaction_FeedbackMessage_feedback(msg_);
  }

private:
  ::custom_interfaces0::action::Myaction_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::custom_interfaces0::action::Myaction_FeedbackMessage>()
{
  return custom_interfaces0::action::builder::Init_Myaction_FeedbackMessage_goal_id();
}

}  // namespace custom_interfaces0

#endif  // CUSTOM_INTERFACES0__ACTION__DETAIL__MYACTION__BUILDER_HPP_