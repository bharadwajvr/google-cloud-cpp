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
// source: google/cloud/kms/v1/ekm_service.proto

#include "google/cloud/kms/v1/internal/ekm_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace kms_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

EkmServiceTracingStub::EkmServiceTracingStub(
    std::shared_ptr<EkmServiceStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::kms::v1::ListEkmConnectionsResponse>
EkmServiceTracingStub::ListEkmConnections(
    grpc::ClientContext& context, Options const& options,
    google::cloud::kms::v1::ListEkmConnectionsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.kms.v1.EkmService",
                                     "ListEkmConnections");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->ListEkmConnections(context, options, request));
}

StatusOr<google::cloud::kms::v1::EkmConnection>
EkmServiceTracingStub::GetEkmConnection(
    grpc::ClientContext& context, Options const& options,
    google::cloud::kms::v1::GetEkmConnectionRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.kms.v1.EkmService",
                                     "GetEkmConnection");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetEkmConnection(context, options, request));
}

StatusOr<google::cloud::kms::v1::EkmConnection>
EkmServiceTracingStub::CreateEkmConnection(
    grpc::ClientContext& context, Options const& options,
    google::cloud::kms::v1::CreateEkmConnectionRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.kms.v1.EkmService",
                                     "CreateEkmConnection");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->CreateEkmConnection(context, options, request));
}

StatusOr<google::cloud::kms::v1::EkmConnection>
EkmServiceTracingStub::UpdateEkmConnection(
    grpc::ClientContext& context, Options const& options,
    google::cloud::kms::v1::UpdateEkmConnectionRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.kms.v1.EkmService",
                                     "UpdateEkmConnection");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->UpdateEkmConnection(context, options, request));
}

StatusOr<google::cloud::kms::v1::EkmConfig> EkmServiceTracingStub::GetEkmConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::kms::v1::GetEkmConfigRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.kms.v1.EkmService", "GetEkmConfig");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetEkmConfig(context, options, request));
}

StatusOr<google::cloud::kms::v1::EkmConfig>
EkmServiceTracingStub::UpdateEkmConfig(
    grpc::ClientContext& context, Options const& options,
    google::cloud::kms::v1::UpdateEkmConfigRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.kms.v1.EkmService",
                                     "UpdateEkmConfig");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateEkmConfig(context, options, request));
}

StatusOr<google::cloud::kms::v1::VerifyConnectivityResponse>
EkmServiceTracingStub::VerifyConnectivity(
    grpc::ClientContext& context, Options const& options,
    google::cloud::kms::v1::VerifyConnectivityRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.kms.v1.EkmService",
                                     "VerifyConnectivity");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->VerifyConnectivity(context, options, request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<EkmServiceStub> MakeEkmServiceTracingStub(
    std::shared_ptr<EkmServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<EkmServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace kms_v1_internal
}  // namespace cloud
}  // namespace google
