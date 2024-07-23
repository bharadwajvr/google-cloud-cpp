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
// source: google/cloud/aiplatform/v1/persistent_resource_service.proto

#include "google/cloud/aiplatform/v1/internal/persistent_resource_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

PersistentResourceServiceTracingStub::PersistentResourceServiceTracingStub(
    std::shared_ptr<PersistentResourceServiceStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

future<StatusOr<google::longrunning::Operation>>
PersistentResourceServiceTracingStub::AsyncCreatePersistentResource(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::CreatePersistentResourceRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.PersistentResourceService",
      "CreatePersistentResource");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreatePersistentResource(cq, context,
                                                 std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
PersistentResourceServiceTracingStub::CreatePersistentResource(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::CreatePersistentResourceRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.PersistentResourceService",
      "CreatePersistentResource");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->CreatePersistentResource(context, options, request));
}

StatusOr<google::cloud::aiplatform::v1::PersistentResource>
PersistentResourceServiceTracingStub::GetPersistentResource(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetPersistentResourceRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.PersistentResourceService",
      "GetPersistentResource");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->GetPersistentResource(context, options, request));
}

StatusOr<google::cloud::aiplatform::v1::ListPersistentResourcesResponse>
PersistentResourceServiceTracingStub::ListPersistentResources(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListPersistentResourcesRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.PersistentResourceService",
      "ListPersistentResources");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->ListPersistentResources(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
PersistentResourceServiceTracingStub::AsyncDeletePersistentResource(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::DeletePersistentResourceRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.PersistentResourceService",
      "DeletePersistentResource");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeletePersistentResource(cq, context,
                                                 std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
PersistentResourceServiceTracingStub::DeletePersistentResource(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::DeletePersistentResourceRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.PersistentResourceService",
      "DeletePersistentResource");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->DeletePersistentResource(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
PersistentResourceServiceTracingStub::AsyncUpdatePersistentResource(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::UpdatePersistentResourceRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.PersistentResourceService",
      "UpdatePersistentResource");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdatePersistentResource(cq, context,
                                                 std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
PersistentResourceServiceTracingStub::UpdatePersistentResource(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::UpdatePersistentResourceRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.PersistentResourceService",
      "UpdatePersistentResource");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->UpdatePersistentResource(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
PersistentResourceServiceTracingStub::AsyncRebootPersistentResource(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::RebootPersistentResourceRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.PersistentResourceService",
      "RebootPersistentResource");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncRebootPersistentResource(cq, context,
                                                 std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
PersistentResourceServiceTracingStub::RebootPersistentResource(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::RebootPersistentResourceRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.PersistentResourceService",
      "RebootPersistentResource");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->RebootPersistentResource(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
PersistentResourceServiceTracingStub::AsyncGetOperation(
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

future<Status> PersistentResourceServiceTracingStub::AsyncCancelOperation(
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

std::shared_ptr<PersistentResourceServiceStub>
MakePersistentResourceServiceTracingStub(
    std::shared_ptr<PersistentResourceServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<PersistentResourceServiceTracingStub>(
      std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google
