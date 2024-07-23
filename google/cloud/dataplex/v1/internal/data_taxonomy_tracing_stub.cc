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
// source: google/cloud/dataplex/v1/data_taxonomy.proto

#include "google/cloud/dataplex/v1/internal/data_taxonomy_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dataplex_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

DataTaxonomyServiceTracingStub::DataTaxonomyServiceTracingStub(
    std::shared_ptr<DataTaxonomyServiceStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

future<StatusOr<google::longrunning::Operation>>
DataTaxonomyServiceTracingStub::AsyncCreateDataTaxonomy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataplex::v1::CreateDataTaxonomyRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.dataplex.v1.DataTaxonomyService", "CreateDataTaxonomy");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncCreateDataTaxonomy(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
DataTaxonomyServiceTracingStub::CreateDataTaxonomy(
    grpc::ClientContext& context, Options options,
    google::cloud::dataplex::v1::CreateDataTaxonomyRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.dataplex.v1.DataTaxonomyService", "CreateDataTaxonomy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->CreateDataTaxonomy(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
DataTaxonomyServiceTracingStub::AsyncUpdateDataTaxonomy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataplex::v1::UpdateDataTaxonomyRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.dataplex.v1.DataTaxonomyService", "UpdateDataTaxonomy");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncUpdateDataTaxonomy(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
DataTaxonomyServiceTracingStub::UpdateDataTaxonomy(
    grpc::ClientContext& context, Options options,
    google::cloud::dataplex::v1::UpdateDataTaxonomyRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.dataplex.v1.DataTaxonomyService", "UpdateDataTaxonomy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->UpdateDataTaxonomy(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
DataTaxonomyServiceTracingStub::AsyncDeleteDataTaxonomy(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataplex::v1::DeleteDataTaxonomyRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.dataplex.v1.DataTaxonomyService", "DeleteDataTaxonomy");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncDeleteDataTaxonomy(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
DataTaxonomyServiceTracingStub::DeleteDataTaxonomy(
    grpc::ClientContext& context, Options options,
    google::cloud::dataplex::v1::DeleteDataTaxonomyRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.dataplex.v1.DataTaxonomyService", "DeleteDataTaxonomy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->DeleteDataTaxonomy(context, options, request));
}

StatusOr<google::cloud::dataplex::v1::ListDataTaxonomiesResponse>
DataTaxonomyServiceTracingStub::ListDataTaxonomies(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::ListDataTaxonomiesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.dataplex.v1.DataTaxonomyService", "ListDataTaxonomies");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->ListDataTaxonomies(context, options, request));
}

StatusOr<google::cloud::dataplex::v1::DataTaxonomy>
DataTaxonomyServiceTracingStub::GetDataTaxonomy(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::GetDataTaxonomyRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.dataplex.v1.DataTaxonomyService", "GetDataTaxonomy");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetDataTaxonomy(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
DataTaxonomyServiceTracingStub::AsyncCreateDataAttributeBinding(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataplex::v1::CreateDataAttributeBindingRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.dataplex.v1.DataTaxonomyService",
                             "CreateDataAttributeBinding");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateDataAttributeBinding(cq, context,
                                                   std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
DataTaxonomyServiceTracingStub::CreateDataAttributeBinding(
    grpc::ClientContext& context, Options options,
    google::cloud::dataplex::v1::CreateDataAttributeBindingRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.dataplex.v1.DataTaxonomyService",
                             "CreateDataAttributeBinding");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->CreateDataAttributeBinding(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
DataTaxonomyServiceTracingStub::AsyncUpdateDataAttributeBinding(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataplex::v1::UpdateDataAttributeBindingRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.dataplex.v1.DataTaxonomyService",
                             "UpdateDataAttributeBinding");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateDataAttributeBinding(cq, context,
                                                   std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
DataTaxonomyServiceTracingStub::UpdateDataAttributeBinding(
    grpc::ClientContext& context, Options options,
    google::cloud::dataplex::v1::UpdateDataAttributeBindingRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.dataplex.v1.DataTaxonomyService",
                             "UpdateDataAttributeBinding");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->UpdateDataAttributeBinding(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
DataTaxonomyServiceTracingStub::AsyncDeleteDataAttributeBinding(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataplex::v1::DeleteDataAttributeBindingRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.dataplex.v1.DataTaxonomyService",
                             "DeleteDataAttributeBinding");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteDataAttributeBinding(cq, context,
                                                   std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
DataTaxonomyServiceTracingStub::DeleteDataAttributeBinding(
    grpc::ClientContext& context, Options options,
    google::cloud::dataplex::v1::DeleteDataAttributeBindingRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.dataplex.v1.DataTaxonomyService",
                             "DeleteDataAttributeBinding");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->DeleteDataAttributeBinding(context, options, request));
}

StatusOr<google::cloud::dataplex::v1::ListDataAttributeBindingsResponse>
DataTaxonomyServiceTracingStub::ListDataAttributeBindings(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::ListDataAttributeBindingsRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.dataplex.v1.DataTaxonomyService",
                             "ListDataAttributeBindings");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->ListDataAttributeBindings(context, options, request));
}

StatusOr<google::cloud::dataplex::v1::DataAttributeBinding>
DataTaxonomyServiceTracingStub::GetDataAttributeBinding(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::GetDataAttributeBindingRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.cloud.dataplex.v1.DataTaxonomyService",
                             "GetDataAttributeBinding");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->GetDataAttributeBinding(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
DataTaxonomyServiceTracingStub::AsyncCreateDataAttribute(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataplex::v1::CreateDataAttributeRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.dataplex.v1.DataTaxonomyService", "CreateDataAttribute");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncCreateDataAttribute(cq, context, std::move(options),
                                            request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
DataTaxonomyServiceTracingStub::CreateDataAttribute(
    grpc::ClientContext& context, Options options,
    google::cloud::dataplex::v1::CreateDataAttributeRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.dataplex.v1.DataTaxonomyService", "CreateDataAttribute");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->CreateDataAttribute(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
DataTaxonomyServiceTracingStub::AsyncUpdateDataAttribute(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataplex::v1::UpdateDataAttributeRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.dataplex.v1.DataTaxonomyService", "UpdateDataAttribute");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncUpdateDataAttribute(cq, context, std::move(options),
                                            request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
DataTaxonomyServiceTracingStub::UpdateDataAttribute(
    grpc::ClientContext& context, Options options,
    google::cloud::dataplex::v1::UpdateDataAttributeRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.dataplex.v1.DataTaxonomyService", "UpdateDataAttribute");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->UpdateDataAttribute(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
DataTaxonomyServiceTracingStub::AsyncDeleteDataAttribute(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::dataplex::v1::DeleteDataAttributeRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.dataplex.v1.DataTaxonomyService", "DeleteDataAttribute");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncDeleteDataAttribute(cq, context, std::move(options),
                                            request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
DataTaxonomyServiceTracingStub::DeleteDataAttribute(
    grpc::ClientContext& context, Options options,
    google::cloud::dataplex::v1::DeleteDataAttributeRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.dataplex.v1.DataTaxonomyService", "DeleteDataAttribute");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->DeleteDataAttribute(context, options, request));
}

StatusOr<google::cloud::dataplex::v1::ListDataAttributesResponse>
DataTaxonomyServiceTracingStub::ListDataAttributes(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::ListDataAttributesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.dataplex.v1.DataTaxonomyService", "ListDataAttributes");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->ListDataAttributes(context, options, request));
}

StatusOr<google::cloud::dataplex::v1::DataAttribute>
DataTaxonomyServiceTracingStub::GetDataAttribute(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dataplex::v1::GetDataAttributeRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.dataplex.v1.DataTaxonomyService", "GetDataAttribute");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetDataAttribute(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
DataTaxonomyServiceTracingStub::AsyncGetOperation(
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

future<Status> DataTaxonomyServiceTracingStub::AsyncCancelOperation(
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

std::shared_ptr<DataTaxonomyServiceStub> MakeDataTaxonomyServiceTracingStub(
    std::shared_ptr<DataTaxonomyServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<DataTaxonomyServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataplex_v1_internal
}  // namespace cloud
}  // namespace google
