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
// source: google/devtools/cloudbuild/v2/repositories.proto

#include "google/cloud/cloudbuild/v2/internal/repository_manager_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace cloudbuild_v2_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

RepositoryManagerTracingStub::RepositoryManagerTracingStub(
    std::shared_ptr<RepositoryManagerStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

future<StatusOr<google::longrunning::Operation>>
RepositoryManagerTracingStub::AsyncCreateConnection(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::devtools::cloudbuild::v2::CreateConnectionRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.devtools.cloudbuild.v2.RepositoryManager", "CreateConnection");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncCreateConnection(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
RepositoryManagerTracingStub::CreateConnection(
    grpc::ClientContext& context, Options options,
    google::devtools::cloudbuild::v2::CreateConnectionRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.devtools.cloudbuild.v2.RepositoryManager", "CreateConnection");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateConnection(context, options, request));
}

StatusOr<google::devtools::cloudbuild::v2::Connection>
RepositoryManagerTracingStub::GetConnection(
    grpc::ClientContext& context, Options const& options,
    google::devtools::cloudbuild::v2::GetConnectionRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.devtools.cloudbuild.v2.RepositoryManager", "GetConnection");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetConnection(context, options, request));
}

StatusOr<google::devtools::cloudbuild::v2::ListConnectionsResponse>
RepositoryManagerTracingStub::ListConnections(
    grpc::ClientContext& context, Options const& options,
    google::devtools::cloudbuild::v2::ListConnectionsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.devtools.cloudbuild.v2.RepositoryManager", "ListConnections");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListConnections(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
RepositoryManagerTracingStub::AsyncUpdateConnection(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::devtools::cloudbuild::v2::UpdateConnectionRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.devtools.cloudbuild.v2.RepositoryManager", "UpdateConnection");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncUpdateConnection(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
RepositoryManagerTracingStub::UpdateConnection(
    grpc::ClientContext& context, Options options,
    google::devtools::cloudbuild::v2::UpdateConnectionRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.devtools.cloudbuild.v2.RepositoryManager", "UpdateConnection");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateConnection(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
RepositoryManagerTracingStub::AsyncDeleteConnection(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::devtools::cloudbuild::v2::DeleteConnectionRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.devtools.cloudbuild.v2.RepositoryManager", "DeleteConnection");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncDeleteConnection(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
RepositoryManagerTracingStub::DeleteConnection(
    grpc::ClientContext& context, Options options,
    google::devtools::cloudbuild::v2::DeleteConnectionRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.devtools.cloudbuild.v2.RepositoryManager", "DeleteConnection");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteConnection(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
RepositoryManagerTracingStub::AsyncCreateRepository(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::devtools::cloudbuild::v2::CreateRepositoryRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.devtools.cloudbuild.v2.RepositoryManager", "CreateRepository");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncCreateRepository(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
RepositoryManagerTracingStub::CreateRepository(
    grpc::ClientContext& context, Options options,
    google::devtools::cloudbuild::v2::CreateRepositoryRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.devtools.cloudbuild.v2.RepositoryManager", "CreateRepository");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateRepository(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
RepositoryManagerTracingStub::AsyncBatchCreateRepositories(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::devtools::cloudbuild::v2::BatchCreateRepositoriesRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.devtools.cloudbuild.v2.RepositoryManager",
                             "BatchCreateRepositories");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f = child_->AsyncBatchCreateRepositories(cq, context, std::move(options),
                                                request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
RepositoryManagerTracingStub::BatchCreateRepositories(
    grpc::ClientContext& context, Options options,
    google::devtools::cloudbuild::v2::BatchCreateRepositoriesRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.devtools.cloudbuild.v2.RepositoryManager",
                             "BatchCreateRepositories");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->BatchCreateRepositories(context, options, request));
}

StatusOr<google::devtools::cloudbuild::v2::Repository>
RepositoryManagerTracingStub::GetRepository(
    grpc::ClientContext& context, Options const& options,
    google::devtools::cloudbuild::v2::GetRepositoryRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.devtools.cloudbuild.v2.RepositoryManager", "GetRepository");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetRepository(context, options, request));
}

StatusOr<google::devtools::cloudbuild::v2::ListRepositoriesResponse>
RepositoryManagerTracingStub::ListRepositories(
    grpc::ClientContext& context, Options const& options,
    google::devtools::cloudbuild::v2::ListRepositoriesRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.devtools.cloudbuild.v2.RepositoryManager", "ListRepositories");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListRepositories(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
RepositoryManagerTracingStub::AsyncDeleteRepository(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::devtools::cloudbuild::v2::DeleteRepositoryRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.devtools.cloudbuild.v2.RepositoryManager", "DeleteRepository");
  internal::OTelScope scope(span);
  internal::InjectTraceContext(*context, *propagator_);
  auto f =
      child_->AsyncDeleteRepository(cq, context, std::move(options), request);
  return internal::EndSpan(std::move(context), std::move(span), std::move(f));
}

StatusOr<google::longrunning::Operation>
RepositoryManagerTracingStub::DeleteRepository(
    grpc::ClientContext& context, Options options,
    google::devtools::cloudbuild::v2::DeleteRepositoryRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.devtools.cloudbuild.v2.RepositoryManager", "DeleteRepository");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteRepository(context, options, request));
}

StatusOr<google::devtools::cloudbuild::v2::FetchReadWriteTokenResponse>
RepositoryManagerTracingStub::FetchReadWriteToken(
    grpc::ClientContext& context, Options const& options,
    google::devtools::cloudbuild::v2::FetchReadWriteTokenRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.devtools.cloudbuild.v2.RepositoryManager", "FetchReadWriteToken");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span, child_->FetchReadWriteToken(context, options, request));
}

StatusOr<google::devtools::cloudbuild::v2::FetchReadTokenResponse>
RepositoryManagerTracingStub::FetchReadToken(
    grpc::ClientContext& context, Options const& options,
    google::devtools::cloudbuild::v2::FetchReadTokenRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.devtools.cloudbuild.v2.RepositoryManager", "FetchReadToken");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->FetchReadToken(context, options, request));
}

StatusOr<google::devtools::cloudbuild::v2::FetchLinkableRepositoriesResponse>
RepositoryManagerTracingStub::FetchLinkableRepositories(
    grpc::ClientContext& context, Options const& options,
    google::devtools::cloudbuild::v2::FetchLinkableRepositoriesRequest const&
        request) {
  auto span =
      internal::MakeSpanGrpc("google.devtools.cloudbuild.v2.RepositoryManager",
                             "FetchLinkableRepositories");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(
      context, *span,
      child_->FetchLinkableRepositories(context, options, request));
}

StatusOr<google::devtools::cloudbuild::v2::FetchGitRefsResponse>
RepositoryManagerTracingStub::FetchGitRefs(
    grpc::ClientContext& context, Options const& options,
    google::devtools::cloudbuild::v2::FetchGitRefsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.devtools.cloudbuild.v2.RepositoryManager", "FetchGitRefs");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->FetchGitRefs(context, options, request));
}

future<StatusOr<google::longrunning::Operation>>
RepositoryManagerTracingStub::AsyncGetOperation(
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

future<Status> RepositoryManagerTracingStub::AsyncCancelOperation(
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

std::shared_ptr<RepositoryManagerStub> MakeRepositoryManagerTracingStub(
    std::shared_ptr<RepositoryManagerStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<RepositoryManagerTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace cloudbuild_v2_internal
}  // namespace cloud
}  // namespace google
