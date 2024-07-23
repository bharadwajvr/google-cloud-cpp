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
// source: google/cloud/dialogflow/cx/v3/generator.proto

#include "google/cloud/dialogflow_cx/internal/generators_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

GeneratorsTracingStub::GeneratorsTracingStub(
    std::shared_ptr<GeneratorsStub> child)
    : child_(std::move(child)), propagator_(internal::MakePropagator()) {}

StatusOr<google::cloud::dialogflow::cx::v3::ListGeneratorsResponse>
GeneratorsTracingStub::ListGenerators(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::cx::v3::ListGeneratorsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.cx.v3.Generators",
                                     "ListGenerators");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->ListGenerators(context, options, request));
}

StatusOr<google::cloud::dialogflow::cx::v3::Generator>
GeneratorsTracingStub::GetGenerator(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::cx::v3::GetGeneratorRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.cx.v3.Generators",
                                     "GetGenerator");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->GetGenerator(context, options, request));
}

StatusOr<google::cloud::dialogflow::cx::v3::Generator>
GeneratorsTracingStub::CreateGenerator(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::cx::v3::CreateGeneratorRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.cx.v3.Generators",
                                     "CreateGenerator");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->CreateGenerator(context, options, request));
}

StatusOr<google::cloud::dialogflow::cx::v3::Generator>
GeneratorsTracingStub::UpdateGenerator(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::cx::v3::UpdateGeneratorRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.cx.v3.Generators",
                                     "UpdateGenerator");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->UpdateGenerator(context, options, request));
}

Status GeneratorsTracingStub::DeleteGenerator(
    grpc::ClientContext& context, Options const& options,
    google::cloud::dialogflow::cx::v3::DeleteGeneratorRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.dialogflow.cx.v3.Generators",
                                     "DeleteGenerator");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, *propagator_);
  return internal::EndSpan(context, *span,
                           child_->DeleteGenerator(context, options, request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<GeneratorsStub> MakeGeneratorsTracingStub(
    std::shared_ptr<GeneratorsStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<GeneratorsTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google
