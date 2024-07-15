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
// source: google/cloud/securitycenter/v1/securitycenter_service.proto

#include "google/cloud/securitycenter/v1/internal/security_center_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace securitycenter_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

SecurityCenterTracingConnection::SecurityCenterTracingConnection(
    std::shared_ptr<securitycenter_v1::SecurityCenterConnection> child)
    : child_(std::move(child)) {}

future<StatusOr<google::cloud::securitycenter::v1::BulkMuteFindingsResponse>>
SecurityCenterTracingConnection::BulkMuteFindings(
    google::cloud::securitycenter::v1::BulkMuteFindingsRequest const& request) {
  auto span = internal::MakeSpan(
      "securitycenter_v1::SecurityCenterConnection::BulkMuteFindings");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->BulkMuteFindings(request));
}

StatusOr<google::longrunning::Operation>
SecurityCenterTracingConnection::BulkMuteFindings(
    ExperimentalTag, NoAwaitTag,
    google::cloud::securitycenter::v1::BulkMuteFindingsRequest const& request) {
  auto span = internal::MakeSpan(
      "securitycenter_v1::SecurityCenterConnection::BulkMuteFindings");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span,
      child_->BulkMuteFindings(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::securitycenter::v1::BulkMuteFindingsResponse>>
SecurityCenterTracingConnection::BulkMuteFindings(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "securitycenter_v1::SecurityCenterConnection::BulkMuteFindings");
  internal::OTelScope scope(span);
  return internal::EndSpan(
      std::move(span), child_->BulkMuteFindings(ExperimentalTag{}, operation));
}

StatusOr<google::cloud::securitycenter::v1::SecurityHealthAnalyticsCustomModule>
SecurityCenterTracingConnection::CreateSecurityHealthAnalyticsCustomModule(
    google::cloud::securitycenter::v1::
        CreateSecurityHealthAnalyticsCustomModuleRequest const& request) {
  auto span = internal::MakeSpan(
      "securitycenter_v1::SecurityCenterConnection::"
      "CreateSecurityHealthAnalyticsCustomModule");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(
      *span, child_->CreateSecurityHealthAnalyticsCustomModule(request));
}

StatusOr<google::cloud::securitycenter::v1::Source>
SecurityCenterTracingConnection::CreateSource(
    google::cloud::securitycenter::v1::CreateSourceRequest const& request) {
  auto span = internal::MakeSpan(
      "securitycenter_v1::SecurityCenterConnection::CreateSource");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateSource(request));
}

StatusOr<google::cloud::securitycenter::v1::Finding>
SecurityCenterTracingConnection::CreateFinding(
    google::cloud::securitycenter::v1::CreateFindingRequest const& request) {
  auto span = internal::MakeSpan(
      "securitycenter_v1::SecurityCenterConnection::CreateFinding");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateFinding(request));
}

StatusOr<google::cloud::securitycenter::v1::MuteConfig>
SecurityCenterTracingConnection::CreateMuteConfig(
    google::cloud::securitycenter::v1::CreateMuteConfigRequest const& request) {
  auto span = internal::MakeSpan(
      "securitycenter_v1::SecurityCenterConnection::CreateMuteConfig");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateMuteConfig(request));
}

StatusOr<google::cloud::securitycenter::v1::NotificationConfig>
SecurityCenterTracingConnection::CreateNotificationConfig(
    google::cloud::securitycenter::v1::CreateNotificationConfigRequest const&
        request) {
  auto span = internal::MakeSpan(
      "securitycenter_v1::SecurityCenterConnection::CreateNotificationConfig");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateNotificationConfig(request));
}

Status SecurityCenterTracingConnection::DeleteMuteConfig(
    google::cloud::securitycenter::v1::DeleteMuteConfigRequest const& request) {
  auto span = internal::MakeSpan(
      "securitycenter_v1::SecurityCenterConnection::DeleteMuteConfig");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteMuteConfig(request));
}

