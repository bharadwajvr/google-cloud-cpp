// Copyright 2022 Google LLC
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
// source: google/cloud/video/livestream/v1/service.proto

#include "google/cloud/video/livestream/v1/internal/livestream_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <utility>

namespace google {
namespace cloud {
namespace video_livestream_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

LivestreamServiceTracingStub::LivestreamServiceTracingStub(
    std::shared_ptr<LivestreamServiceStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

future<StatusOr<google::longrunning::Operation>>
LivestreamServiceTracingStub::AsyncCreateChannel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::video::livestream::v1::CreateChannelRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.livestream.v1.LivestreamService", "CreateChannel");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateChannel(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
LivestreamServiceTracingStub::CreateChannel(
    grpc::ClientContext& context, Options options,
    google::cloud::video::livestream::v1::CreateChannelRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.livestream.v1.LivestreamService", "CreateChannel");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateChannel(context, options, request));
}

StatusOr<google::cloud::video::livestream::v1::ListChannelsResponse>
LivestreamServiceTracingStub::ListChannels(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::livestream::v1::ListChannelsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.livestream.v1.LivestreamService", "ListChannels");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListChannels(context, options, request));
}

StatusOr<google::cloud::video::livestream::v1::Channel>
LivestreamServiceTracingStub::GetChannel(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::livestream::v1::GetChannelRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.livestream.v1.LivestreamService", "GetChannel");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetChannel(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
LivestreamServiceTracingStub::AsyncDeleteChannel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::video::livestream::v1::DeleteChannelRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.livestream.v1.LivestreamService", "DeleteChannel");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteChannel(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
LivestreamServiceTracingStub::DeleteChannel(
    grpc::ClientContext& context, Options options,
    google::cloud::video::livestream::v1::DeleteChannelRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.livestream.v1.LivestreamService", "DeleteChannel");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteChannel(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
LivestreamServiceTracingStub::AsyncUpdateChannel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::video::livestream::v1::UpdateChannelRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.livestream.v1.LivestreamService", "UpdateChannel");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateChannel(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
LivestreamServiceTracingStub::UpdateChannel(
    grpc::ClientContext& context, Options options,
    google::cloud::video::livestream::v1::UpdateChannelRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.livestream.v1.LivestreamService", "UpdateChannel");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateChannel(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
LivestreamServiceTracingStub::AsyncStartChannel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::video::livestream::v1::StartChannelRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.livestream.v1.LivestreamService", "StartChannel");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncStartChannel(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
LivestreamServiceTracingStub::StartChannel(
    grpc::ClientContext& context, Options options,
    google::cloud::video::livestream::v1::StartChannelRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.livestream.v1.LivestreamService", "StartChannel");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->StartChannel(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
LivestreamServiceTracingStub::AsyncStopChannel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::video::livestream::v1::StopChannelRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.livestream.v1.LivestreamService", "StopChannel");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncStopChannel(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
LivestreamServiceTracingStub::StopChannel(
    grpc::ClientContext& context, Options options,
    google::cloud::video::livestream::v1::StopChannelRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.livestream.v1.LivestreamService", "StopChannel");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->StopChannel(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
LivestreamServiceTracingStub::AsyncCreateInput(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::video::livestream::v1::CreateInputRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.livestream.v1.LivestreamService", "CreateInput");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateInput(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
LivestreamServiceTracingStub::CreateInput(
    grpc::ClientContext& context, Options options,
    google::cloud::video::livestream::v1::CreateInputRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.livestream.v1.LivestreamService", "CreateInput");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateInput(context, options, request));
}

StatusOr<google::cloud::video::livestream::v1::ListInputsResponse>
LivestreamServiceTracingStub::ListInputs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::livestream::v1::ListInputsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.livestream.v1.LivestreamService", "ListInputs");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListInputs(context, options, request));
}

StatusOr<google::cloud::video::livestream::v1::Input>
LivestreamServiceTracingStub::GetInput(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::livestream::v1::GetInputRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.livestream.v1.LivestreamService", "GetInput");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetInput(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
LivestreamServiceTracingStub::AsyncDeleteInput(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::video::livestream::v1::DeleteInputRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.livestream.v1.LivestreamService", "DeleteInput");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteInput(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
LivestreamServiceTracingStub::DeleteInput(
    grpc::ClientContext& context, Options options,
    google::cloud::video::livestream::v1::DeleteInputRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.livestream.v1.LivestreamService", "DeleteInput");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteInput(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
LivestreamServiceTracingStub::AsyncUpdateInput(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::video::livestream::v1::UpdateInputRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.livestream.v1.LivestreamService", "UpdateInput");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateInput(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
LivestreamServiceTracingStub::UpdateInput(
    grpc::ClientContext& context, Options options,
    google::cloud::video::livestream::v1::UpdateInputRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.livestream.v1.LivestreamService", "UpdateInput");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateInput(context, options, request));
}

StatusOr<google::cloud::video::livestream::v1::Event>
LivestreamServiceTracingStub::CreateEvent(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::livestream::v1::CreateEventRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.livestream.v1.LivestreamService", "CreateEvent");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateEvent(context, options, request));
}

StatusOr<google::cloud::video::livestream::v1::ListEventsResponse>
LivestreamServiceTracingStub::ListEvents(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::livestream::v1::ListEventsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.livestream.v1.LivestreamService", "ListEvents");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListEvents(context, options, request));
}

StatusOr<google::cloud::video::livestream::v1::Event>
LivestreamServiceTracingStub::GetEvent(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::livestream::v1::GetEventRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.livestream.v1.LivestreamService", "GetEvent");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetEvent(context, options, request));
}

Status LivestreamServiceTracingStub::DeleteEvent(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::livestream::v1::DeleteEventRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.livestream.v1.LivestreamService", "DeleteEvent");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteEvent(context, options, request));
}

StatusOr<google::cloud::video::livestream::v1::ListClipsResponse>
LivestreamServiceTracingStub::ListClips(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::livestream::v1::ListClipsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.livestream.v1.LivestreamService", "ListClips");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListClips(context, options, request));
}

StatusOr<google::cloud::video::livestream::v1::Clip>
LivestreamServiceTracingStub::GetClip(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::livestream::v1::GetClipRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.livestream.v1.LivestreamService", "GetClip");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetClip(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
LivestreamServiceTracingStub::AsyncCreateClip(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::video::livestream::v1::CreateClipRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.livestream.v1.LivestreamService", "CreateClip");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateClip(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
LivestreamServiceTracingStub::CreateClip(
    grpc::ClientContext& context, Options options,
    google::cloud::video::livestream::v1::CreateClipRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.livestream.v1.LivestreamService", "CreateClip");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateClip(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
LivestreamServiceTracingStub::AsyncDeleteClip(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::video::livestream::v1::DeleteClipRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.livestream.v1.LivestreamService", "DeleteClip");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteClip(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
LivestreamServiceTracingStub::DeleteClip(
    grpc::ClientContext& context, Options options,
    google::cloud::video::livestream::v1::DeleteClipRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.livestream.v1.LivestreamService", "DeleteClip");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteClip(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
LivestreamServiceTracingStub::AsyncCreateAsset(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::video::livestream::v1::CreateAssetRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.livestream.v1.LivestreamService", "CreateAsset");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateAsset(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
LivestreamServiceTracingStub::CreateAsset(
    grpc::ClientContext& context, Options options,
    google::cloud::video::livestream::v1::CreateAssetRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.livestream.v1.LivestreamService", "CreateAsset");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateAsset(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
LivestreamServiceTracingStub::AsyncDeleteAsset(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::video::livestream::v1::DeleteAssetRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.livestream.v1.LivestreamService", "DeleteAsset");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteAsset(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
LivestreamServiceTracingStub::DeleteAsset(
    grpc::ClientContext& context, Options options,
    google::cloud::video::livestream::v1::DeleteAssetRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.livestream.v1.LivestreamService", "DeleteAsset");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteAsset(context, options, request));
}

StatusOr<google::cloud::video::livestream::v1::Asset>
LivestreamServiceTracingStub::GetAsset(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::livestream::v1::GetAssetRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.livestream.v1.LivestreamService", "GetAsset");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetAsset(context, options, request));
}

StatusOr<google::cloud::video::livestream::v1::ListAssetsResponse>
LivestreamServiceTracingStub::ListAssets(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::livestream::v1::ListAssetsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.livestream.v1.LivestreamService", "ListAssets");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListAssets(context, options, request));
}

StatusOr<google::cloud::video::livestream::v1::Pool>
LivestreamServiceTracingStub::GetPool(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::livestream::v1::GetPoolRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.livestream.v1.LivestreamService", "GetPool");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetPool(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
LivestreamServiceTracingStub::AsyncUpdatePool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::video::livestream::v1::UpdatePoolRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.livestream.v1.LivestreamService", "UpdatePool");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdatePool(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
LivestreamServiceTracingStub::UpdatePool(
    grpc::ClientContext& context, Options options,
    google::cloud::video::livestream::v1::UpdatePoolRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.livestream.v1.LivestreamService", "UpdatePool");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdatePool(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
LivestreamServiceTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.longrunning.Operations", "GetOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncGetOperation(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<Status> LivestreamServiceTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.longrunning.Operations",
                                     "CancelOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncCancelOperation(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<LivestreamServiceStub> MakeLivestreamServiceTracingStub(
    std::shared_ptr<LivestreamServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<LivestreamServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace video_livestream_v1_internal
}  // namespace cloud
}  // namespace google
