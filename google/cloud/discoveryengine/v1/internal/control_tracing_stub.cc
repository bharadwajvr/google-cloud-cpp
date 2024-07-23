// Copyright 2024 Google LLC
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
// source: google/cloud/discoveryengine/v1/control_service.proto

#include "google/cloud/discoveryengine/v1/internal/control_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace discoveryengine_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ControlServiceTracingStub::ControlServiceTracingStub(
    std::shared_ptr<ControlServiceStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::discoveryengine::v1::Control>
ControlServiceTracingStub::CreateControl(
    grpc::ClientContext& context, Options const& options,
    google::cloud::discoveryengine::v1::CreateControlRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.discoveryengine.v1.ControlService", "CreateControl");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateControl(context, options, request));
}

Status ControlServiceTracingStub::DeleteControl(
    grpc::ClientContext& context, Options const& options,
    google::cloud::discoveryengine::v1::DeleteControlRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.discoveryengine.v1.ControlService", "DeleteControl");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteControl(context, options, request));
}

StatusOr<google::cloud::discoveryengine::v1::Control>
ControlServiceTracingStub::UpdateControl(
    grpc::ClientContext& context, Options const& options,
    google::cloud::discoveryengine::v1::UpdateControlRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.discoveryengine.v1.ControlService", "UpdateControl");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateControl(context, options, request));
}

StatusOr<google::cloud::discoveryengine::v1::Control>
ControlServiceTracingStub::GetControl(
    grpc::ClientContext& context, Options const& options,
    google::cloud::discoveryengine::v1::GetControlRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.discoveryengine.v1.ControlService", "GetControl");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetControl(context, options, request));
}

StatusOr<google::cloud::discoveryengine::v1::ListControlsResponse>
ControlServiceTracingStub::ListControls(
    grpc::ClientContext& context, Options const& options,
    google::cloud::discoveryengine::v1::ListControlsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.discoveryengine.v1.ControlService", "ListControls");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListControls(context, options, request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<ControlServiceStub> MakeControlServiceTracingStub(
    std::shared_ptr<ControlServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<ControlServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace discoveryengine_v1_internal
}  // namespace cloud
}  // namespace google
