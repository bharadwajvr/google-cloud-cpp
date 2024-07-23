// Copyright 2021 Google LLC
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
// source: google/cloud/secretmanager/v1/service.proto

#include "google/cloud/secretmanager/v1/internal/secret_manager_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace secretmanager_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

SecretManagerServiceTracingStub::SecretManagerServiceTracingStub(
    std::shared_ptr<SecretManagerServiceStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::secretmanager::v1::ListSecretsResponse>
SecretManagerServiceTracingStub::ListSecrets(
    grpc::ClientContext& context, Options const& options,
    google::cloud::secretmanager::v1::ListSecretsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.secretmanager.v1.SecretManagerService", "ListSecrets");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListSecrets(context, options, request));
}

StatusOr<google::cloud::secretmanager::v1::Secret>
SecretManagerServiceTracingStub::CreateSecret(
    grpc::ClientContext& context, Options const& options,
    google::cloud::secretmanager::v1::CreateSecretRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.secretmanager.v1.SecretManagerService", "CreateSecret");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateSecret(context, options, request));
}

StatusOr<google::cloud::secretmanager::v1::SecretVersion>
SecretManagerServiceTracingStub::AddSecretVersion(
    grpc::ClientContext& context, Options const& options,
    google::cloud::secretmanager::v1::AddSecretVersionRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.secretmanager.v1.SecretManagerService", "AddSecretVersion");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->AddSecretVersion(context, options, request));
}

StatusOr<google::cloud::secretmanager::v1::Secret>
SecretManagerServiceTracingStub::GetSecret(
    grpc::ClientContext& context, Options const& options,
    google::cloud::secretmanager::v1::GetSecretRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.secretmanager.v1.SecretManagerService", "GetSecret");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetSecret(context, options, request));
}

StatusOr<google::cloud::secretmanager::v1::Secret>
SecretManagerServiceTracingStub::UpdateSecret(
    grpc::ClientContext& context, Options const& options,
    google::cloud::secretmanager::v1::UpdateSecretRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.secretmanager.v1.SecretManagerService", "UpdateSecret");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateSecret(context, options, request));
}

Status SecretManagerServiceTracingStub::DeleteSecret(
    grpc::ClientContext& context, Options const& options,
    google::cloud::secretmanager::v1::DeleteSecretRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.secretmanager.v1.SecretManagerService", "DeleteSecret");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteSecret(context, options, request));
}

StatusOr<google::cloud::secretmanager::v1::ListSecretVersionsResponse>
SecretManagerServiceTracingStub::ListSecretVersions(
    grpc::ClientContext& context, Options const& options,
    google::cloud::secretmanager::v1::ListSecretVersionsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.secretmanager.v1.SecretManagerService",
      "ListSecretVersions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->ListSecretVersions(context, options, request));
}

StatusOr<google::cloud::secretmanager::v1::SecretVersion>
SecretManagerServiceTracingStub::GetSecretVersion(
    grpc::ClientContext& context, Options const& options,
    google::cloud::secretmanager::v1::GetSecretVersionRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.secretmanager.v1.SecretManagerService", "GetSecretVersion");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetSecretVersion(context, options, request));
}

StatusOr<google::cloud::secretmanager::v1::AccessSecretVersionResponse>
SecretManagerServiceTracingStub::AccessSecretVersion(
    grpc::ClientContext& context, Options const& options,
    google::cloud::secretmanager::v1::AccessSecretVersionRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.secretmanager.v1.SecretManagerService",
      "AccessSecretVersion");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->AccessSecretVersion(context, options, request));
}

StatusOr<google::cloud::secretmanager::v1::SecretVersion>
SecretManagerServiceTracingStub::DisableSecretVersion(
    grpc::ClientContext& context, Options const& options,
    google::cloud::secretmanager::v1::DisableSecretVersionRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.secretmanager.v1.SecretManagerService",
      "DisableSecretVersion");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->DisableSecretVersion(context, options, request));
}

StatusOr<google::cloud::secretmanager::v1::SecretVersion>
SecretManagerServiceTracingStub::EnableSecretVersion(
    grpc::ClientContext& context, Options const& options,
    google::cloud::secretmanager::v1::EnableSecretVersionRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.secretmanager.v1.SecretManagerService",
      "EnableSecretVersion");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->EnableSecretVersion(context, options, request));
}

StatusOr<google::cloud::secretmanager::v1::SecretVersion>
SecretManagerServiceTracingStub::DestroySecretVersion(
    grpc::ClientContext& context, Options const& options,
    google::cloud::secretmanager::v1::DestroySecretVersionRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.secretmanager.v1.SecretManagerService",
      "DestroySecretVersion");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->DestroySecretVersion(context, options, request));
}

StatusOr<google::iam::v1::Policy> SecretManagerServiceTracingStub::SetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.secretmanager.v1.SecretManagerService", "SetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->SetIamPolicy(context, options, request));
}

StatusOr<google::iam::v1::Policy> SecretManagerServiceTracingStub::GetIamPolicy(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.secretmanager.v1.SecretManagerService", "GetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetIamPolicy(context, options, request));
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
SecretManagerServiceTracingStub::TestIamPermissions(
    grpc::ClientContext& context, Options const& options,
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.secretmanager.v1.SecretManagerService",
      "TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->TestIamPermissions(context, options, request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<SecretManagerServiceStub> MakeSecretManagerServiceTracingStub(
    std::shared_ptr<SecretManagerServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<SecretManagerServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace secretmanager_v1_internal
}  // namespace cloud
}  // namespace google
