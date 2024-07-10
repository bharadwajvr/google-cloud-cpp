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
// source: google/cloud/bigquery/v2/dataset.proto

#include "google/cloud/bigquerycontrol/v2/internal/dataset_rest_connection_impl.h"
#include "google/cloud/bigquerycontrol/v2/internal/dataset_rest_stub_factory.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/rest_retry_loop.h"
#include "google/cloud/rest_options.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace bigquerycontrol_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DatasetServiceRestConnectionImpl::DatasetServiceRestConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<bigquerycontrol_v2_internal::DatasetServiceRestStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      DatasetServiceConnection::options())) {}

StatusOr<google::cloud::bigquery::v2::Dataset>
DatasetServiceRestConnectionImpl::GetDataset(
    google::cloud::bigquery::v2::GetDatasetRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetDataset(request),
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::bigquery::v2::GetDatasetRequest const& request) {
        return stub_->GetDataset(rest_context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::bigquery::v2::Dataset>
DatasetServiceRestConnectionImpl::InsertDataset(
    google::cloud::bigquery::v2::InsertDatasetRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->InsertDataset(request),
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::bigquery::v2::InsertDatasetRequest const& request) {
        return stub_->InsertDataset(rest_context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::bigquery::v2::Dataset>
DatasetServiceRestConnectionImpl::PatchDataset(
    google::cloud::bigquery::v2::UpdateOrPatchDatasetRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->PatchDataset(request),
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::bigquery::v2::UpdateOrPatchDatasetRequest const&
                 request) {
        return stub_->PatchDataset(rest_context, options, request);
      },
      *current, request, __func__);
}

StatusOr<google::cloud::bigquery::v2::Dataset>
DatasetServiceRestConnectionImpl::UpdateDataset(
    google::cloud::bigquery::v2::UpdateOrPatchDatasetRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateDataset(request),
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::bigquery::v2::UpdateOrPatchDatasetRequest const&
                 request) {
        return stub_->UpdateDataset(rest_context, options, request);
      },
      *current, request, __func__);
}

Status DatasetServiceRestConnectionImpl::DeleteDataset(
    google::cloud::bigquery::v2::DeleteDatasetRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteDataset(request),
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::bigquery::v2::DeleteDatasetRequest const& request) {
        return stub_->DeleteDataset(rest_context, options, request);
      },
      *current, request, __func__);
}

StreamRange<google::cloud::bigquery::v2::ListFormatDataset>
DatasetServiceRestConnectionImpl::ListDatasets(
    google::cloud::bigquery::v2::ListDatasetsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListDatasets(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::bigquery::v2::ListFormatDataset>>(
      current, std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<bigquerycontrol_v2::DatasetServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          Options const& options,
          google::cloud::bigquery::v2::ListDatasetsRequest const& r) {
        return google::cloud::rest_internal::RestRetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](rest_internal::RestContext& rest_context,
                   Options const& options,
                   google::cloud::bigquery::v2::ListDatasetsRequest const&
                       request) {
              return stub->ListDatasets(rest_context, options, request);
            },
            options, r, function_name);
      },
      [](google::cloud::bigquery::v2::DatasetList r) {
        std::vector<google::cloud::bigquery::v2::ListFormatDataset> result(
            r.datasets().size());
        auto& messages = *r.mutable_datasets();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::bigquery::v2::Dataset>
DatasetServiceRestConnectionImpl::UndeleteDataset(
    google::cloud::bigquery::v2::UndeleteDatasetRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::rest_internal::RestRetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UndeleteDataset(request),
      [this](
          rest_internal::RestContext& rest_context, Options const& options,
          google::cloud::bigquery::v2::UndeleteDatasetRequest const& request) {
        return stub_->UndeleteDataset(rest_context, options, request);
      },
      *current, request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquerycontrol_v2_internal
}  // namespace cloud
}  // namespace google
