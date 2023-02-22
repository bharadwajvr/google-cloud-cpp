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
// source: google/cloud/iap/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAP_V1_IDENTITY_AWARE_PROXY_ADMIN_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAP_V1_IDENTITY_AWARE_PROXY_ADMIN_CONNECTION_H

#include "google/cloud/iap/v1/identity_aware_proxy_admin_connection_idempotency_policy.h"
#include "google/cloud/iap/v1/internal/identity_aware_proxy_admin_retry_traits.h"
#include "google/cloud/iap/v1/internal/identity_aware_proxy_admin_stub.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace iap_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using IdentityAwareProxyAdminServiceRetryPolicy =
    ::google::cloud::internal::TraitBasedRetryPolicy<
        iap_v1_internal::IdentityAwareProxyAdminServiceRetryTraits>;

using IdentityAwareProxyAdminServiceLimitedTimeRetryPolicy =
    ::google::cloud::internal::LimitedTimeRetryPolicy<
        iap_v1_internal::IdentityAwareProxyAdminServiceRetryTraits>;

using IdentityAwareProxyAdminServiceLimitedErrorCountRetryPolicy =
    ::google::cloud::internal::LimitedErrorCountRetryPolicy<
        iap_v1_internal::IdentityAwareProxyAdminServiceRetryTraits>;

/**
 * The `IdentityAwareProxyAdminServiceConnection` object for
 * `IdentityAwareProxyAdminServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `IdentityAwareProxyAdminServiceClient`. This allows users to inject
 * custom behavior (e.g., with a Google Mock object) when writing tests that use
 * objects of type `IdentityAwareProxyAdminServiceClient`.
 *
 * To create a concrete instance, see
 * `MakeIdentityAwareProxyAdminServiceConnection()`.
 *
 * For mocking, see
 * `iap_v1_mocks::MockIdentityAwareProxyAdminServiceConnection`.
 */
class IdentityAwareProxyAdminServiceConnection {
 public:
  virtual ~IdentityAwareProxyAdminServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request);

  virtual StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request);

  virtual StatusOr<google::iam::v1::TestIamPermissionsResponse>
  TestIamPermissions(google::iam::v1::TestIamPermissionsRequest const& request);

  virtual StatusOr<google::cloud::iap::v1::IapSettings> GetIapSettings(
      google::cloud::iap::v1::GetIapSettingsRequest const& request);

  virtual StatusOr<google::cloud::iap::v1::IapSettings> UpdateIapSettings(
      google::cloud::iap::v1::UpdateIapSettingsRequest const& request);

  virtual StreamRange<google::cloud::iap::v1::TunnelDestGroup>
  ListTunnelDestGroups(
      google::cloud::iap::v1::ListTunnelDestGroupsRequest request);

  virtual StatusOr<google::cloud::iap::v1::TunnelDestGroup>
  CreateTunnelDestGroup(
      google::cloud::iap::v1::CreateTunnelDestGroupRequest const& request);

  virtual StatusOr<google::cloud::iap::v1::TunnelDestGroup> GetTunnelDestGroup(
      google::cloud::iap::v1::GetTunnelDestGroupRequest const& request);

  virtual Status DeleteTunnelDestGroup(
      google::cloud::iap::v1::DeleteTunnelDestGroupRequest const& request);

  virtual StatusOr<google::cloud::iap::v1::TunnelDestGroup>
  UpdateTunnelDestGroup(
      google::cloud::iap::v1::UpdateTunnelDestGroupRequest const& request);
};

/**
 * A factory function to construct an object of type
 * `IdentityAwareProxyAdminServiceConnection`.
 *
 * The returned connection object should not be used directly; instead it
 * should be passed as an argument to the constructor of
 * IdentityAwareProxyAdminServiceClient.
 *
 * The optional @p options argument may be used to configure aspects of the
 * returned `IdentityAwareProxyAdminServiceConnection`. Expected options are any
 * of the types in the following option lists:
 *
 * - `google::cloud::CommonOptionList`
 * - `google::cloud::GrpcOptionList`
 * - `google::cloud::UnifiedCredentialsOptionList`
 * - `google::cloud::iap_v1::IdentityAwareProxyAdminServicePolicyOptionList`
 *
 * @note Unexpected options will be ignored. To log unexpected options instead,
 *     set `GOOGLE_CLOUD_CPP_ENABLE_CLOG=yes` in the environment.
 *
 * @param options (optional) Configure the
 * `IdentityAwareProxyAdminServiceConnection` created by this function.
 */
std::shared_ptr<IdentityAwareProxyAdminServiceConnection>
MakeIdentityAwareProxyAdminServiceConnection(Options options = {});

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace iap_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAP_V1_IDENTITY_AWARE_PROXY_ADMIN_CONNECTION_H
