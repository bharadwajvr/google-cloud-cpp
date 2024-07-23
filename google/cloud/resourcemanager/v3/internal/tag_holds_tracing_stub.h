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
// source: google/cloud/resourcemanager/v3/tag_holds.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_V3_INTERNAL_TAG_HOLDS_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_V3_INTERNAL_TAG_HOLDS_TRACING_STUB_H

#include "google/cloud/resourcemanager/v3/internal/tag_holds_stub.h"
#include "google/cloud/internal/trace_propagator.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace resourcemanager_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class TagHoldsTracingStub : public TagHoldsStub {
 public:
  ~TagHoldsTracingStub() override = default;

  explicit TagHoldsTracingStub(std::shared_ptr<TagHoldsStub> child);

  future<StatusOr<google::longrunning::Operation>> AsyncCreateTagHold(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::resourcemanager::v3::CreateTagHoldRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateTagHold(
      grpc::ClientContext& context, Options options,
      google::cloud::resourcemanager::v3::CreateTagHoldRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteTagHold(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::resourcemanager::v3::DeleteTagHoldRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteTagHold(
      grpc::ClientContext& context, Options options,
      google::cloud::resourcemanager::v3::DeleteTagHoldRequest const& request)
      override;

  StatusOr<google::cloud::resourcemanager::v3::ListTagHoldsResponse>
  ListTagHolds(grpc::ClientContext& context, Options const& options,
               google::cloud::resourcemanager::v3::ListTagHoldsRequest const&
                   request) override;

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
  std::shared_ptr<TagHoldsStub> child_;
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
std::shared_ptr<TagHoldsStub> MakeTagHoldsTracingStub(
    std::shared_ptr<TagHoldsStub> stub);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace resourcemanager_v3_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RESOURCEMANAGER_V3_INTERNAL_TAG_HOLDS_TRACING_STUB_H
