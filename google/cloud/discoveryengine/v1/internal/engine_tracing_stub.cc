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
// source: google/cloud/discoveryengine/v1/engine_service.proto

#include "google/cloud/discoveryengine/v1/internal/engine_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace discoveryengine_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

EngineServiceTracingStub::EngineServiceTracingStub(
    std::shared_ptr<EngineServiceStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

future<StatusOr<google::longrunning::Operation>>
EngineServiceTracingStub::AsyncCreateEngine(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::discoveryengine::v1::CreateEngineRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.discoveryengine.v1.EngineService", "CreateEngine");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateEngine(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation> EngineServiceTracingStub::CreateEngine(
    grpc::ClientContext& context, Options options,
    google::cloud::discoveryengine::v1::CreateEngineRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.discoveryengine.v1.EngineService", "CreateEngine");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateEngine(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
EngineServiceTracingStub::AsyncDeleteEngine(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::discoveryengine::v1::DeleteEngineRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.discoveryengine.v1.EngineService", "DeleteEngine");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteEngine(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation> EngineServiceTracingStub::DeleteEngine(
    grpc::ClientContext& context, Options options,
    google::cloud::discoveryengine::v1::DeleteEngineRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.discoveryengine.v1.EngineService", "DeleteEngine");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteEngine(context, options, request));
}

StatusOr<google::cloud::discoveryengine::v1::Engine>
EngineServiceTracingStub::UpdateEngine(
    grpc::ClientContext& context, Options const& options,
    google::cloud::discoveryengine::v1::UpdateEngineRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.discoveryengine.v1.EngineService", "UpdateEngine");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateEngine(context, options, request));
}

StatusOr<google::cloud::discoveryengine::v1::Engine>
EngineServiceTracingStub::GetEngine(
    grpc::ClientContext& context, Options const& options,
    google::cloud::discoveryengine::v1::GetEngineRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.discoveryengine.v1.EngineService", "GetEngine");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetEngine(context, options, request));
}

StatusOr<google::cloud::discoveryengine::v1::ListEnginesResponse>
EngineServiceTracingStub::ListEngines(
    grpc::ClientContext& context, Options const& options,
    google::cloud::discoveryengine::v1::ListEnginesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.discoveryengine.v1.EngineService", "ListEngines");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListEngines(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
EngineServiceTracingStub::AsyncGetOperation(
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

future<Status> EngineServiceTracingStub::AsyncCancelOperation(
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

std::shared_ptr<EngineServiceStub> MakeEngineServiceTracingStub(
    std::shared_ptr<EngineServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<EngineServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace discoveryengine_v1_internal
}  // namespace cloud
}  // namespace google
