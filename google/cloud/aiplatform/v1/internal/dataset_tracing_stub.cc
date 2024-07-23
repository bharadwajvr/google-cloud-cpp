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
// source: google/cloud/aiplatform/v1/dataset_service.proto

#include "google/cloud/aiplatform/v1/internal/dataset_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

DatasetServiceTracingStub::DatasetServiceTracingStub(
    std::shared_ptr<DatasetServiceStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

future<StatusOr<google::longrunning::Operation>>
DatasetServiceTracingStub::AsyncCreateDataset(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::CreateDatasetRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.DatasetService", "CreateDataset");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateDataset(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
DatasetServiceTracingStub::CreateDataset(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::CreateDatasetRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.DatasetService", "CreateDataset");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateDataset(context, options, request));
}

StatusOr<google::cloud::aiplatform::v1::Dataset>
DatasetServiceTracingStub::GetDataset(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetDatasetRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.DatasetService", "GetDataset");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetDataset(context, options, request));
}

StatusOr<google::cloud::aiplatform::v1::Dataset>
DatasetServiceTracingStub::UpdateDataset(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::UpdateDatasetRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.DatasetService", "UpdateDataset");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateDataset(context, options, request));
}

StatusOr<google::cloud::aiplatform::v1::ListDatasetsResponse>
DatasetServiceTracingStub::ListDatasets(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListDatasetsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.DatasetService", "ListDatasets");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListDatasets(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
DatasetServiceTracingStub::AsyncDeleteDataset(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::DeleteDatasetRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.DatasetService", "DeleteDataset");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteDataset(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
DatasetServiceTracingStub::DeleteDataset(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::DeleteDatasetRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.DatasetService", "DeleteDataset");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteDataset(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
DatasetServiceTracingStub::AsyncImportData(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::ImportDataRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.DatasetService", "ImportData");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncImportData(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation> DatasetServiceTracingStub::ImportData(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::ImportDataRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.DatasetService", "ImportData");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ImportData(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
DatasetServiceTracingStub::AsyncExportData(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::ExportDataRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.DatasetService", "ExportData");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncExportData(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation> DatasetServiceTracingStub::ExportData(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::ExportDataRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.DatasetService", "ExportData");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ExportData(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
DatasetServiceTracingStub::AsyncCreateDatasetVersion(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::CreateDatasetVersionRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.DatasetService", "CreateDatasetVersion");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateDatasetVersion(cq, context, std::move(options),
                                             request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
DatasetServiceTracingStub::CreateDatasetVersion(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::CreateDatasetVersionRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.DatasetService", "CreateDatasetVersion");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->CreateDatasetVersion(context, options, request));
}

StatusOr<google::cloud::aiplatform::v1::DatasetVersion>
DatasetServiceTracingStub::UpdateDatasetVersion(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::UpdateDatasetVersionRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.DatasetService", "UpdateDatasetVersion");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->UpdateDatasetVersion(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
DatasetServiceTracingStub::AsyncDeleteDatasetVersion(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::DeleteDatasetVersionRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.DatasetService", "DeleteDatasetVersion");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteDatasetVersion(cq, context, std::move(options),
                                             request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
DatasetServiceTracingStub::DeleteDatasetVersion(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::DeleteDatasetVersionRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.DatasetService", "DeleteDatasetVersion");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->DeleteDatasetVersion(context, options, request));
}

StatusOr<google::cloud::aiplatform::v1::DatasetVersion>
DatasetServiceTracingStub::GetDatasetVersion(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetDatasetVersionRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.DatasetService", "GetDatasetVersion");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->GetDatasetVersion(context, options, request));
}

StatusOr<google::cloud::aiplatform::v1::ListDatasetVersionsResponse>
DatasetServiceTracingStub::ListDatasetVersions(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListDatasetVersionsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.DatasetService", "ListDatasetVersions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->ListDatasetVersions(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
DatasetServiceTracingStub::AsyncRestoreDatasetVersion(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::RestoreDatasetVersionRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.DatasetService", "RestoreDatasetVersion");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncRestoreDatasetVersion(cq, context, std::move(options),
                                              request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
DatasetServiceTracingStub::RestoreDatasetVersion(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::RestoreDatasetVersionRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.DatasetService", "RestoreDatasetVersion");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->RestoreDatasetVersion(context, options, request));
}

StatusOr<google::cloud::aiplatform::v1::ListDataItemsResponse>
DatasetServiceTracingStub::ListDataItems(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListDataItemsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.DatasetService", "ListDataItems");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListDataItems(context, options, request));
}

StatusOr<google::cloud::aiplatform::v1::SearchDataItemsResponse>
DatasetServiceTracingStub::SearchDataItems(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::SearchDataItemsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.DatasetService", "SearchDataItems");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->SearchDataItems(context, options, request));
}

StatusOr<google::cloud::aiplatform::v1::ListSavedQueriesResponse>
DatasetServiceTracingStub::ListSavedQueries(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListSavedQueriesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.DatasetService", "ListSavedQueries");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListSavedQueries(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
DatasetServiceTracingStub::AsyncDeleteSavedQuery(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::aiplatform::v1::DeleteSavedQueryRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.DatasetService", "DeleteSavedQuery");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncDeleteSavedQuery(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
DatasetServiceTracingStub::DeleteSavedQuery(
    grpc::ClientContext& context, Options options,
    google::cloud::aiplatform::v1::DeleteSavedQueryRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.DatasetService", "DeleteSavedQuery");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteSavedQuery(context, options, request));
}

StatusOr<google::cloud::aiplatform::v1::AnnotationSpec>
DatasetServiceTracingStub::GetAnnotationSpec(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::GetAnnotationSpecRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.DatasetService", "GetAnnotationSpec");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->GetAnnotationSpec(context, options, request));
}

StatusOr<google::cloud::aiplatform::v1::ListAnnotationsResponse>
DatasetServiceTracingStub::ListAnnotations(
    grpc::ClientContext& context, Options const& options,
    google::cloud::aiplatform::v1::ListAnnotationsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.aiplatform.v1.DatasetService", "ListAnnotations");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListAnnotations(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
DatasetServiceTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.longrunning.Operations", "GetOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncGetOperation(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

future<Status> DatasetServiceTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.longrunning.Operations",
                                     "CancelOperation");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncCancelOperation(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<DatasetServiceStub> MakeDatasetServiceTracingStub(
    std::shared_ptr<DatasetServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<DatasetServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google
