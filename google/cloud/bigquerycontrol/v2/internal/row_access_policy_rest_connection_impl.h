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
// source: google/cloud/bigquery/v2/row_access_policy.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERYCONTROL_V2_INTERNAL_ROW_ACCESS_POLICY_REST_CONNECTION_IMPL_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERYCONTROL_V2_INTERNAL_ROW_ACCESS_POLICY_REST_CONNECTION_IMPL_H

#include "google/cloud/bigquerycontrol/v2/internal/row_access_policy_rest_stub.h"
#include "google/cloud/bigquerycontrol/v2/internal/row_access_policy_retry_traits.h"
#include "google/cloud/bigquerycontrol/v2/row_access_policy_connection.h"
#include "google/cloud/bigquerycontrol/v2/row_access_policy_connection_idempotency_policy.h"
#include "google/cloud/bigquerycontrol/v2/row_access_policy_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace bigquerycontrol_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class RowAccessPolicyServiceRestConnectionImpl
    : public bigquerycontrol_v2::RowAccessPolicyServiceConnection {
 public:
  ~RowAccessPolicyServiceRestConnectionImpl() override = default;

  RowAccessPolicyServiceRestConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<
          bigquerycontrol_v2_internal::RowAccessPolicyServiceRestStub>
          stub,
      Options options);

  Options options() override { return options_; }

  StreamRange<google::cloud::bigquery::v2::RowAccessPolicy>
  ListRowAccessPolicies(
      google::cloud::bigquery::v2::ListRowAccessPoliciesRequest request)
      override;

 private:
  static std::unique_ptr<bigquerycontrol_v2::RowAccessPolicyServiceRetryPolicy>
  retry_policy(Options const& options) {
    return options
        .get<bigquerycontrol_v2::RowAccessPolicyServiceRetryPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
    return options
        .get<bigquerycontrol_v2::RowAccessPolicyServiceBackoffPolicyOption>()
        ->clone();
  }

  static std::unique_ptr<
      bigquerycontrol_v2::RowAccessPolicyServiceConnectionIdempotencyPolicy>
  idempotency_policy(Options const& options) {
    return options
        .get<bigquerycontrol_v2::
                 RowAccessPolicyServiceConnectionIdempotencyPolicyOption>()
        ->clone();
  }

  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<bigquerycontrol_v2_internal::RowAccessPolicyServiceRestStub>
      stub_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquerycontrol_v2_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERYCONTROL_V2_INTERNAL_ROW_ACCESS_POLICY_REST_CONNECTION_IMPL_H
