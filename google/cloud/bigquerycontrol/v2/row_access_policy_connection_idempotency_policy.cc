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

#include "google/cloud/bigquerycontrol/v2/row_access_policy_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace bigquerycontrol_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

RowAccessPolicyServiceConnectionIdempotencyPolicy::
    ~RowAccessPolicyServiceConnectionIdempotencyPolicy() = default;

std::unique_ptr<RowAccessPolicyServiceConnectionIdempotencyPolicy>
RowAccessPolicyServiceConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<RowAccessPolicyServiceConnectionIdempotencyPolicy>(
      *this);
}

Idempotency
RowAccessPolicyServiceConnectionIdempotencyPolicy::ListRowAccessPolicies(
    google::cloud::bigquery::v2::ListRowAccessPoliciesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

std::unique_ptr<RowAccessPolicyServiceConnectionIdempotencyPolicy>
MakeDefaultRowAccessPolicyServiceConnectionIdempotencyPolicy() {
  return std::make_unique<RowAccessPolicyServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquerycontrol_v2
}  // namespace cloud
}  // namespace google
