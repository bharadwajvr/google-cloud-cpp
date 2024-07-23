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
// source: google/cloud/dialogflow/cx/v3/experiment.proto

#include "google/cloud/dialogflow_cx/internal/experiments_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ExperimentsTracingStub::ExperimentsTracingStub(
    std::shared_ptr<ExperimentsStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::dialogflow::cx::v3::ListExperimentsResponse>
ExperimentsTracingStub::ListExperiments(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::cx::v3::ListExperimentsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.dialogflow.cx.v3.Experiments", "ListExperiments");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListExperiments(context, options, request));
}

StatusOr<google::cloud::dialogflow::cx::v3::Experiment>
ExperimentsTracingStub::GetExperiment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::cx::v3::GetExperimentRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.dialogflow.cx.v3.Experiments", "GetExperiment");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetExperiment(context, options, request));
}

StatusOr<google::cloud::dialogflow::cx::v3::Experiment>
ExperimentsTracingStub::CreateExperiment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::cx::v3::CreateExperimentRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.dialogflow.cx.v3.Experiments", "CreateExperiment");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateExperiment(context, options, request));
}

StatusOr<google::cloud::dialogflow::cx::v3::Experiment>
ExperimentsTracingStub::UpdateExperiment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::cx::v3::UpdateExperimentRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.dialogflow.cx.v3.Experiments", "UpdateExperiment");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateExperiment(context, options, request));
}

Status ExperimentsTracingStub::DeleteExperiment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::cx::v3::DeleteExperimentRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.dialogflow.cx.v3.Experiments", "DeleteExperiment");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteExperiment(context, options, request));
}

StatusOr<google::cloud::dialogflow::cx::v3::Experiment>
ExperimentsTracingStub::StartExperiment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::cx::v3::StartExperimentRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.dialogflow.cx.v3.Experiments", "StartExperiment");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->StartExperiment(context, options, request));
}

StatusOr<google::cloud::dialogflow::cx::v3::Experiment>
ExperimentsTracingStub::StopExperiment(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::cx::v3::StopExperimentRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.dialogflow.cx.v3.Experiments", "StopExperiment");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->StopExperiment(context, options, request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<ExperimentsStub> MakeExperimentsTracingStub(
    std::shared_ptr<ExperimentsStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<ExperimentsTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google
