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
// source: google/container/v1/cluster_service.proto

#include "google/cloud/container/v1/internal/cluster_manager_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace container_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ClusterManagerTracingStub::ClusterManagerTracingStub(
    std::shared_ptr<ClusterManagerStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::container::v1::ListClustersResponse>
ClusterManagerTracingStub::ListClusters(
    grpc::ClientContext& context, Options const& options,
    google::container::v1::ListClustersRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.container.v1.ClusterManager",
                                     "ListClusters");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListClusters(context, options, request));
}

StatusOr<google::container::v1::Cluster> ClusterManagerTracingStub::GetCluster(
    grpc::ClientContext& context, Options const& options,
    google::container::v1::GetClusterRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.container.v1.ClusterManager",
                                     "GetCluster");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetCluster(context, options, request));
}

StatusOr<google::container::v1::Operation>
ClusterManagerTracingStub::CreateCluster(
    grpc::ClientContext& context, Options const& options,
    google::container::v1::CreateClusterRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.container.v1.ClusterManager",
                                     "CreateCluster");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateCluster(context, options, request));
}

StatusOr<google::container::v1::Operation>
ClusterManagerTracingStub::UpdateCluster(
    grpc::ClientContext& context, Options const& options,
    google::container::v1::UpdateClusterRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.container.v1.ClusterManager",
                                     "UpdateCluster");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateCluster(context, options, request));
}

StatusOr<google::container::v1::Operation>
ClusterManagerTracingStub::UpdateNodePool(
    grpc::ClientContext& context, Options const& options,
    google::container::v1::UpdateNodePoolRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.container.v1.ClusterManager",
                                     "UpdateNodePool");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateNodePool(context, options, request));
}

StatusOr<google::container::v1::Operation>
ClusterManagerTracingStub::SetNodePoolAutoscaling(
    grpc::ClientContext& context, Options const& options,
    google::container::v1::SetNodePoolAutoscalingRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.container.v1.ClusterManager",
                                     "SetNodePoolAutoscaling");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->SetNodePoolAutoscaling(context, options, request));
}

StatusOr<google::container::v1::Operation>
ClusterManagerTracingStub::SetLoggingService(
    grpc::ClientContext& context, Options const& options,
    google::container::v1::SetLoggingServiceRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.container.v1.ClusterManager",
                                     "SetLoggingService");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->SetLoggingService(context, options, request));
}

StatusOr<google::container::v1::Operation>
ClusterManagerTracingStub::SetMonitoringService(
    grpc::ClientContext& context, Options const& options,
    google::container::v1::SetMonitoringServiceRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.container.v1.ClusterManager",
                                     "SetMonitoringService");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->SetMonitoringService(context, options, request));
}

StatusOr<google::container::v1::Operation>
ClusterManagerTracingStub::SetAddonsConfig(
    grpc::ClientContext& context, Options const& options,
    google::container::v1::SetAddonsConfigRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.container.v1.ClusterManager",
                                     "SetAddonsConfig");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->SetAddonsConfig(context, options, request));
}

StatusOr<google::container::v1::Operation>
ClusterManagerTracingStub::SetLocations(
    grpc::ClientContext& context, Options const& options,
    google::container::v1::SetLocationsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.container.v1.ClusterManager",
                                     "SetLocations");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->SetLocations(context, options, request));
}

StatusOr<google::container::v1::Operation>
ClusterManagerTracingStub::UpdateMaster(
    grpc::ClientContext& context, Options const& options,
    google::container::v1::UpdateMasterRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.container.v1.ClusterManager",
                                     "UpdateMaster");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateMaster(context, options, request));
}

StatusOr<google::container::v1::Operation>
ClusterManagerTracingStub::SetMasterAuth(
    grpc::ClientContext& context, Options const& options,
    google::container::v1::SetMasterAuthRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.container.v1.ClusterManager",
                                     "SetMasterAuth");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->SetMasterAuth(context, options, request));
}

StatusOr<google::container::v1::Operation>
ClusterManagerTracingStub::DeleteCluster(
    grpc::ClientContext& context, Options const& options,
    google::container::v1::DeleteClusterRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.container.v1.ClusterManager",
                                     "DeleteCluster");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteCluster(context, options, request));
}

StatusOr<google::container::v1::ListOperationsResponse>
ClusterManagerTracingStub::ListOperations(
    grpc::ClientContext& context, Options const& options,
    google::container::v1::ListOperationsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.container.v1.ClusterManager",
                                     "ListOperations");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListOperations(context, options, request));
}

StatusOr<google::container::v1::Operation>
ClusterManagerTracingStub::GetOperation(
    grpc::ClientContext& context, Options const& options,
    google::container::v1::GetOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.container.v1.ClusterManager",
                                     "GetOperation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetOperation(context, options, request));
}

Status ClusterManagerTracingStub::CancelOperation(
    grpc::ClientContext& context, Options const& options,
    google::container::v1::CancelOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.container.v1.ClusterManager",
                                     "CancelOperation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CancelOperation(context, options, request));
}

StatusOr<google::container::v1::ServerConfig>
ClusterManagerTracingStub::GetServerConfig(
    grpc::ClientContext& context, Options const& options,
    google::container::v1::GetServerConfigRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.container.v1.ClusterManager",
                                     "GetServerConfig");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetServerConfig(context, options, request));
}

StatusOr<google::container::v1::GetJSONWebKeysResponse>
ClusterManagerTracingStub::GetJSONWebKeys(
    grpc::ClientContext& context, Options const& options,
    google::container::v1::GetJSONWebKeysRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.container.v1.ClusterManager",
                                     "GetJSONWebKeys");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetJSONWebKeys(context, options, request));
}