Status SecurityCenterTracingConnection::DeleteNotificationConfig(
    google::cloud::securitycenter::v1::DeleteNotificationConfigRequest const&
        request) {
  auto span = internal::MakeSpan(
      "securitycenter_v1::SecurityCenterConnection::DeleteNotificationConfig");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteNotificationConfig(request));
}

Status
SecurityCenterTracingConnection::DeleteSecurityHealthAnalyticsCustomModule(
    google::cloud::securitycenter::v1::
        DeleteSecurityHealthAnalyticsCustomModuleRequest const& request) {
  auto span = internal::MakeSpan(
      "securitycenter_v1::SecurityCenterConnection::"
      "DeleteSecurityHealthAnalyticsCustomModule");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(
      *span, child_->DeleteSecurityHealthAnalyticsCustomModule(request));
}

StatusOr<google::cloud::securitycenter::v1::Simulation>
SecurityCenterTracingConnection::GetSimulation(
    google::cloud::securitycenter::v1::GetSimulationRequest const& request) {
  auto span = internal::MakeSpan(
      "securitycenter_v1::SecurityCenterConnection::GetSimulation");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetSimulation(request));
}

StatusOr<google::cloud::securitycenter::v1::ValuedResource>
SecurityCenterTracingConnection::GetValuedResource(
    google::cloud::securitycenter::v1::GetValuedResourceRequest const&
        request) {
  auto span = internal::MakeSpan(
      "securitycenter_v1::SecurityCenterConnection::GetValuedResource");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetValuedResource(request));
}

StatusOr<google::cloud::securitycenter::v1::BigQueryExport>
SecurityCenterTracingConnection::GetBigQueryExport(
    google::cloud::securitycenter::v1::GetBigQueryExportRequest const&
        request) {
  auto span = internal::MakeSpan(
      "securitycenter_v1::SecurityCenterConnection::GetBigQueryExport");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetBigQueryExport(request));
}

StatusOr<google::iam::v1::Policy> SecurityCenterTracingConnection::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "securitycenter_v1::SecurityCenterConnection::GetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetIamPolicy(request));
}

StatusOr<google::cloud::securitycenter::v1::MuteConfig>
SecurityCenterTracingConnection::GetMuteConfig(
    google::cloud::securitycenter::v1::GetMuteConfigRequest const& request) {
  auto span = internal::MakeSpan(
      "securitycenter_v1::SecurityCenterConnection::GetMuteConfig");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetMuteConfig(request));
}

StatusOr<google::cloud::securitycenter::v1::NotificationConfig>
SecurityCenterTracingConnection::GetNotificationConfig(
    google::cloud::securitycenter::v1::GetNotificationConfigRequest const&
        request) {
  auto span = internal::MakeSpan(
      "securitycenter_v1::SecurityCenterConnection::GetNotificationConfig");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetNotificationConfig(request));
}

StatusOr<google::cloud::securitycenter::v1::OrganizationSettings>
SecurityCenterTracingConnection::GetOrganizationSettings(
    google::cloud::securitycenter::v1::GetOrganizationSettingsRequest const&
        request) {
  auto span = internal::MakeSpan(
      "securitycenter_v1::SecurityCenterConnection::GetOrganizationSettings");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetOrganizationSettings(request));
}

StatusOr<google::cloud::securitycenter::v1::
             EffectiveSecurityHealthAnalyticsCustomModule>
SecurityCenterTracingConnection::
    GetEffectiveSecurityHealthAnalyticsCustomModule(
        google::cloud::securitycenter::v1::
            GetEffectiveSecurityHealthAnalyticsCustomModuleRequest const&
                request) {
  auto span = internal::MakeSpan(
      "securitycenter_v1::SecurityCenterConnection::"
      "GetEffectiveSecurityHealthAnalyticsCustomModule");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(
      *span, child_->GetEffectiveSecurityHealthAnalyticsCustomModule(request));
}

