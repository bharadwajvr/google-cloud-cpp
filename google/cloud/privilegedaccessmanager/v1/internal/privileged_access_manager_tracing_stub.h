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
// source: google/cloud/privilegedaccessmanager/v1/privilegedaccessmanager.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PRIVILEGEDACCESSMANAGER_V1_INTERNAL_PRIVILEGED_ACCESS_MANAGER_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PRIVILEGEDACCESSMANAGER_V1_INTERNAL_PRIVILEGED_ACCESS_MANAGER_TRACING_STUB_H

#include "google/cloud/privilegedaccessmanager/v1/internal/privileged_access_manager_stub.h"
#include "google/cloud/internal/trace_propagator.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace privilegedaccessmanager_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class PrivilegedAccessManagerTracingStub : public PrivilegedAccessManagerStub {
 public:
  ~PrivilegedAccessManagerTracingStub() override = default;

  explicit PrivilegedAccessManagerTracingStub(
      std::shared_ptr<PrivilegedAccessManagerStub> child);

  StatusOr<
      google::cloud::privilegedaccessmanager::v1::CheckOnboardingStatusResponse>
  CheckOnboardingStatus(
      grpc::ClientContext& context, Options const& options,
      google::cloud::privilegedaccessmanager::v1::
          CheckOnboardingStatusRequest const& request) override;

  StatusOr<google::cloud::privilegedaccessmanager::v1::ListEntitlementsResponse>
  ListEntitlements(
      grpc::ClientContext& context, Options const& options,
      google::cloud::privilegedaccessmanager::v1::ListEntitlementsRequest const&
          request) override;

  StatusOr<
      google::cloud::privilegedaccessmanager::v1::SearchEntitlementsResponse>
  SearchEntitlements(grpc::ClientContext& context, Options const& options,
                     google::cloud::privilegedaccessmanager::v1::
                         SearchEntitlementsRequest const& request) override;

  StatusOr<google::cloud::privilegedaccessmanager::v1::Entitlement>
  GetEntitlement(
      grpc::ClientContext& context, Options const& options,
      google::cloud::privilegedaccessmanager::v1::GetEntitlementRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateEntitlement(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::privilegedaccessmanager::v1::
          CreateEntitlementRequest const& request) override;

  StatusOr<google::longrunning::Operation> CreateEntitlement(
      grpc::ClientContext& context, Options options,
      google::cloud::privilegedaccessmanager::v1::
          CreateEntitlementRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteEntitlement(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::privilegedaccessmanager::v1::
          DeleteEntitlementRequest const& request) override;

  StatusOr<google::longrunning::Operation> DeleteEntitlement(
      grpc::ClientContext& context, Options options,
      google::cloud::privilegedaccessmanager::v1::
          DeleteEntitlementRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateEntitlement(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::privilegedaccessmanager::v1::
          UpdateEntitlementRequest const& request) override;

  StatusOr<google::longrunning::Operation> UpdateEntitlement(
      grpc::ClientContext& context, Options options,
      google::cloud::privilegedaccessmanager::v1::
          UpdateEntitlementRequest const& request) override;

  StatusOr<google::cloud::privilegedaccessmanager::v1::ListGrantsResponse>
  ListGrants(
      grpc::ClientContext& context, Options const& options,
      google::cloud::privilegedaccessmanager::v1::ListGrantsRequest const&
          request) override;

  StatusOr<google::cloud::privilegedaccessmanager::v1::SearchGrantsResponse>
  SearchGrants(
      grpc::ClientContext& context, Options const& options,
      google::cloud::privilegedaccessmanager::v1::SearchGrantsRequest const&
          request) override;

  StatusOr<google::cloud::privilegedaccessmanager::v1::Grant> GetGrant(
      grpc::ClientContext& context, Options const& options,
      google::cloud::privilegedaccessmanager::v1::GetGrantRequest const&
          request) override;

  StatusOr<google::cloud::privilegedaccessmanager::v1::Grant> CreateGrant(
      grpc::ClientContext& context, Options const& options,
      google::cloud::privilegedaccessmanager::v1::CreateGrantRequest const&
          request) override;

  StatusOr<google::cloud::privilegedaccessmanager::v1::Grant> ApproveGrant(
      grpc::ClientContext& context, Options const& options,
      google::cloud::privilegedaccessmanager::v1::ApproveGrantRequest const&
          request) override;

  StatusOr<google::cloud::privilegedaccessmanager::v1::Grant> DenyGrant(
      grpc::ClientContext& context, Options const& options,
      google::cloud::privilegedaccessmanager::v1::DenyGrantRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncRevokeGrant(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::privilegedaccessmanager::v1::RevokeGrantRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> RevokeGrant(
      grpc::ClientContext& context, Options options,
      google::cloud::privilegedaccessmanager::v1::RevokeGrantRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<PrivilegedAccessManagerStub> child_;
  std::shared_ptr<opentelemetry::context::propagation::TextMapPropagator>
      propagator_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Applies the tracing decorator to the given stub.
 *
 * The stub is only decorated if the library has been compiled with
 * OpenTelemetry.
 */
std::shared_ptr<PrivilegedAccessManagerStub>
MakePrivilegedAccessManagerTracingStub(
    std::shared_ptr<PrivilegedAccessManagerStub> stub);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace privilegedaccessmanager_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_PRIVILEGEDACCESSMANAGER_V1_INTERNAL_PRIVILEGED_ACCESS_MANAGER_TRACING_STUB_H
