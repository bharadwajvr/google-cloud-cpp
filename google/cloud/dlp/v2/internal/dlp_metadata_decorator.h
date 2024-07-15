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
// source: google/privacy/dlp/v2/dlp.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DLP_V2_INTERNAL_DLP_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DLP_V2_INTERNAL_DLP_METADATA_DECORATOR_H

#include "google/cloud/dlp/v2/internal/dlp_stub.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"
#include <map>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace dlp_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class DlpServiceMetadata : public DlpServiceStub {
 public:
  ~DlpServiceMetadata() override = default;
  DlpServiceMetadata(std::shared_ptr<DlpServiceStub> child,
                     std::multimap<std::string, std::string> fixed_metadata,
                     std::string api_client_header = "");

  StatusOr<google::privacy::dlp::v2::InspectContentResponse> InspectContent(
      grpc::ClientContext& context, Options const& options,
      google::privacy::dlp::v2::InspectContentRequest const& request) override;

  StatusOr<google::privacy::dlp::v2::RedactImageResponse> RedactImage(
      grpc::ClientContext& context, Options const& options,
      google::privacy::dlp::v2::RedactImageRequest const& request) override;

  StatusOr<google::privacy::dlp::v2::DeidentifyContentResponse>
  DeidentifyContent(grpc::ClientContext& context, Options const& options,
                    google::privacy::dlp::v2::DeidentifyContentRequest const&
                        request) override;

  StatusOr<google::privacy::dlp::v2::ReidentifyContentResponse>
  ReidentifyContent(grpc::ClientContext& context, Options const& options,
                    google::privacy::dlp::v2::ReidentifyContentRequest const&
                        request) override;

  StatusOr<google::privacy::dlp::v2::ListInfoTypesResponse> ListInfoTypes(
      grpc::ClientContext& context, Options const& options,
      google::privacy::dlp::v2::ListInfoTypesRequest const& request) override;

  StatusOr<google::privacy::dlp::v2::InspectTemplate> CreateInspectTemplate(
      grpc::ClientContext& context, Options const& options,
      google::privacy::dlp::v2::CreateInspectTemplateRequest const& request)
      override;

  StatusOr<google::privacy::dlp::v2::InspectTemplate> UpdateInspectTemplate(
      grpc::ClientContext& context, Options const& options,
      google::privacy::dlp::v2::UpdateInspectTemplateRequest const& request)
      override;

  StatusOr<google::privacy::dlp::v2::InspectTemplate> GetInspectTemplate(
      grpc::ClientContext& context, Options const& options,
      google::privacy::dlp::v2::GetInspectTemplateRequest const& request)
      override;

  StatusOr<google::privacy::dlp::v2::ListInspectTemplatesResponse>
  ListInspectTemplates(
      grpc::ClientContext& context, Options const& options,
      google::privacy::dlp::v2::ListInspectTemplatesRequest const& request)
      override;

  Status DeleteInspectTemplate(
      grpc::ClientContext& context, Options const& options,
      google::privacy::dlp::v2::DeleteInspectTemplateRequest const& request)
      override;

  StatusOr<google::privacy::dlp::v2::DeidentifyTemplate>
  CreateDeidentifyTemplate(
      grpc::ClientContext& context, Options const& options,
      google::privacy::dlp::v2::CreateDeidentifyTemplateRequest const& request)
      override;

  StatusOr<google::privacy::dlp::v2::DeidentifyTemplate>
  UpdateDeidentifyTemplate(
      grpc::ClientContext& context, Options const& options,
      google::privacy::dlp::v2::UpdateDeidentifyTemplateRequest const& request)
      override;

  StatusOr<google::privacy::dlp::v2::DeidentifyTemplate> GetDeidentifyTemplate(
      grpc::ClientContext& context, Options const& options,
      google::privacy::dlp::v2::GetDeidentifyTemplateRequest const& request)
      override;

  StatusOr<google::privacy::dlp::v2::ListDeidentifyTemplatesResponse>
  ListDeidentifyTemplates(
      grpc::ClientContext& context, Options const& options,
      google::privacy::dlp::v2::ListDeidentifyTemplatesRequest const& request)
      override;

  Status DeleteDeidentifyTemplate(
      grpc::ClientContext& context, Options const& options,
      google::privacy::dlp::v2::DeleteDeidentifyTemplateRequest const& request)
      override;

  StatusOr<google::privacy::dlp::v2::JobTrigger> CreateJobTrigger(
      grpc::ClientContext& context, Options const& options,
      google::privacy::dlp::v2::CreateJobTriggerRequest const& request)
      override;

  StatusOr<google::privacy::dlp::v2::JobTrigger> UpdateJobTrigger(
      grpc::ClientContext& context, Options const& options,
      google::privacy::dlp::v2::UpdateJobTriggerRequest const& request)
      override;

  StatusOr<google::privacy::dlp::v2::HybridInspectResponse>
  HybridInspectJobTrigger(
      grpc::ClientContext& context, Options const& options,
      google::privacy::dlp::v2::HybridInspectJobTriggerRequest const& request)
      override;

  StatusOr<google::privacy::dlp::v2::JobTrigger> GetJobTrigger(
      grpc::ClientContext& context, Options const& options,
      google::privacy::dlp::v2::GetJobTriggerRequest const& request) override;

  StatusOr<google::privacy::dlp::v2::ListJobTriggersResponse> ListJobTriggers(
      grpc::ClientContext& context, Options const& options,
      google::privacy::dlp::v2::ListJobTriggersRequest const& request) override;

  Status DeleteJobTrigger(
      grpc::ClientContext& context, Options const& options,
      google::privacy::dlp::v2::DeleteJobTriggerRequest const& request)
      override;

  StatusOr<google::privacy::dlp::v2::DlpJob> ActivateJobTrigger(
      grpc::ClientContext& context, Options const& options,
      google::privacy::dlp::v2::ActivateJobTriggerRequest const& request)
      override;

  StatusOr<google::privacy::dlp::v2::DiscoveryConfig> CreateDiscoveryConfig(
      grpc::ClientContext& context, Options const& options,
      google::privacy::dlp::v2::CreateDiscoveryConfigRequest const& request)
      override;

  StatusOr<google::privacy::dlp::v2::DiscoveryConfig> UpdateDiscoveryConfig(
      grpc::ClientContext& context, Options const& options,
      google::privacy::dlp::v2::UpdateDiscoveryConfigRequest const& request)
      override;

  StatusOr<google::privacy::dlp::v2::DiscoveryConfig> GetDiscoveryConfig(
      grpc::ClientContext& context, Options const& options,
      google::privacy::dlp::v2::GetDiscoveryConfigRequest const& request)
      override;

  StatusOr<google::privacy::dlp::v2::ListDiscoveryConfigsResponse>
  ListDiscoveryConfigs(
      grpc::ClientContext& context, Options const& options,
      google::privacy::dlp::v2::ListDiscoveryConfigsRequest const& request)
      override;

  Status DeleteDiscoveryConfig(
      grpc::ClientContext& context, Options const& options,
      google::privacy::dlp::v2::DeleteDiscoveryConfigRequest const& request)
      override;

  StatusOr<google::privacy::dlp::v2::DlpJob> CreateDlpJob(
      grpc::ClientContext& context, Options const& options,
      google::privacy::dlp::v2::CreateDlpJobRequest const& request) override;

  StatusOr<google::privacy::dlp::v2::ListDlpJobsResponse> ListDlpJobs(
      grpc::ClientContext& context, Options const& options,
      google::privacy::dlp::v2::ListDlpJobsRequest const& request) override;

  StatusOr<google::privacy::dlp::v2::DlpJob> GetDlpJob(
      grpc::ClientContext& context, Options const& options,
      google::privacy::dlp::v2::GetDlpJobRequest const& request) override;

  Status DeleteDlpJob(
      grpc::ClientContext& context, Options const& options,
      google::privacy::dlp::v2::DeleteDlpJobRequest const& request) override;

  Status CancelDlpJob(
      grpc::ClientContext& context, Options const& options,
      google::privacy::dlp::v2::CancelDlpJobRequest const& request) override;

  StatusOr<google::privacy::dlp::v2::StoredInfoType> CreateStoredInfoType(
      grpc::ClientContext& context, Options const& options,
      google::privacy::dlp::v2::CreateStoredInfoTypeRequest const& request)
      override;

  StatusOr<google::privacy::dlp::v2::StoredInfoType> UpdateStoredInfoType(
      grpc::ClientContext& context, Options const& options,
      google::privacy::dlp::v2::UpdateStoredInfoTypeRequest const& request)
      override;

  StatusOr<google::privacy::dlp::v2::StoredInfoType> GetStoredInfoType(
      grpc::ClientContext& context, Options const& options,
      google::privacy::dlp::v2::GetStoredInfoTypeRequest const& request)
      override;

  StatusOr<google::privacy::dlp::v2::ListStoredInfoTypesResponse>
  ListStoredInfoTypes(
      grpc::ClientContext& context, Options const& options,
      google::privacy::dlp::v2::ListStoredInfoTypesRequest const& request)
      override;

  Status DeleteStoredInfoType(
      grpc::ClientContext& context, Options const& options,
      google::privacy::dlp::v2::DeleteStoredInfoTypeRequest const& request)
      override;

  StatusOr<google::privacy::dlp::v2::ListProjectDataProfilesResponse>
  ListProjectDataProfiles(
      grpc::ClientContext& context, Options const& options,
      google::privacy::dlp::v2::ListProjectDataProfilesRequest const& request)
      override;

  StatusOr<google::privacy::dlp::v2::ListTableDataProfilesResponse>
  ListTableDataProfiles(
      grpc::ClientContext& context, Options const& options,
      google::privacy::dlp::v2::ListTableDataProfilesRequest const& request)
      override;

  StatusOr<google::privacy::dlp::v2::ListColumnDataProfilesResponse>
  ListColumnDataProfiles(
      grpc::ClientContext& context, Options const& options,
      google::privacy::dlp::v2::ListColumnDataProfilesRequest const& request)
      override;

  StatusOr<google::privacy::dlp::v2::ProjectDataProfile> GetProjectDataProfile(
      grpc::ClientContext& context, Options const& options,
      google::privacy::dlp::v2::GetProjectDataProfileRequest const& request)
      override;

  StatusOr<google::privacy::dlp::v2::ListFileStoreDataProfilesResponse>
  ListFileStoreDataProfiles(
      grpc::ClientContext& context, Options const& options,
      google::privacy::dlp::v2::ListFileStoreDataProfilesRequest const& request)
      override;

  StatusOr<google::privacy::dlp::v2::FileStoreDataProfile>
  GetFileStoreDataProfile(
      grpc::ClientContext& context, Options const& options,
      google::privacy::dlp::v2::GetFileStoreDataProfileRequest const& request)
      override;

  Status DeleteFileStoreDataProfile(
      grpc::ClientContext& context, Options const& options,
      google::privacy::dlp::v2::DeleteFileStoreDataProfileRequest const&
          request) override;

  StatusOr<google::privacy::dlp::v2::TableDataProfile> GetTableDataProfile(
      grpc::ClientContext& context, Options const& options,
      google::privacy::dlp::v2::GetTableDataProfileRequest const& request)
      override;

  StatusOr<google::privacy::dlp::v2::ColumnDataProfile> GetColumnDataProfile(
      grpc::ClientContext& context, Options const& options,
      google::privacy::dlp::v2::GetColumnDataProfileRequest const& request)
      override;

  Status DeleteTableDataProfile(
      grpc::ClientContext& context, Options const& options,
      google::privacy::dlp::v2::DeleteTableDataProfileRequest const& request)
      override;

  StatusOr<google::privacy::dlp::v2::HybridInspectResponse> HybridInspectDlpJob(
      grpc::ClientContext& context, Options const& options,
      google::privacy::dlp::v2::HybridInspectDlpJobRequest const& request)
      override;

  Status FinishDlpJob(
      grpc::ClientContext& context, Options const& options,
      google::privacy::dlp::v2::FinishDlpJobRequest const& request) override;

  StatusOr<google::privacy::dlp::v2::Connection> CreateConnection(
      grpc::ClientContext& context, Options const& options,
      google::privacy::dlp::v2::CreateConnectionRequest const& request)
      override;

  StatusOr<google::privacy::dlp::v2::Connection> GetConnection(
      grpc::ClientContext& context, Options const& options,
      google::privacy::dlp::v2::GetConnectionRequest const& request) override;

  StatusOr<google::privacy::dlp::v2::ListConnectionsResponse> ListConnections(
      grpc::ClientContext& context, Options const& options,
      google::privacy::dlp::v2::ListConnectionsRequest const& request) override;

  StatusOr<google::privacy::dlp::v2::SearchConnectionsResponse>
  SearchConnections(grpc::ClientContext& context, Options const& options,
                    google::privacy::dlp::v2::SearchConnectionsRequest const&
                        request) override;

  Status DeleteConnection(
      grpc::ClientContext& context, Options const& options,
      google::privacy::dlp::v2::DeleteConnectionRequest const& request)
      override;

  StatusOr<google::privacy::dlp::v2::Connection> UpdateConnection(
      grpc::ClientContext& context, Options const& options,
      google::privacy::dlp::v2::UpdateConnectionRequest const& request)
      override;

 private:
  void SetMetadata(grpc::ClientContext& context, Options const& options,
                   std::string const& request_params);
  void SetMetadata(grpc::ClientContext& context, Options const& options);

  std::shared_ptr<DlpServiceStub> child_;
  std::multimap<std::string, std::string> fixed_metadata_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dlp_v2_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DLP_V2_INTERNAL_DLP_METADATA_DECORATOR_H