StatusOr<google::cloud::securitycenter::v1::SecurityHealthAnalyticsCustomModule>
SecurityCenterTracingConnection::GetSecurityHealthAnalyticsCustomModule(
    google::cloud::securitycenter::v1::
        GetSecurityHealthAnalyticsCustomModuleRequest const& request) {
  auto span = internal::MakeSpan(
      "securitycenter_v1::SecurityCenterConnection::"
      "GetSecurityHealthAnalyticsCustomModule");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(
      *span, child_->GetSecurityHealthAnalyticsCustomModule(request));
}

StatusOr<google::cloud::securitycenter::v1::Source>
SecurityCenterTracingConnection::GetSource(
    google::cloud::securitycenter::v1::GetSourceRequest const& request) {
  auto span = internal::MakeSpan(
      "securitycenter_v1::SecurityCenterConnection::GetSource");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetSource(request));
}

StreamRange<google::cloud::securitycenter::v1::GroupResult>
SecurityCenterTracingConnection::GroupAssets(
    google::cloud::securitycenter::v1::GroupAssetsRequest request) {
  auto span = internal::MakeSpan(
      "securitycenter_v1::SecurityCenterConnection::GroupAssets");
  internal::OTelScope scope(span);
  auto sr = child_->GroupAssets(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::securitycenter::v1::GroupResult>(std::move(span),
                                                      std::move(sr));
}

StreamRange<google::cloud::securitycenter::v1::GroupResult>
SecurityCenterTracingConnection::GroupFindings(
    google::cloud::securitycenter::v1::GroupFindingsRequest request) {
  auto span = internal::MakeSpan(
      "securitycenter_v1::SecurityCenterConnection::GroupFindings");
  internal::OTelScope scope(span);
  auto sr = child_->GroupFindings(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::securitycenter::v1::GroupResult>(std::move(span),
                                                      std::move(sr));
}

StreamRange<
    google::cloud::securitycenter::v1::ListAssetsResponse::ListAssetsResult>
SecurityCenterTracingConnection::ListAssets(
    google::cloud::securitycenter::v1::ListAssetsRequest request) {
  auto span = internal::MakeSpan(
      "securitycenter_v1::SecurityCenterConnection::ListAssets");
  internal::OTelScope scope(span);
  auto sr = child_->ListAssets(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::securitycenter::v1::ListAssetsResponse::ListAssetsResult>(
      std::move(span), std::move(sr));
}

StreamRange<
    google::cloud::securitycenter::v1::SecurityHealthAnalyticsCustomModule>
SecurityCenterTracingConnection::
    ListDescendantSecurityHealthAnalyticsCustomModules(
        google::cloud::securitycenter::v1::
            ListDescendantSecurityHealthAnalyticsCustomModulesRequest request) {
  auto span = internal::MakeSpan(
      "securitycenter_v1::SecurityCenterConnection::"
      "ListDescendantSecurityHealthAnalyticsCustomModules");
  internal::OTelScope scope(span);
  auto sr = child_->ListDescendantSecurityHealthAnalyticsCustomModules(
      std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::securitycenter::v1::SecurityHealthAnalyticsCustomModule>(
      std::move(span), std::move(sr));
}

StreamRange<
    google::cloud::securitycenter::v1::ListFindingsResponse::ListFindingsResult>
SecurityCenterTracingConnection::ListFindings(
    google::cloud::securitycenter::v1::ListFindingsRequest request) {
  auto span = internal::MakeSpan(
      "securitycenter_v1::SecurityCenterConnection::ListFindings");
  internal::OTelScope scope(span);
  auto sr = child_->ListFindings(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::securitycenter::v1::ListFindingsResponse::
          ListFindingsResult>(std::move(span), std::move(sr));
}

StreamRange<google::cloud::securitycenter::v1::MuteConfig>
SecurityCenterTracingConnection::ListMuteConfigs(
    google::cloud::securitycenter::v1::ListMuteConfigsRequest request) {
  auto span = internal::MakeSpan(
      "securitycenter_v1::SecurityCenterConnection::ListMuteConfigs");
  internal::OTelScope scope(span);
  auto sr = child_->ListMuteConfigs(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::securitycenter::v1::MuteConfig>(std::move(span),
                                                     std::move(sr));
}

StreamRange<google::cloud::securitycenter::v1::NotificationConfig>
SecurityCenterTracingConnection::ListNotificationConfigs(
    google::cloud::securitycenter::v1::ListNotificationConfigsRequest request) {
  auto span = internal::MakeSpan(
      "securitycenter_v1::SecurityCenterConnection::ListNotificationConfigs");
  internal::OTelScope scope(span);
  auto sr = child_->ListNotificationConfigs(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::securitycenter::v1::NotificationConfig>(std::move(span),
                                                             std::move(sr));
}

StreamRange<google::cloud::securitycenter::v1::
                EffectiveSecurityHealthAnalyticsCustomModule>
SecurityCenterTracingConnection::
    ListEffectiveSecurityHealthAnalyticsCustomModules(
        google::cloud::securitycenter::v1::
            ListEffectiveSecurityHealthAnalyticsCustomModulesRequest request) {
  auto span = internal::MakeSpan(
      "securitycenter_v1::SecurityCenterConnection::"
      "ListEffectiveSecurityHealthAnalyticsCustomModules");
  internal::OTelScope scope(span);
  auto sr = child_->ListEffectiveSecurityHealthAnalyticsCustomModules(
      std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::securitycenter::v1::
          EffectiveSecurityHealthAnalyticsCustomModule>(std::move(span),
                                                        std::move(sr));
}

StreamRange<
    google::cloud::securitycenter::v1::SecurityHealthAnalyticsCustomModule>
SecurityCenterTracingConnection::ListSecurityHealthAnalyticsCustomModules(
    google::cloud::securitycenter::v1::
        ListSecurityHealthAnalyticsCustomModulesRequest request) {
  auto span = internal::MakeSpan(
      "securitycenter_v1::SecurityCenterConnection::"
      "ListSecurityHealthAnalyticsCustomModules");
  internal::OTelScope scope(span);
  auto sr =
      child_->ListSecurityHealthAnalyticsCustomModules(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::securitycenter::v1::SecurityHealthAnalyticsCustomModule>(
      std::move(span), std::move(sr));
}

StreamRange<google::cloud::securitycenter::v1::Source>
SecurityCenterTracingConnection::ListSources(
    google::cloud::securitycenter::v1::ListSourcesRequest request) {
  auto span = internal::MakeSpan(
      "securitycenter_v1::SecurityCenterConnection::ListSources");
  internal::OTelScope scope(span);
  auto sr = child_->ListSources(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::securitycenter::v1::Source>(std::move(span),
                                                 std::move(sr));
}

future<StatusOr<google::cloud::securitycenter::v1::RunAssetDiscoveryResponse>>
SecurityCenterTracingConnection::RunAssetDiscovery(
    google::cloud::securitycenter::v1::RunAssetDiscoveryRequest const&
        request) {
  auto span = internal::MakeSpan(
      "securitycenter_v1::SecurityCenterConnection::RunAssetDiscovery");
  internal::OTelScope scope(span);
  return internal::EndSpan(std::move(span), child_->RunAssetDiscovery(request));
}

StatusOr<google::longrunning::Operation>
SecurityCenterTracingConnection::RunAssetDiscovery(
    ExperimentalTag, NoAwaitTag,
    google::cloud::securitycenter::v1::RunAssetDiscoveryRequest const&
        request) {
  auto span = internal::MakeSpan(
      "securitycenter_v1::SecurityCenterConnection::RunAssetDiscovery");
  opentelemetry::trace::Scope scope(span);
  return internal::EndSpan(
      *span,
      child_->RunAssetDiscovery(ExperimentalTag{}, NoAwaitTag{}, request));
}

future<StatusOr<google::cloud::securitycenter::v1::RunAssetDiscoveryResponse>>
SecurityCenterTracingConnection::RunAssetDiscovery(
    ExperimentalTag, google::longrunning::Operation const& operation) {
  auto span = internal::MakeSpan(
      "securitycenter_v1::SecurityCenterConnection::RunAssetDiscovery");
  internal::OTelScope scope(span);
  return internal::EndSpan(
      std::move(span), child_->RunAssetDiscovery(ExperimentalTag{}, operation));
}

StatusOr<google::cloud::securitycenter::v1::Finding>
SecurityCenterTracingConnection::SetFindingState(
    google::cloud::securitycenter::v1::SetFindingStateRequest const& request) {
  auto span = internal::MakeSpan(
      "securitycenter_v1::SecurityCenterConnection::SetFindingState");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->SetFindingState(request));
}

StatusOr<google::cloud::securitycenter::v1::Finding>
SecurityCenterTracingConnection::SetMute(
    google::cloud::securitycenter::v1::SetMuteRequest const& request) {
  auto span = internal::MakeSpan(
      "securitycenter_v1::SecurityCenterConnection::SetMute");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->SetMute(request));
}

StatusOr<google::iam::v1::Policy> SecurityCenterTracingConnection::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const& request) {
  auto span = internal::MakeSpan(
      "securitycenter_v1::SecurityCenterConnection::SetIamPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->SetIamPolicy(request));
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
SecurityCenterTracingConnection::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const& request) {
  auto span = internal::MakeSpan(
      "securitycenter_v1::SecurityCenterConnection::TestIamPermissions");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->TestIamPermissions(request));
}

StatusOr<google::cloud::securitycenter::v1::
             SimulateSecurityHealthAnalyticsCustomModuleResponse>
SecurityCenterTracingConnection::SimulateSecurityHealthAnalyticsCustomModule(
    google::cloud::securitycenter::v1::
        SimulateSecurityHealthAnalyticsCustomModuleRequest const& request) {
  auto span = internal::MakeSpan(
      "securitycenter_v1::SecurityCenterConnection::"
      "SimulateSecurityHealthAnalyticsCustomModule");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(
      *span, child_->SimulateSecurityHealthAnalyticsCustomModule(request));
}

StatusOr<google::cloud::securitycenter::v1::ExternalSystem>
SecurityCenterTracingConnection::UpdateExternalSystem(
    google::cloud::securitycenter::v1::UpdateExternalSystemRequest const&
        request) {
  auto span = internal::MakeSpan(
      "securitycenter_v1::SecurityCenterConnection::UpdateExternalSystem");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateExternalSystem(request));
}

StatusOr<google::cloud::securitycenter::v1::Finding>
SecurityCenterTracingConnection::UpdateFinding(
    google::cloud::securitycenter::v1::UpdateFindingRequest const& request) {
  auto span = internal::MakeSpan(
      "securitycenter_v1::SecurityCenterConnection::UpdateFinding");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateFinding(request));
}

StatusOr<google::cloud::securitycenter::v1::MuteConfig>
SecurityCenterTracingConnection::UpdateMuteConfig(
    google::cloud::securitycenter::v1::UpdateMuteConfigRequest const& request) {
  auto span = internal::MakeSpan(
      "securitycenter_v1::SecurityCenterConnection::UpdateMuteConfig");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateMuteConfig(request));
}

StatusOr<google::cloud::securitycenter::v1::NotificationConfig>
SecurityCenterTracingConnection::UpdateNotificationConfig(
    google::cloud::securitycenter::v1::UpdateNotificationConfigRequest const&
        request) {
  auto span = internal::MakeSpan(
      "securitycenter_v1::SecurityCenterConnection::UpdateNotificationConfig");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateNotificationConfig(request));
}

StatusOr<google::cloud::securitycenter::v1::OrganizationSettings>
SecurityCenterTracingConnection::UpdateOrganizationSettings(
    google::cloud::securitycenter::v1::UpdateOrganizationSettingsRequest const&
        request) {
  auto span = internal::MakeSpan(
      "securitycenter_v1::SecurityCenterConnection::"
      "UpdateOrganizationSettings");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateOrganizationSettings(request));
}

StatusOr<google::cloud::securitycenter::v1::SecurityHealthAnalyticsCustomModule>
SecurityCenterTracingConnection::UpdateSecurityHealthAnalyticsCustomModule(
    google::cloud::securitycenter::v1::
        UpdateSecurityHealthAnalyticsCustomModuleRequest const& request) {
  auto span = internal::MakeSpan(
      "securitycenter_v1::SecurityCenterConnection::"
      "UpdateSecurityHealthAnalyticsCustomModule");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(
      *span, child_->UpdateSecurityHealthAnalyticsCustomModule(request));
}

StatusOr<google::cloud::securitycenter::v1::Source>
SecurityCenterTracingConnection::UpdateSource(
    google::cloud::securitycenter::v1::UpdateSourceRequest const& request) {
  auto span = internal::MakeSpan(
      "securitycenter_v1::SecurityCenterConnection::UpdateSource");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateSource(request));
}

StatusOr<google::cloud::securitycenter::v1::SecurityMarks>
SecurityCenterTracingConnection::UpdateSecurityMarks(
    google::cloud::securitycenter::v1::UpdateSecurityMarksRequest const&
        request) {
  auto span = internal::MakeSpan(
      "securitycenter_v1::SecurityCenterConnection::UpdateSecurityMarks");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateSecurityMarks(request));
}

