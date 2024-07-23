// Copyright 2023 Google LLC
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
// source: google/logging/v2/logging_metrics.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LOGGING_V2_INTERNAL_METRICS_SERVICE_V2_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LOGGING_V2_INTERNAL_METRICS_SERVICE_V2_TRACING_STUB_H

#include "google/cloud/logging/v2/internal/metrics_service_v2_stub.h"
#include "google/cloud/internal/trace_propagator.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace logging_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class MetricsServiceV2TracingStub : public MetricsServiceV2Stub {
 public:
  ~MetricsServiceV2TracingStub() override = default;

  explicit MetricsServiceV2TracingStub(
      std::shared_ptr<MetricsServiceV2Stub> child);

  StatusOr<google::logging::v2::ListLogMetricsResponse> ListLogMetrics(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::ListLogMetricsRequest const& request) override;

  StatusOr<google::logging::v2::LogMetric> GetLogMetric(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::GetLogMetricRequest const& request) override;

  StatusOr<google::logging::v2::LogMetric> CreateLogMetric(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::CreateLogMetricRequest const& request) override;

  StatusOr<google::logging::v2::LogMetric> UpdateLogMetric(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::UpdateLogMetricRequest const& request) override;

  Status DeleteLogMetric(
      grpc::ClientContext& context, Options const& options,
      google::logging::v2::DeleteLogMetricRequest const& request) override;

 private:
  std::shared_ptr<MetricsServiceV2Stub> child_;
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
std::shared_ptr<MetricsServiceV2Stub> MakeMetricsServiceV2TracingStub(
    std::shared_ptr<MetricsServiceV2Stub> stub);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace logging_v2_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_LOGGING_V2_INTERNAL_METRICS_SERVICE_V2_TRACING_STUB_H
