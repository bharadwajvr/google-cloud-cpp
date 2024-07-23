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
// source: google/cloud/resourcemanager/v3/tag_keys.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_V3_INTERNAL_TAG_KEYS_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_V3_INTERNAL_TAG_KEYS_TRACING_STUB_H

#include "google/cloud/resourcemanager/v3/internal/tag_keys_stub.h"
#include "google/cloud/internal/trace_propagator.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace resourcemanager_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class TagKeysTracingStub : public TagKeysStub {
 public:
  ~TagKeysTracingStub() override = default;

  explicit TagKeysTracingStub(std::shared_ptr<TagKeysStub> child);

  StatusOr<google::cloud::resourcemanager::v3::ListTagKeysResponse> ListTagKeys(
      grpc::ClientContext& context, Options const& options,
      google::cloud::resourcemanager::v3::ListTagKeysRequest const& request)
      override;

  StatusOr<google::cloud::resourcemanager::v3::TagKey> GetTagKey(
      grpc::ClientContext& context, Options const& options,
      google::cloud::resourcemanager::v3::GetTagKeyRequest const& request)
      override;

  StatusOr<google::cloud::resourcemanager::v3::TagKey> GetNamespacedTagKey(
      grpc::ClientContext& context, Options const& options,
      google::cloud::resourcemanager::v3::GetNamespacedTagKeyRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateTagKey(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::resourcemanager::v3::CreateTagKeyRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateTagKey(
      grpc::ClientContext& context, Options options,
      google::cloud::resourcemanager::v3::CreateTagKeyRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateTagKey(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::resourcemanager::v3::UpdateTagKeyRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateTagKey(
      grpc::ClientContext& context, Options options,
      google::cloud::resourcemanager::v3::UpdateTagKeyRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteTagKey(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::resourcemanager::v3::DeleteTagKeyRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteTagKey(
      grpc::ClientContext& context, Options options,
      google::cloud::resourcemanager::v3::DeleteTagKeyRequest const& request)
      override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::TestIamPermissionsRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<TagKeysStub> child_;
  std::shared_ptr<opentelemetry::context::propagation::TextMapPropagator>
      propagator_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Applies the tracing decorator to the given stub.
 *
 * The stub is only decorated if the library has been compiled with
 * OpenTelemetry.
 */
std::shared_ptr<TagKeysStub> MakeTagKeysTracingStub(
    std::shared_ptr<TagKeysStub> stub);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace resourcemanager_v3_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_V3_INTERNAL_TAG_KEYS_TRACING_STUB_H
