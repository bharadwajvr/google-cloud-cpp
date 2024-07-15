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
// source: google/cloud/aiplatform/v1/deployment_resource_pool_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_DEPLOYMENT_RESOURCE_POOL_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_DEPLOYMENT_RESOURCE_POOL_TRACING_CONNECTION_H

#include "google/cloud/aiplatform/v1/deployment_resource_pool_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class DeploymentResourcePoolServiceTracingConnection
    : public aiplatform_v1::DeploymentResourcePoolServiceConnection {
 public:
  ~DeploymentResourcePoolServiceTracingConnection() override = default;

  explicit DeploymentResourcePoolServiceTracingConnection(
      std::shared_ptr<aiplatform_v1::DeploymentResourcePoolServiceConnection>
          child);

  Options options() override { return child_->options(); }

  future<StatusOr<google::cloud::aiplatform::v1::DeploymentResourcePool>>
  CreateDeploymentResourcePool(
      google::cloud::aiplatform::v1::CreateDeploymentResourcePoolRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> CreateDeploymentResourcePool(
      ExperimentalTag, NoAwaitTag,
      google::cloud::aiplatform::v1::CreateDeploymentResourcePoolRequest const&
          request) override;

  future<StatusOr<google::cloud::aiplatform::v1::DeploymentResourcePool>>
  CreateDeploymentResourcePool(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::aiplatform::v1::DeploymentResourcePool>
  GetDeploymentResourcePool(
      google::cloud::aiplatform::v1::GetDeploymentResourcePoolRequest const&
          request) override;

  StreamRange<google::cloud::aiplatform::v1::DeploymentResourcePool>
  ListDeploymentResourcePools(
      google::cloud::aiplatform::v1::ListDeploymentResourcePoolsRequest request)
      override;

  future<StatusOr<google::cloud::aiplatform::v1::DeploymentResourcePool>>
  UpdateDeploymentResourcePool(
      google::cloud::aiplatform::v1::UpdateDeploymentResourcePoolRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> UpdateDeploymentResourcePool(
      ExperimentalTag, NoAwaitTag,
      google::cloud::aiplatform::v1::UpdateDeploymentResourcePoolRequest const&
          request) override;

  future<StatusOr<google::cloud::aiplatform::v1::DeploymentResourcePool>>
  UpdateDeploymentResourcePool(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
  DeleteDeploymentResourcePool(
      google::cloud::aiplatform::v1::DeleteDeploymentResourcePoolRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> DeleteDeploymentResourcePool(
      ExperimentalTag, NoAwaitTag,
      google::cloud::aiplatform::v1::DeleteDeploymentResourcePoolRequest const&
          request) override;

  future<StatusOr<google::cloud::aiplatform::v1::DeleteOperationMetadata>>
  DeleteDeploymentResourcePool(
      ExperimentalTag,
      google::longrunning::Operation const& operation) override;

 private:
  std::shared_ptr<aiplatform_v1::DeploymentResourcePoolServiceConnection>
      child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<aiplatform_v1::DeploymentResourcePoolServiceConnection>
MakeDeploymentResourcePoolServiceTracingConnection(
    std::shared_ptr<aiplatform_v1::DeploymentResourcePoolServiceConnection>
        conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_DEPLOYMENT_RESOURCE_POOL_TRACING_CONNECTION_H
