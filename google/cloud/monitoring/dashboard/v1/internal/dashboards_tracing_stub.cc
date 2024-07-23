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
// source: google/monitoring/dashboard/v1/dashboards_service.proto

#include "google/cloud/monitoring/dashboard/v1/internal/dashboards_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace monitoring_dashboard_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

DashboardsServiceTracingStub::DashboardsServiceTracingStub(
    std::shared_ptr<DashboardsServiceStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::monitoring::dashboard::v1::Dashboard>
DashboardsServiceTracingStub::CreateDashboard(
    grpc::ClientContext& context, Options const& options,
    google::monitoring::dashboard::v1::CreateDashboardRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.monitoring.dashboard.v1.DashboardsService", "CreateDashboard");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateDashboard(context, options, request));
}

StatusOr<google::monitoring::dashboard::v1::ListDashboardsResponse>
DashboardsServiceTracingStub::ListDashboards(
    grpc::ClientContext& context, Options const& options,
    google::monitoring::dashboard::v1::ListDashboardsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.monitoring.dashboard.v1.DashboardsService", "ListDashboards");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListDashboards(context, options, request));
}

StatusOr<google::monitoring::dashboard::v1::Dashboard>
DashboardsServiceTracingStub::GetDashboard(
    grpc::ClientContext& context, Options const& options,
    google::monitoring::dashboard::v1::GetDashboardRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.monitoring.dashboard.v1.DashboardsService", "GetDashboard");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetDashboard(context, options, request));
}

Status DashboardsServiceTracingStub::DeleteDashboard(
    grpc::ClientContext& context, Options const& options,
    google::monitoring::dashboard::v1::DeleteDashboardRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.monitoring.dashboard.v1.DashboardsService", "DeleteDashboard");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteDashboard(context, options, request));
}

StatusOr<google::monitoring::dashboard::v1::Dashboard>
DashboardsServiceTracingStub::UpdateDashboard(
    grpc::ClientContext& context, Options const& options,
    google::monitoring::dashboard::v1::UpdateDashboardRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.monitoring.dashboard.v1.DashboardsService", "UpdateDashboard");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateDashboard(context, options, request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<DashboardsServiceStub> MakeDashboardsServiceTracingStub(
    std::shared_ptr<DashboardsServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<DashboardsServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring_dashboard_v1_internal
}  // namespace cloud
}  // namespace google