StatusOr<google::cloud::securitycenter::v1::BigQueryExport>
SecurityCenterTracingConnection::CreateBigQueryExport(
    google::cloud::securitycenter::v1::CreateBigQueryExportRequest const&
        request) {
  auto span = internal::MakeSpan(
      "securitycenter_v1::SecurityCenterConnection::CreateBigQueryExport");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateBigQueryExport(request));
}

Status SecurityCenterTracingConnection::DeleteBigQueryExport(
    google::cloud::securitycenter::v1::DeleteBigQueryExportRequest const&
        request) {
  auto span = internal::MakeSpan(
      "securitycenter_v1::SecurityCenterConnection::DeleteBigQueryExport");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteBigQueryExport(request));
}

StatusOr<google::cloud::securitycenter::v1::BigQueryExport>
SecurityCenterTracingConnection::UpdateBigQueryExport(
    google::cloud::securitycenter::v1::UpdateBigQueryExportRequest const&
        request) {
  auto span = internal::MakeSpan(
      "securitycenter_v1::SecurityCenterConnection::UpdateBigQueryExport");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateBigQueryExport(request));
}

StreamRange<google::cloud::securitycenter::v1::BigQueryExport>
SecurityCenterTracingConnection::ListBigQueryExports(
    google::cloud::securitycenter::v1::ListBigQueryExportsRequest request) {
  auto span = internal::MakeSpan(
      "securitycenter_v1::SecurityCenterConnection::ListBigQueryExports");
  internal::OTelScope scope(span);
  auto sr = child_->ListBigQueryExports(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::securitycenter::v1::BigQueryExport>(std::move(span),
                                                         std::move(sr));
}

StatusOr<google::cloud::securitycenter::v1::EventThreatDetectionCustomModule>
SecurityCenterTracingConnection::CreateEventThreatDetectionCustomModule(
    google::cloud::securitycenter::v1::
        CreateEventThreatDetectionCustomModuleRequest const& request) {
  auto span = internal::MakeSpan(
      "securitycenter_v1::SecurityCenterConnection::"
      "CreateEventThreatDetectionCustomModule");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(
      *span, child_->CreateEventThreatDetectionCustomModule(request));
}

Status SecurityCenterTracingConnection::DeleteEventThreatDetectionCustomModule(
    google::cloud::securitycenter::v1::
        DeleteEventThreatDetectionCustomModuleRequest const& request) {
  auto span = internal::MakeSpan(
      "securitycenter_v1::SecurityCenterConnection::"
      "DeleteEventThreatDetectionCustomModule");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(
      *span, child_->DeleteEventThreatDetectionCustomModule(request));
}

StatusOr<google::cloud::securitycenter::v1::EventThreatDetectionCustomModule>
SecurityCenterTracingConnection::GetEventThreatDetectionCustomModule(
    google::cloud::securitycenter::v1::
        GetEventThreatDetectionCustomModuleRequest const& request) {
  auto span = internal::MakeSpan(
      "securitycenter_v1::SecurityCenterConnection::"
      "GetEventThreatDetectionCustomModule");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(
      *span, child_->GetEventThreatDetectionCustomModule(request));
}

StreamRange<google::cloud::securitycenter::v1::EventThreatDetectionCustomModule>
SecurityCenterTracingConnection::
    ListDescendantEventThreatDetectionCustomModules(
        google::cloud::securitycenter::v1::
            ListDescendantEventThreatDetectionCustomModulesRequest request) {
  auto span = internal::MakeSpan(
      "securitycenter_v1::SecurityCenterConnection::"
      "ListDescendantEventThreatDetectionCustomModules");
  internal::OTelScope scope(span);
  auto sr = child_->ListDescendantEventThreatDetectionCustomModules(
      std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::securitycenter::v1::EventThreatDetectionCustomModule>(
      std::move(span), std::move(sr));
}

StreamRange<google::cloud::securitycenter::v1::EventThreatDetectionCustomModule>
SecurityCenterTracingConnection::ListEventThreatDetectionCustomModules(
    google::cloud::securitycenter::v1::
        ListEventThreatDetectionCustomModulesRequest request) {
  auto span = internal::MakeSpan(
      "securitycenter_v1::SecurityCenterConnection::"
      "ListEventThreatDetectionCustomModules");
  internal::OTelScope scope(span);
  auto sr = child_->ListEventThreatDetectionCustomModules(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::securitycenter::v1::EventThreatDetectionCustomModule>(
      std::move(span), std::move(sr));
}

StatusOr<google::cloud::securitycenter::v1::EventThreatDetectionCustomModule>
SecurityCenterTracingConnection::UpdateEventThreatDetectionCustomModule(
    google::cloud::securitycenter::v1::
        UpdateEventThreatDetectionCustomModuleRequest const& request) {
  auto span = internal::MakeSpan(
      "securitycenter_v1::SecurityCenterConnection::"
      "UpdateEventThreatDetectionCustomModule");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(
      *span, child_->UpdateEventThreatDetectionCustomModule(request));
}

StatusOr<google::cloud::securitycenter::v1::
             ValidateEventThreatDetectionCustomModuleResponse>
SecurityCenterTracingConnection::ValidateEventThreatDetectionCustomModule(
    google::cloud::securitycenter::v1::
        ValidateEventThreatDetectionCustomModuleRequest const& request) {
  auto span = internal::MakeSpan(
      "securitycenter_v1::SecurityCenterConnection::"
      "ValidateEventThreatDetectionCustomModule");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(
      *span, child_->ValidateEventThreatDetectionCustomModule(request));
}

StatusOr<google::cloud::securitycenter::v1::
             EffectiveEventThreatDetectionCustomModule>
SecurityCenterTracingConnection::GetEffectiveEventThreatDetectionCustomModule(
    google::cloud::securitycenter::v1::
        GetEffectiveEventThreatDetectionCustomModuleRequest const& request) {
  auto span = internal::MakeSpan(
      "securitycenter_v1::SecurityCenterConnection::"
      "GetEffectiveEventThreatDetectionCustomModule");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(
      *span, child_->GetEffectiveEventThreatDetectionCustomModule(request));
}

StreamRange<google::cloud::securitycenter::v1::
                EffectiveEventThreatDetectionCustomModule>
SecurityCenterTracingConnection::ListEffectiveEventThreatDetectionCustomModules(
    google::cloud::securitycenter::v1::
        ListEffectiveEventThreatDetectionCustomModulesRequest request) {
  auto span = internal::MakeSpan(
      "securitycenter_v1::SecurityCenterConnection::"
      "ListEffectiveEventThreatDetectionCustomModules");
  internal::OTelScope scope(span);
  auto sr = child_->ListEffectiveEventThreatDetectionCustomModules(
      std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::securitycenter::v1::
          EffectiveEventThreatDetectionCustomModule>(std::move(span),
                                                     std::move(sr));
}

StatusOr<
    google::cloud::securitycenter::v1::BatchCreateResourceValueConfigsResponse>
SecurityCenterTracingConnection::BatchCreateResourceValueConfigs(
    google::cloud::securitycenter::v1::
        BatchCreateResourceValueConfigsRequest const& request) {
  auto span = internal::MakeSpan(
      "securitycenter_v1::SecurityCenterConnection::"
      "BatchCreateResourceValueConfigs");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span,
                           child_->BatchCreateResourceValueConfigs(request));
}

Status SecurityCenterTracingConnection::DeleteResourceValueConfig(
    google::cloud::securitycenter::v1::DeleteResourceValueConfigRequest const&
        request) {
  auto span = internal::MakeSpan(
      "securitycenter_v1::SecurityCenterConnection::DeleteResourceValueConfig");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteResourceValueConfig(request));
}

StatusOr<google::cloud::securitycenter::v1::ResourceValueConfig>
SecurityCenterTracingConnection::GetResourceValueConfig(
    google::cloud::securitycenter::v1::GetResourceValueConfigRequest const&
        request) {
  auto span = internal::MakeSpan(
      "securitycenter_v1::SecurityCenterConnection::GetResourceValueConfig");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetResourceValueConfig(request));
}

StreamRange<google::cloud::securitycenter::v1::ResourceValueConfig>
SecurityCenterTracingConnection::ListResourceValueConfigs(
    google::cloud::securitycenter::v1::ListResourceValueConfigsRequest
        request) {
  auto span = internal::MakeSpan(
      "securitycenter_v1::SecurityCenterConnection::ListResourceValueConfigs");
  internal::OTelScope scope(span);
  auto sr = child_->ListResourceValueConfigs(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::securitycenter::v1::ResourceValueConfig>(std::move(span),
                                                              std::move(sr));
}

StatusOr<google::cloud::securitycenter::v1::ResourceValueConfig>
SecurityCenterTracingConnection::UpdateResourceValueConfig(
    google::cloud::securitycenter::v1::UpdateResourceValueConfigRequest const&
        request) {
  auto span = internal::MakeSpan(
      "securitycenter_v1::SecurityCenterConnection::UpdateResourceValueConfig");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateResourceValueConfig(request));
}

StreamRange<google::cloud::securitycenter::v1::ValuedResource>
SecurityCenterTracingConnection::ListValuedResources(
    google::cloud::securitycenter::v1::ListValuedResourcesRequest request) {
  auto span = internal::MakeSpan(
      "securitycenter_v1::SecurityCenterConnection::ListValuedResources");
  internal::OTelScope scope(span);
  auto sr = child_->ListValuedResources(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::securitycenter::v1::ValuedResource>(std::move(span),
                                                         std::move(sr));
}

StreamRange<google::cloud::securitycenter::v1::AttackPath>
SecurityCenterTracingConnection::ListAttackPaths(
    google::cloud::securitycenter::v1::ListAttackPathsRequest request) {
  auto span = internal::MakeSpan(
      "securitycenter_v1::SecurityCenterConnection::ListAttackPaths");
  internal::OTelScope scope(span);
  auto sr = child_->ListAttackPaths(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::securitycenter::v1::AttackPath>(std::move(span),
                                                     std::move(sr));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<securitycenter_v1::SecurityCenterConnection>
MakeSecurityCenterTracingConnection(
    std::shared_ptr<securitycenter_v1::SecurityCenterConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<SecurityCenterTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace securitycenter_v1_internal
}  // namespace cloud
}  // namespace google