StatusOr<google::container::v1::ListNodePoolsResponse>
ClusterManagerTracingStub::ListNodePools(
    grpc::ClientContext& context, Options const& options,
    google::container::v1::ListNodePoolsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.container.v1.ClusterManager",
                                     "ListNodePools");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListNodePools(context, options, request));
}

StatusOr<google::container::v1::NodePool>
ClusterManagerTracingStub::GetNodePool(
    grpc::ClientContext& context, Options const& options,
    google::container::v1::GetNodePoolRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.container.v1.ClusterManager",
                                     "GetNodePool");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetNodePool(context, options, request));
}

StatusOr<google::container::v1::Operation>
ClusterManagerTracingStub::CreateNodePool(
    grpc::ClientContext& context, Options const& options,
    google::container::v1::CreateNodePoolRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.container.v1.ClusterManager",
                                     "CreateNodePool");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateNodePool(context, options, request));
}

StatusOr<google::container::v1::Operation>
ClusterManagerTracingStub::DeleteNodePool(
    grpc::ClientContext& context, Options const& options,
    google::container::v1::DeleteNodePoolRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.container.v1.ClusterManager",
                                     "DeleteNodePool");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteNodePool(context, options, request));
}

Status ClusterManagerTracingStub::CompleteNodePoolUpgrade(
    grpc::ClientContext& context, Options const& options,
    google::container::v1::CompleteNodePoolUpgradeRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.container.v1.ClusterManager",
                                     "CompleteNodePoolUpgrade");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->CompleteNodePoolUpgrade(context, options, request));
}

StatusOr<google::container::v1::Operation>
ClusterManagerTracingStub::RollbackNodePoolUpgrade(
    grpc::ClientContext& context, Options const& options,
    google::container::v1::RollbackNodePoolUpgradeRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.container.v1.ClusterManager",
                                     "RollbackNodePoolUpgrade");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->RollbackNodePoolUpgrade(context, options, request));
}

StatusOr<google::container::v1::Operation>
ClusterManagerTracingStub::SetNodePoolManagement(
    grpc::ClientContext& context, Options const& options,
    google::container::v1::SetNodePoolManagementRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.container.v1.ClusterManager",
                                     "SetNodePoolManagement");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->SetNodePoolManagement(context, options, request));
}

StatusOr<google::container::v1::Operation> ClusterManagerTracingStub::SetLabels(
    grpc::ClientContext& context, Options const& options,
    google::container::v1::SetLabelsRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.container.v1.ClusterManager", "SetLabels");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->SetLabels(context, options, request));
}

StatusOr<google::container::v1::Operation>
ClusterManagerTracingStub::SetLegacyAbac(
    grpc::ClientContext& context, Options const& options,
    google::container::v1::SetLegacyAbacRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.container.v1.ClusterManager",
                                     "SetLegacyAbac");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->SetLegacyAbac(context, options, request));
}

StatusOr<google::container::v1::Operation>
ClusterManagerTracingStub::StartIPRotation(
    grpc::ClientContext& context, Options const& options,
    google::container::v1::StartIPRotationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.container.v1.ClusterManager",
                                     "StartIPRotation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->StartIPRotation(context, options, request));
}

StatusOr<google::container::v1::Operation>
ClusterManagerTracingStub::CompleteIPRotation(
    grpc::ClientContext& context, Options const& options,
    google::container::v1::CompleteIPRotationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.container.v1.ClusterManager",
                                     "CompleteIPRotation");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->CompleteIPRotation(context, options, request));
}

StatusOr<google::container::v1::Operation>
ClusterManagerTracingStub::SetNodePoolSize(
    grpc::ClientContext& context, Options const& options,
    google::container::v1::SetNodePoolSizeRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.container.v1.ClusterManager",
                                     "SetNodePoolSize");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->SetNodePoolSize(context, options, request));
}

StatusOr<google::container::v1::Operation>
ClusterManagerTracingStub::SetNetworkPolicy(
    grpc::ClientContext& context, Options const& options,
    google::container::v1::SetNetworkPolicyRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.container.v1.ClusterManager",
                                     "SetNetworkPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->SetNetworkPolicy(context, options, request));
}

StatusOr<google::container::v1::Operation>
ClusterManagerTracingStub::SetMaintenancePolicy(
    grpc::ClientContext& context, Options const& options,
    google::container::v1::SetMaintenancePolicyRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.container.v1.ClusterManager",
                                     "SetMaintenancePolicy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->SetMaintenancePolicy(context, options, request));
}

StatusOr<google::container::v1::ListUsableSubnetworksResponse>
ClusterManagerTracingStub::ListUsableSubnetworks(
    grpc::ClientContext& context, Options const& options,
    google::container::v1::ListUsableSubnetworksRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.container.v1.ClusterManager",
                                     "ListUsableSubnetworks");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->ListUsableSubnetworks(context, options, request));
}

StatusOr<google::container::v1::CheckAutopilotCompatibilityResponse>
ClusterManagerTracingStub::CheckAutopilotCompatibility(
    grpc::ClientContext& context, Options const& options,
    google::container::v1::CheckAutopilotCompatibilityRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.container.v1.ClusterManager",
                                     "CheckAutopilotCompatibility");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->CheckAutopilotCompatibility(context, options, request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<ClusterManagerStub> MakeClusterManagerTracingStub(
    std::shared_ptr<ClusterManagerStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<ClusterManagerTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace container_v1_internal
}  // namespace cloud
}  // namespace google
