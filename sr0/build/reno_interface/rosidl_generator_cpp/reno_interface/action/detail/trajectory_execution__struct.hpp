// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from reno_interface:action/TrajectoryExecution.idl
// generated code does not contain a copyright notice

#ifndef RENO_INTERFACE__ACTION__DETAIL__TRAJECTORY_EXECUTION__STRUCT_HPP_
#define RENO_INTERFACE__ACTION__DETAIL__TRAJECTORY_EXECUTION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'trajectory'
#include "trajectory_msgs/msg/detail/joint_trajectory__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__reno_interface__action__TrajectoryExecution_Goal __attribute__((deprecated))
#else
# define DEPRECATED__reno_interface__action__TrajectoryExecution_Goal __declspec(deprecated)
#endif

namespace reno_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TrajectoryExecution_Goal_
{
  using Type = TrajectoryExecution_Goal_<ContainerAllocator>;

  explicit TrajectoryExecution_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : trajectory(_init)
  {
    (void)_init;
  }

  explicit TrajectoryExecution_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : trajectory(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _trajectory_type =
    trajectory_msgs::msg::JointTrajectory_<ContainerAllocator>;
  _trajectory_type trajectory;

  // setters for named parameter idiom
  Type & set__trajectory(
    const trajectory_msgs::msg::JointTrajectory_<ContainerAllocator> & _arg)
  {
    this->trajectory = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    reno_interface::action::TrajectoryExecution_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const reno_interface::action::TrajectoryExecution_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<reno_interface::action::TrajectoryExecution_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<reno_interface::action::TrajectoryExecution_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      reno_interface::action::TrajectoryExecution_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<reno_interface::action::TrajectoryExecution_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      reno_interface::action::TrajectoryExecution_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<reno_interface::action::TrajectoryExecution_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<reno_interface::action::TrajectoryExecution_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<reno_interface::action::TrajectoryExecution_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__reno_interface__action__TrajectoryExecution_Goal
    std::shared_ptr<reno_interface::action::TrajectoryExecution_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__reno_interface__action__TrajectoryExecution_Goal
    std::shared_ptr<reno_interface::action::TrajectoryExecution_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrajectoryExecution_Goal_ & other) const
  {
    if (this->trajectory != other.trajectory) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrajectoryExecution_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrajectoryExecution_Goal_

// alias to use template instance with default allocator
using TrajectoryExecution_Goal =
  reno_interface::action::TrajectoryExecution_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace reno_interface


// Include directives for member types
// Member 'final_point'
#include "trajectory_msgs/msg/detail/joint_trajectory_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__reno_interface__action__TrajectoryExecution_Result __attribute__((deprecated))
#else
# define DEPRECATED__reno_interface__action__TrajectoryExecution_Result __declspec(deprecated)
#endif

namespace reno_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TrajectoryExecution_Result_
{
  using Type = TrajectoryExecution_Result_<ContainerAllocator>;

  explicit TrajectoryExecution_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : final_point(_init)
  {
    (void)_init;
  }

  explicit TrajectoryExecution_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : final_point(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _final_point_type =
    trajectory_msgs::msg::JointTrajectoryPoint_<ContainerAllocator>;
  _final_point_type final_point;

  // setters for named parameter idiom
  Type & set__final_point(
    const trajectory_msgs::msg::JointTrajectoryPoint_<ContainerAllocator> & _arg)
  {
    this->final_point = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    reno_interface::action::TrajectoryExecution_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const reno_interface::action::TrajectoryExecution_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<reno_interface::action::TrajectoryExecution_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<reno_interface::action::TrajectoryExecution_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      reno_interface::action::TrajectoryExecution_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<reno_interface::action::TrajectoryExecution_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      reno_interface::action::TrajectoryExecution_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<reno_interface::action::TrajectoryExecution_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<reno_interface::action::TrajectoryExecution_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<reno_interface::action::TrajectoryExecution_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__reno_interface__action__TrajectoryExecution_Result
    std::shared_ptr<reno_interface::action::TrajectoryExecution_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__reno_interface__action__TrajectoryExecution_Result
    std::shared_ptr<reno_interface::action::TrajectoryExecution_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrajectoryExecution_Result_ & other) const
  {
    if (this->final_point != other.final_point) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrajectoryExecution_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrajectoryExecution_Result_

// alias to use template instance with default allocator
using TrajectoryExecution_Result =
  reno_interface::action::TrajectoryExecution_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace reno_interface


// Include directives for member types
// Member 'actual_point'
// already included above
// #include "trajectory_msgs/msg/detail/joint_trajectory_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__reno_interface__action__TrajectoryExecution_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__reno_interface__action__TrajectoryExecution_Feedback __declspec(deprecated)
#endif

namespace reno_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TrajectoryExecution_Feedback_
{
  using Type = TrajectoryExecution_Feedback_<ContainerAllocator>;

  explicit TrajectoryExecution_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : actual_point(_init)
  {
    (void)_init;
  }

  explicit TrajectoryExecution_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : actual_point(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _actual_point_type =
    trajectory_msgs::msg::JointTrajectoryPoint_<ContainerAllocator>;
  _actual_point_type actual_point;

  // setters for named parameter idiom
  Type & set__actual_point(
    const trajectory_msgs::msg::JointTrajectoryPoint_<ContainerAllocator> & _arg)
  {
    this->actual_point = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    reno_interface::action::TrajectoryExecution_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const reno_interface::action::TrajectoryExecution_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<reno_interface::action::TrajectoryExecution_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<reno_interface::action::TrajectoryExecution_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      reno_interface::action::TrajectoryExecution_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<reno_interface::action::TrajectoryExecution_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      reno_interface::action::TrajectoryExecution_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<reno_interface::action::TrajectoryExecution_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<reno_interface::action::TrajectoryExecution_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<reno_interface::action::TrajectoryExecution_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__reno_interface__action__TrajectoryExecution_Feedback
    std::shared_ptr<reno_interface::action::TrajectoryExecution_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__reno_interface__action__TrajectoryExecution_Feedback
    std::shared_ptr<reno_interface::action::TrajectoryExecution_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrajectoryExecution_Feedback_ & other) const
  {
    if (this->actual_point != other.actual_point) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrajectoryExecution_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrajectoryExecution_Feedback_

// alias to use template instance with default allocator
using TrajectoryExecution_Feedback =
  reno_interface::action::TrajectoryExecution_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace reno_interface


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "reno_interface/action/detail/trajectory_execution__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__reno_interface__action__TrajectoryExecution_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__reno_interface__action__TrajectoryExecution_SendGoal_Request __declspec(deprecated)
#endif

namespace reno_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TrajectoryExecution_SendGoal_Request_
{
  using Type = TrajectoryExecution_SendGoal_Request_<ContainerAllocator>;

  explicit TrajectoryExecution_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit TrajectoryExecution_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    reno_interface::action::TrajectoryExecution_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const reno_interface::action::TrajectoryExecution_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    reno_interface::action::TrajectoryExecution_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const reno_interface::action::TrajectoryExecution_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<reno_interface::action::TrajectoryExecution_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<reno_interface::action::TrajectoryExecution_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      reno_interface::action::TrajectoryExecution_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<reno_interface::action::TrajectoryExecution_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      reno_interface::action::TrajectoryExecution_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<reno_interface::action::TrajectoryExecution_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<reno_interface::action::TrajectoryExecution_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<reno_interface::action::TrajectoryExecution_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__reno_interface__action__TrajectoryExecution_SendGoal_Request
    std::shared_ptr<reno_interface::action::TrajectoryExecution_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__reno_interface__action__TrajectoryExecution_SendGoal_Request
    std::shared_ptr<reno_interface::action::TrajectoryExecution_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrajectoryExecution_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrajectoryExecution_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrajectoryExecution_SendGoal_Request_

// alias to use template instance with default allocator
using TrajectoryExecution_SendGoal_Request =
  reno_interface::action::TrajectoryExecution_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace reno_interface


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__reno_interface__action__TrajectoryExecution_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__reno_interface__action__TrajectoryExecution_SendGoal_Response __declspec(deprecated)
#endif

namespace reno_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TrajectoryExecution_SendGoal_Response_
{
  using Type = TrajectoryExecution_SendGoal_Response_<ContainerAllocator>;

  explicit TrajectoryExecution_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit TrajectoryExecution_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    reno_interface::action::TrajectoryExecution_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const reno_interface::action::TrajectoryExecution_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<reno_interface::action::TrajectoryExecution_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<reno_interface::action::TrajectoryExecution_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      reno_interface::action::TrajectoryExecution_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<reno_interface::action::TrajectoryExecution_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      reno_interface::action::TrajectoryExecution_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<reno_interface::action::TrajectoryExecution_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<reno_interface::action::TrajectoryExecution_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<reno_interface::action::TrajectoryExecution_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__reno_interface__action__TrajectoryExecution_SendGoal_Response
    std::shared_ptr<reno_interface::action::TrajectoryExecution_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__reno_interface__action__TrajectoryExecution_SendGoal_Response
    std::shared_ptr<reno_interface::action::TrajectoryExecution_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrajectoryExecution_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrajectoryExecution_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrajectoryExecution_SendGoal_Response_

// alias to use template instance with default allocator
using TrajectoryExecution_SendGoal_Response =
  reno_interface::action::TrajectoryExecution_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace reno_interface

namespace reno_interface
{

namespace action
{

struct TrajectoryExecution_SendGoal
{
  using Request = reno_interface::action::TrajectoryExecution_SendGoal_Request;
  using Response = reno_interface::action::TrajectoryExecution_SendGoal_Response;
};

}  // namespace action

}  // namespace reno_interface


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__reno_interface__action__TrajectoryExecution_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__reno_interface__action__TrajectoryExecution_GetResult_Request __declspec(deprecated)
#endif

namespace reno_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TrajectoryExecution_GetResult_Request_
{
  using Type = TrajectoryExecution_GetResult_Request_<ContainerAllocator>;

  explicit TrajectoryExecution_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit TrajectoryExecution_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    reno_interface::action::TrajectoryExecution_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const reno_interface::action::TrajectoryExecution_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<reno_interface::action::TrajectoryExecution_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<reno_interface::action::TrajectoryExecution_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      reno_interface::action::TrajectoryExecution_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<reno_interface::action::TrajectoryExecution_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      reno_interface::action::TrajectoryExecution_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<reno_interface::action::TrajectoryExecution_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<reno_interface::action::TrajectoryExecution_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<reno_interface::action::TrajectoryExecution_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__reno_interface__action__TrajectoryExecution_GetResult_Request
    std::shared_ptr<reno_interface::action::TrajectoryExecution_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__reno_interface__action__TrajectoryExecution_GetResult_Request
    std::shared_ptr<reno_interface::action::TrajectoryExecution_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrajectoryExecution_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrajectoryExecution_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrajectoryExecution_GetResult_Request_

// alias to use template instance with default allocator
using TrajectoryExecution_GetResult_Request =
  reno_interface::action::TrajectoryExecution_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace reno_interface


// Include directives for member types
// Member 'result'
// already included above
// #include "reno_interface/action/detail/trajectory_execution__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__reno_interface__action__TrajectoryExecution_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__reno_interface__action__TrajectoryExecution_GetResult_Response __declspec(deprecated)
#endif

namespace reno_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TrajectoryExecution_GetResult_Response_
{
  using Type = TrajectoryExecution_GetResult_Response_<ContainerAllocator>;

  explicit TrajectoryExecution_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit TrajectoryExecution_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    reno_interface::action::TrajectoryExecution_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const reno_interface::action::TrajectoryExecution_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    reno_interface::action::TrajectoryExecution_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const reno_interface::action::TrajectoryExecution_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<reno_interface::action::TrajectoryExecution_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<reno_interface::action::TrajectoryExecution_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      reno_interface::action::TrajectoryExecution_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<reno_interface::action::TrajectoryExecution_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      reno_interface::action::TrajectoryExecution_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<reno_interface::action::TrajectoryExecution_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<reno_interface::action::TrajectoryExecution_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<reno_interface::action::TrajectoryExecution_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__reno_interface__action__TrajectoryExecution_GetResult_Response
    std::shared_ptr<reno_interface::action::TrajectoryExecution_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__reno_interface__action__TrajectoryExecution_GetResult_Response
    std::shared_ptr<reno_interface::action::TrajectoryExecution_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrajectoryExecution_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrajectoryExecution_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrajectoryExecution_GetResult_Response_

// alias to use template instance with default allocator
using TrajectoryExecution_GetResult_Response =
  reno_interface::action::TrajectoryExecution_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace reno_interface

namespace reno_interface
{

namespace action
{

struct TrajectoryExecution_GetResult
{
  using Request = reno_interface::action::TrajectoryExecution_GetResult_Request;
  using Response = reno_interface::action::TrajectoryExecution_GetResult_Response;
};

}  // namespace action

}  // namespace reno_interface


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "reno_interface/action/detail/trajectory_execution__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__reno_interface__action__TrajectoryExecution_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__reno_interface__action__TrajectoryExecution_FeedbackMessage __declspec(deprecated)
#endif

namespace reno_interface
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct TrajectoryExecution_FeedbackMessage_
{
  using Type = TrajectoryExecution_FeedbackMessage_<ContainerAllocator>;

  explicit TrajectoryExecution_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit TrajectoryExecution_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    reno_interface::action::TrajectoryExecution_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const reno_interface::action::TrajectoryExecution_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    reno_interface::action::TrajectoryExecution_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const reno_interface::action::TrajectoryExecution_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<reno_interface::action::TrajectoryExecution_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<reno_interface::action::TrajectoryExecution_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      reno_interface::action::TrajectoryExecution_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<reno_interface::action::TrajectoryExecution_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      reno_interface::action::TrajectoryExecution_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<reno_interface::action::TrajectoryExecution_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<reno_interface::action::TrajectoryExecution_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<reno_interface::action::TrajectoryExecution_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__reno_interface__action__TrajectoryExecution_FeedbackMessage
    std::shared_ptr<reno_interface::action::TrajectoryExecution_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__reno_interface__action__TrajectoryExecution_FeedbackMessage
    std::shared_ptr<reno_interface::action::TrajectoryExecution_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrajectoryExecution_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrajectoryExecution_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrajectoryExecution_FeedbackMessage_

// alias to use template instance with default allocator
using TrajectoryExecution_FeedbackMessage =
  reno_interface::action::TrajectoryExecution_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace reno_interface

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace reno_interface
{

namespace action
{

struct TrajectoryExecution
{
  /// The goal message defined in the action definition.
  using Goal = reno_interface::action::TrajectoryExecution_Goal;
  /// The result message defined in the action definition.
  using Result = reno_interface::action::TrajectoryExecution_Result;
  /// The feedback message defined in the action definition.
  using Feedback = reno_interface::action::TrajectoryExecution_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = reno_interface::action::TrajectoryExecution_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = reno_interface::action::TrajectoryExecution_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = reno_interface::action::TrajectoryExecution_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct TrajectoryExecution TrajectoryExecution;

}  // namespace action

}  // namespace reno_interface

#endif  // RENO_INTERFACE__ACTION__DETAIL__TRAJECTORY_EXECUTION__STRUCT_HPP_