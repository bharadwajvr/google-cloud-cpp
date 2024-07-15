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
// source: google/cloud/discoveryengine/v1/completion_service.proto

#include "google/cloud/discoveryengine/v1/internal/completion_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <utility>

namespace google {
namespace cloud {
namespace discoveryengine_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

CompletionServiceTracingStub::CompletionServiceTracingStub(
    std::shared_ptr<CompletionServiceStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::discoveryengine::v1::CompleteQueryResponse>
CompletionServiceTracingStub::CompleteQuery(
    grpc::ClientContext& context, Options const& options,
    google::cloud::discoveryengine::v1::CompleteQueryRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.discoveryengine.v1.CompletionService", "CompleteQuery");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CompleteQuery(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
CompletionServiceTracingStub::AsyncImportSuggestionDenyListEntries(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::discoveryengine::v1::
        ImportSuggestionDenyListEntriesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.discoveryengine.v1.CompletionService",
      "ImportSuggestionDenyListEntries");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncImportSuggestionDenyListEntries(
      cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
CompletionServiceTracingStub::ImportSuggestionDenyListEntries(
    grpc::ClientContext& context, Options options,
    google::cloud::discoveryengine::v1::
        ImportSuggestionDenyListEntriesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.discoveryengine.v1.CompletionService",
      "ImportSuggestionDenyListEntries");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->ImportSuggestionDenyListEntries(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
CompletionServiceTracingStub::AsyncPurgeSuggestionDenyListEntries(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::discoveryengine::v1::
        PurgeSuggestionDenyListEntriesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.discoveryengine.v1.CompletionService",
      "PurgeSuggestionDenyListEntries");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncPurgeSuggestionDenyListEntries(
      cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
CompletionServiceTracingStub::PurgeSuggestionDenyListEntries(
    grpc::ClientContext& context, Options options,
    google::cloud::discoveryengine::v1::
        PurgeSuggestionDenyListEntriesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.discoveryengine.v1.CompletionService",
      "PurgeSuggestionDenyListEntries");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->PurgeSuggestionDenyListEntries(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
CompletionServiceTracingStub::AsyncImportCompletionSuggestions(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::discoveryengine::v1::
        ImportCompletionSuggestionsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.discoveryengine.v1.CompletionService",
      "ImportCompletionSuggestions");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncImportCompletionSuggestions(
      cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
CompletionServiceTracingStub::ImportCompletionSuggestions(
    grpc::ClientContext& context, Options options,
    google::cloud::discoveryengine::v1::
        ImportCompletionSuggestionsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.discoveryengine.v1.CompletionService",
      "ImportCompletionSuggestions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->ImportCompletionSuggestions(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
CompletionServiceTracingStub::AsyncPurgeCompletionSuggestions(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::discoveryengine::v1::PurgeCompletionSuggestionsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.discoveryengine.v1.CompletionService",
      "PurgeCompletionSuggestions");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncPurgeCompletionSuggestions(cq, context,
                                                   std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
CompletionServiceTracingStub::PurgeCompletionSuggestions(
    grpc::ClientContext& context, Options options,
    google::cloud::discoveryengine::v1::PurgeCompletionSuggestionsRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.discoveryengine.v1.CompletionService",
      "PurgeCompletionSuggestions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->PurgeCompletionSuggestions(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
CompletionServiceTracingStub::AsyncGetOperation(
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

future<Status> CompletionServiceTracingStub::AsyncCancelOperation(
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

std::shared_ptr<CompletionServiceStub> MakeCompletionServiceTracingStub(
    std::shared_ptr<CompletionServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<CompletionServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace discoveryengine_v1_internal
}  // namespace cloud
}  // namespace google
