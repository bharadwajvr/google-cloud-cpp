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
// source: google/cloud/bigquery/v2/model.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERYCONTROL_V2_MODEL_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERYCONTROL_V2_MODEL_CONNECTION_H

#include "google/cloud/bigquerycontrol/v2/internal/model_retry_traits.h"
#include "google/cloud/bigquerycontrol/v2/model_connection_idempotency_policy.h"
#include "google/cloud/backoff_policy.h"
#include "google/cloud/experimental_tag.h"
#include "google/cloud/internal/retry_policy_impl.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/stream_range.h"
#include "google/cloud/version.h"
#include <google/cloud/bigquery/v2/model.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace bigquerycontrol_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/// The retry policy for `ModelServiceConnection`.
class ModelServiceRetryPolicy : public ::google::cloud::RetryPolicy {
 public:
  /// Creates a new instance of the policy, reset to the initial state.
  virtual std::unique_ptr<ModelServiceRetryPolicy> clone() const = 0;
};

/**
 * A retry policy for `ModelServiceConnection` based on counting errors.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - More than a prescribed number of transient failures is detected.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class ModelServiceLimitedErrorCountRetryPolicy
    : public ModelServiceRetryPolicy {
 public:
  /**
   * Create an instance that tolerates up to @p maximum_failures transient
   * errors.
   *
   * @note Disable the retry loop by providing an instance of this policy with
   *     @p maximum_failures == 0.
   */
  explicit ModelServiceLimitedErrorCountRetryPolicy(int maximum_failures)
      : impl_(maximum_failures) {}

  ModelServiceLimitedErrorCountRetryPolicy(
      ModelServiceLimitedErrorCountRetryPolicy&& rhs) noexcept
      : ModelServiceLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}
  ModelServiceLimitedErrorCountRetryPolicy(
      ModelServiceLimitedErrorCountRetryPolicy const& rhs) noexcept
      : ModelServiceLimitedErrorCountRetryPolicy(rhs.maximum_failures()) {}

  int maximum_failures() const { return impl_.maximum_failures(); }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<ModelServiceRetryPolicy> clone() const override {
    return std::make_unique<ModelServiceLimitedErrorCountRetryPolicy>(
        maximum_failures());
  }

  // This is provided only for backwards compatibility.
  using BaseType = ModelServiceRetryPolicy;

 private:
  google::cloud::internal::LimitedErrorCountRetryPolicy<
      bigquerycontrol_v2_internal::ModelServiceRetryTraits>
      impl_;
};

/**
 * A retry policy for `ModelServiceConnection` based on elapsed time.
 *
 * This policy stops retrying if:
 * - An RPC returns a non-transient error.
 * - The elapsed time in the retry loop exceeds a prescribed duration.
 *
 * In this class the following status codes are treated as transient errors:
 * - [`kUnavailable`](@ref google::cloud::StatusCode)
 */
class ModelServiceLimitedTimeRetryPolicy : public ModelServiceRetryPolicy {
 public:
  /**
   * Constructor given a `std::chrono::duration<>` object.
   *
   * @tparam DurationRep a placeholder to match the `Rep` tparam for @p
   *     duration's type. The semantics of this template parameter are
   *     documented in `std::chrono::duration<>`. In brief, the underlying
   *     arithmetic type used to store the number of ticks. For our purposes it
   *     is simply a formal parameter.
   * @tparam DurationPeriod a placeholder to match the `Period` tparam for @p
   *     duration's type. The semantics of this template parameter are
   *     documented in `std::chrono::duration<>`. In brief, the length of the
   *     tick in seconds, expressed as a `std::ratio<>`. For our purposes it is
   *     simply a formal parameter.
   * @param maximum_duration the maximum time allowed before the policy expires.
   *     While the application can express this time in any units they desire,
   *     the class truncates to milliseconds.
   *
   * @see https://en.cppreference.com/w/cpp/chrono/duration for more information
   *     about `std::chrono::duration`.
   */
  template <typename DurationRep, typename DurationPeriod>
  explicit ModelServiceLimitedTimeRetryPolicy(
      std::chrono::duration<DurationRep, DurationPeriod> maximum_duration)
      : impl_(maximum_duration) {}

  ModelServiceLimitedTimeRetryPolicy(
      ModelServiceLimitedTimeRetryPolicy&& rhs) noexcept
      : ModelServiceLimitedTimeRetryPolicy(rhs.maximum_duration()) {}
  ModelServiceLimitedTimeRetryPolicy(
      ModelServiceLimitedTimeRetryPolicy const& rhs) noexcept
      : ModelServiceLimitedTimeRetryPolicy(rhs.maximum_duration()) {}

  std::chrono::milliseconds maximum_duration() const {
    return impl_.maximum_duration();
  }

  bool OnFailure(Status const& status) override {
    return impl_.OnFailure(status);
  }
  bool IsExhausted() const override { return impl_.IsExhausted(); }
  bool IsPermanentFailure(Status const& status) const override {
    return impl_.IsPermanentFailure(status);
  }
  std::unique_ptr<ModelServiceRetryPolicy> clone() const override {
    return std::make_unique<ModelServiceLimitedTimeRetryPolicy>(
        maximum_duration());
  }

  // This is provided only for backwards compatibility.
  using BaseType = ModelServiceRetryPolicy;

 private:
  google::cloud::internal::LimitedTimeRetryPolicy<
      bigquerycontrol_v2_internal::ModelServiceRetryTraits>
      impl_;
};

/**
 * The `ModelServiceConnection` object for `ModelServiceClient`.
 *
 * This interface defines virtual methods for each of the user-facing overload
 * sets in `ModelServiceClient`. This allows users to inject custom behavior
 * (e.g., with a Google Mock object) when writing tests that use objects of type
 * `ModelServiceClient`.
 *
 * To create a concrete instance, see `MakeModelServiceConnection()`.
 *
 * For mocking, see `bigquerycontrol_v2_mocks::MockModelServiceConnection`.
 */
class ModelServiceConnection {
 public:
  virtual ~ModelServiceConnection() = 0;

  virtual Options options() { return Options{}; }

  virtual StatusOr<google::cloud::bigquery::v2::Model> GetModel(
      google::cloud::bigquery::v2::GetModelRequest const& request);

  virtual StreamRange<google::cloud::bigquery::v2::Model> ListModels(
      google::cloud::bigquery::v2::ListModelsRequest request);

  virtual StatusOr<google::cloud::bigquery::v2::Model> PatchModel(
      google::cloud::bigquery::v2::PatchModelRequest const& request);

  virtual Status DeleteModel(
      google::cloud::bigquery::v2::DeleteModelRequest const& request);
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquerycontrol_v2
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BIGQUERYCONTROL_V2_MODEL_CONNECTION_H
