// Copyright 2023 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/pubsub/v1/pubsub.proto

#include "google/cloud/pubsub/admin/internal/topic_admin_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace pubsub_admin_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

TopicAdminTracingStub::TopicAdminTracingStub(
    std::shared_ptr<TopicAdminStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::pubsub::v1::Topic> TopicAdminTracingStub::CreateTopic(
    grpc::ClientContext& context, Options const& options,
    google::pubsub::v1::Topic const& request) {
  auto span =
      internal::MakeSpanGrpc("google.pubsub.v1.Publisher", "CreateTopic");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateTopic(context, options, request));
}

StatusOr<google::pubsub::v1::Topic> TopicAdminTracingStub::UpdateTopic(
    grpc::ClientContext& context, Options const& options,
    google::pubsub::v1::UpdateTopicRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.pubsub.v1.Publisher", "UpdateTopic");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateTopic(context, options, request));
}

StatusOr<google::pubsub::v1::Topic> TopicAdminTracingStub::GetTopic(
    grpc::ClientContext& context, Options const& options,
    google::pubsub::v1::GetTopicRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.pubsub.v1.Publisher", "GetTopic");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetTopic(context, options, request));
}

StatusOr<google::pubsub::v1::ListTopicsResponse>
TopicAdminTracingStub::ListTopics(
    grpc::ClientContext& context, Options const& options,
    google::pubsub::v1::ListTopicsRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.pubsub.v1.Publisher", "ListTopics");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListTopics(context, options, request));
}

StatusOr<google::pubsub::v1::ListTopicSubscriptionsResponse>
TopicAdminTracingStub::ListTopicSubscriptions(
    grpc::ClientContext& context, Options const& options,
    google::pubsub::v1::ListTopicSubscriptionsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.pubsub.v1.Publisher",
                                     "ListTopicSubscriptions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->ListTopicSubscriptions(context, options, request));
}

StatusOr<google::pubsub::v1::ListTopicSnapshotsResponse>
TopicAdminTracingStub::ListTopicSnapshots(
    grpc::ClientContext& context, Options const& options,
    google::pubsub::v1::ListTopicSnapshotsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.pubsub.v1.Publisher",
                                     "ListTopicSnapshots");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->ListTopicSnapshots(context, options, request));
}

Status TopicAdminTracingStub::DeleteTopic(
    grpc::ClientContext& context, Options const& options,
    google::pubsub::v1::DeleteTopicRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.pubsub.v1.Publisher", "DeleteTopic");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteTopic(context, options, request));
}

StatusOr<google::pubsub::v1::DetachSubscriptionResponse>
TopicAdminTracingStub::DetachSubscription(
    grpc::ClientContext& context, Options const& options,
    google::pubsub::v1::DetachSubscriptionRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.pubsub.v1.Publisher",
                                     "DetachSubscription");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->DetachSubscription(context, options, request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<TopicAdminStub> MakeTopicAdminTracingStub(
    std::shared_ptr<TopicAdminStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<TopicAdminTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace pubsub_admin_internal
}  // namespace cloud
}  // namespace google
