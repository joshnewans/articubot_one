// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tf2_web_republisher:action/TFSubscription.idl
// generated code does not contain a copyright notice

#ifndef TF2_WEB_REPUBLISHER__ACTION__DETAIL__TF_SUBSCRIPTION__BUILDER_HPP_
#define TF2_WEB_REPUBLISHER__ACTION__DETAIL__TF_SUBSCRIPTION__BUILDER_HPP_

#include "tf2_web_republisher/action/detail/tf_subscription__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace tf2_web_republisher
{

namespace action
{

namespace builder
{

class Init_TFSubscription_Goal_rate
{
public:
  explicit Init_TFSubscription_Goal_rate(::tf2_web_republisher::action::TFSubscription_Goal & msg)
  : msg_(msg)
  {}
  ::tf2_web_republisher::action::TFSubscription_Goal rate(::tf2_web_republisher::action::TFSubscription_Goal::_rate_type arg)
  {
    msg_.rate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tf2_web_republisher::action::TFSubscription_Goal msg_;
};

class Init_TFSubscription_Goal_trans_thres
{
public:
  explicit Init_TFSubscription_Goal_trans_thres(::tf2_web_republisher::action::TFSubscription_Goal & msg)
  : msg_(msg)
  {}
  Init_TFSubscription_Goal_rate trans_thres(::tf2_web_republisher::action::TFSubscription_Goal::_trans_thres_type arg)
  {
    msg_.trans_thres = std::move(arg);
    return Init_TFSubscription_Goal_rate(msg_);
  }

private:
  ::tf2_web_republisher::action::TFSubscription_Goal msg_;
};

class Init_TFSubscription_Goal_angular_thres
{
public:
  explicit Init_TFSubscription_Goal_angular_thres(::tf2_web_republisher::action::TFSubscription_Goal & msg)
  : msg_(msg)
  {}
  Init_TFSubscription_Goal_trans_thres angular_thres(::tf2_web_republisher::action::TFSubscription_Goal::_angular_thres_type arg)
  {
    msg_.angular_thres = std::move(arg);
    return Init_TFSubscription_Goal_trans_thres(msg_);
  }

private:
  ::tf2_web_republisher::action::TFSubscription_Goal msg_;
};

class Init_TFSubscription_Goal_target_frame
{
public:
  explicit Init_TFSubscription_Goal_target_frame(::tf2_web_republisher::action::TFSubscription_Goal & msg)
  : msg_(msg)
  {}
  Init_TFSubscription_Goal_angular_thres target_frame(::tf2_web_republisher::action::TFSubscription_Goal::_target_frame_type arg)
  {
    msg_.target_frame = std::move(arg);
    return Init_TFSubscription_Goal_angular_thres(msg_);
  }

private:
  ::tf2_web_republisher::action::TFSubscription_Goal msg_;
};

class Init_TFSubscription_Goal_source_frames
{
public:
  Init_TFSubscription_Goal_source_frames()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TFSubscription_Goal_target_frame source_frames(::tf2_web_republisher::action::TFSubscription_Goal::_source_frames_type arg)
  {
    msg_.source_frames = std::move(arg);
    return Init_TFSubscription_Goal_target_frame(msg_);
  }

private:
  ::tf2_web_republisher::action::TFSubscription_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tf2_web_republisher::action::TFSubscription_Goal>()
{
  return tf2_web_republisher::action::builder::Init_TFSubscription_Goal_source_frames();
}

}  // namespace tf2_web_republisher


namespace tf2_web_republisher
{

namespace action
{


}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tf2_web_republisher::action::TFSubscription_Result>()
{
  return ::tf2_web_republisher::action::TFSubscription_Result(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace tf2_web_republisher


namespace tf2_web_republisher
{

namespace action
{

namespace builder
{

class Init_TFSubscription_Feedback_transforms
{
public:
  Init_TFSubscription_Feedback_transforms()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tf2_web_republisher::action::TFSubscription_Feedback transforms(::tf2_web_republisher::action::TFSubscription_Feedback::_transforms_type arg)
  {
    msg_.transforms = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tf2_web_republisher::action::TFSubscription_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tf2_web_republisher::action::TFSubscription_Feedback>()
{
  return tf2_web_republisher::action::builder::Init_TFSubscription_Feedback_transforms();
}

}  // namespace tf2_web_republisher


namespace tf2_web_republisher
{

namespace action
{

namespace builder
{

class Init_TFSubscription_SendGoal_Request_goal
{
public:
  explicit Init_TFSubscription_SendGoal_Request_goal(::tf2_web_republisher::action::TFSubscription_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::tf2_web_republisher::action::TFSubscription_SendGoal_Request goal(::tf2_web_republisher::action::TFSubscription_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tf2_web_republisher::action::TFSubscription_SendGoal_Request msg_;
};

class Init_TFSubscription_SendGoal_Request_goal_id
{
public:
  Init_TFSubscription_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TFSubscription_SendGoal_Request_goal goal_id(::tf2_web_republisher::action::TFSubscription_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_TFSubscription_SendGoal_Request_goal(msg_);
  }

private:
  ::tf2_web_republisher::action::TFSubscription_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tf2_web_republisher::action::TFSubscription_SendGoal_Request>()
{
  return tf2_web_republisher::action::builder::Init_TFSubscription_SendGoal_Request_goal_id();
}

}  // namespace tf2_web_republisher


namespace tf2_web_republisher
{

namespace action
{

namespace builder
{

class Init_TFSubscription_SendGoal_Response_stamp
{
public:
  explicit Init_TFSubscription_SendGoal_Response_stamp(::tf2_web_republisher::action::TFSubscription_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::tf2_web_republisher::action::TFSubscription_SendGoal_Response stamp(::tf2_web_republisher::action::TFSubscription_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tf2_web_republisher::action::TFSubscription_SendGoal_Response msg_;
};

class Init_TFSubscription_SendGoal_Response_accepted
{
public:
  Init_TFSubscription_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TFSubscription_SendGoal_Response_stamp accepted(::tf2_web_republisher::action::TFSubscription_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_TFSubscription_SendGoal_Response_stamp(msg_);
  }

private:
  ::tf2_web_republisher::action::TFSubscription_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tf2_web_republisher::action::TFSubscription_SendGoal_Response>()
{
  return tf2_web_republisher::action::builder::Init_TFSubscription_SendGoal_Response_accepted();
}

}  // namespace tf2_web_republisher


namespace tf2_web_republisher
{

namespace action
{

namespace builder
{

class Init_TFSubscription_GetResult_Request_goal_id
{
public:
  Init_TFSubscription_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tf2_web_republisher::action::TFSubscription_GetResult_Request goal_id(::tf2_web_republisher::action::TFSubscription_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tf2_web_republisher::action::TFSubscription_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tf2_web_republisher::action::TFSubscription_GetResult_Request>()
{
  return tf2_web_republisher::action::builder::Init_TFSubscription_GetResult_Request_goal_id();
}

}  // namespace tf2_web_republisher


namespace tf2_web_republisher
{

namespace action
{

namespace builder
{

class Init_TFSubscription_GetResult_Response_result
{
public:
  explicit Init_TFSubscription_GetResult_Response_result(::tf2_web_republisher::action::TFSubscription_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::tf2_web_republisher::action::TFSubscription_GetResult_Response result(::tf2_web_republisher::action::TFSubscription_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tf2_web_republisher::action::TFSubscription_GetResult_Response msg_;
};

class Init_TFSubscription_GetResult_Response_status
{
public:
  Init_TFSubscription_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TFSubscription_GetResult_Response_result status(::tf2_web_republisher::action::TFSubscription_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_TFSubscription_GetResult_Response_result(msg_);
  }

private:
  ::tf2_web_republisher::action::TFSubscription_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tf2_web_republisher::action::TFSubscription_GetResult_Response>()
{
  return tf2_web_republisher::action::builder::Init_TFSubscription_GetResult_Response_status();
}

}  // namespace tf2_web_republisher


namespace tf2_web_republisher
{

namespace action
{

namespace builder
{

class Init_TFSubscription_FeedbackMessage_feedback
{
public:
  explicit Init_TFSubscription_FeedbackMessage_feedback(::tf2_web_republisher::action::TFSubscription_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::tf2_web_republisher::action::TFSubscription_FeedbackMessage feedback(::tf2_web_republisher::action::TFSubscription_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tf2_web_republisher::action::TFSubscription_FeedbackMessage msg_;
};

class Init_TFSubscription_FeedbackMessage_goal_id
{
public:
  Init_TFSubscription_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TFSubscription_FeedbackMessage_feedback goal_id(::tf2_web_republisher::action::TFSubscription_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_TFSubscription_FeedbackMessage_feedback(msg_);
  }

private:
  ::tf2_web_republisher::action::TFSubscription_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::tf2_web_republisher::action::TFSubscription_FeedbackMessage>()
{
  return tf2_web_republisher::action::builder::Init_TFSubscription_FeedbackMessage_goal_id();
}

}  // namespace tf2_web_republisher

#endif  // TF2_WEB_REPUBLISHER__ACTION__DETAIL__TF_SUBSCRIPTION__BUILDER_HPP_
