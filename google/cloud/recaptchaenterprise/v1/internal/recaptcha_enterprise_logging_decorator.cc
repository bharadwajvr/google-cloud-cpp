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
// source: google/cloud/recaptchaenterprise/v1/recaptchaenterprise.proto

#include "google/cloud/recaptchaenterprise/v1/internal/recaptcha_enterprise_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <google/cloud/recaptchaenterprise/v1/recaptchaenterprise.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace recaptchaenterprise_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RecaptchaEnterpriseServiceLogging::RecaptchaEnterpriseServiceLogging(
    std::shared_ptr<RecaptchaEnterpriseServiceStub> child,
    TracingOptions tracing_options, std::set<std::string> const& components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      stream_logging_(components.find("rpc-streams") != components.end()) {}

StatusOr<google::cloud::recaptchaenterprise::v1::Assessment>
RecaptchaEnterpriseServiceLogging::CreateAssessment(
    grpc::ClientContext& context,
    google::cloud::recaptchaenterprise::v1::CreateAssessmentRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](
          grpc::ClientContext& context,
          google::cloud::recaptchaenterprise::v1::CreateAssessmentRequest const&
              request) { return child_->CreateAssessment(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::recaptchaenterprise::v1::AnnotateAssessmentResponse>
RecaptchaEnterpriseServiceLogging::AnnotateAssessment(
    grpc::ClientContext& context,
    google::cloud::recaptchaenterprise::v1::AnnotateAssessmentRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::recaptchaenterprise::v1::
                 AnnotateAssessmentRequest const& request) {
        return child_->AnnotateAssessment(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::recaptchaenterprise::v1::Key>
RecaptchaEnterpriseServiceLogging::CreateKey(
    grpc::ClientContext& context,
    google::cloud::recaptchaenterprise::v1::CreateKeyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::recaptchaenterprise::v1::CreateKeyRequest const&
                 request) { return child_->CreateKey(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::recaptchaenterprise::v1::ListKeysResponse>
RecaptchaEnterpriseServiceLogging::ListKeys(
    grpc::ClientContext& context,
    google::cloud::recaptchaenterprise::v1::ListKeysRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::recaptchaenterprise::v1::ListKeysRequest const&
                 request) { return child_->ListKeys(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<
    google::cloud::recaptchaenterprise::v1::RetrieveLegacySecretKeyResponse>
RecaptchaEnterpriseServiceLogging::RetrieveLegacySecretKey(
    grpc::ClientContext& context,
    google::cloud::recaptchaenterprise::v1::
        RetrieveLegacySecretKeyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::recaptchaenterprise::v1::
                 RetrieveLegacySecretKeyRequest const& request) {
        return child_->RetrieveLegacySecretKey(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::recaptchaenterprise::v1::Key>
RecaptchaEnterpriseServiceLogging::GetKey(
    grpc::ClientContext& context,
    google::cloud::recaptchaenterprise::v1::GetKeyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::recaptchaenterprise::v1::GetKeyRequest const&
                 request) { return child_->GetKey(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::recaptchaenterprise::v1::Key>
RecaptchaEnterpriseServiceLogging::UpdateKey(
    grpc::ClientContext& context,
    google::cloud::recaptchaenterprise::v1::UpdateKeyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::recaptchaenterprise::v1::UpdateKeyRequest const&
                 request) { return child_->UpdateKey(context, request); },
      context, request, __func__, tracing_options_);
}

Status RecaptchaEnterpriseServiceLogging::DeleteKey(
    grpc::ClientContext& context,
    google::cloud::recaptchaenterprise::v1::DeleteKeyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::recaptchaenterprise::v1::DeleteKeyRequest const&
                 request) { return child_->DeleteKey(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::recaptchaenterprise::v1::Key>
RecaptchaEnterpriseServiceLogging::MigrateKey(
    grpc::ClientContext& context,
    google::cloud::recaptchaenterprise::v1::MigrateKeyRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::recaptchaenterprise::v1::MigrateKeyRequest const&
                 request) { return child_->MigrateKey(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::recaptchaenterprise::v1::Metrics>
RecaptchaEnterpriseServiceLogging::GetMetrics(
    grpc::ClientContext& context,
    google::cloud::recaptchaenterprise::v1::GetMetricsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::recaptchaenterprise::v1::GetMetricsRequest const&
                 request) { return child_->GetMetrics(context, request); },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::recaptchaenterprise::v1::FirewallPolicy>
RecaptchaEnterpriseServiceLogging::CreateFirewallPolicy(
    grpc::ClientContext& context,
    google::cloud::recaptchaenterprise::v1::CreateFirewallPolicyRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::recaptchaenterprise::v1::
                 CreateFirewallPolicyRequest const& request) {
        return child_->CreateFirewallPolicy(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::recaptchaenterprise::v1::ListFirewallPoliciesResponse>
RecaptchaEnterpriseServiceLogging::ListFirewallPolicies(
    grpc::ClientContext& context,
    google::cloud::recaptchaenterprise::v1::ListFirewallPoliciesRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::recaptchaenterprise::v1::
                 ListFirewallPoliciesRequest const& request) {
        return child_->ListFirewallPolicies(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::recaptchaenterprise::v1::FirewallPolicy>
RecaptchaEnterpriseServiceLogging::GetFirewallPolicy(
    grpc::ClientContext& context,
    google::cloud::recaptchaenterprise::v1::GetFirewallPolicyRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::recaptchaenterprise::v1::
                 GetFirewallPolicyRequest const& request) {
        return child_->GetFirewallPolicy(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::recaptchaenterprise::v1::FirewallPolicy>
RecaptchaEnterpriseServiceLogging::UpdateFirewallPolicy(
    grpc::ClientContext& context,
    google::cloud::recaptchaenterprise::v1::UpdateFirewallPolicyRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::recaptchaenterprise::v1::
                 UpdateFirewallPolicyRequest const& request) {
        return child_->UpdateFirewallPolicy(context, request);
      },
      context, request, __func__, tracing_options_);
}

Status RecaptchaEnterpriseServiceLogging::DeleteFirewallPolicy(
    grpc::ClientContext& context,
    google::cloud::recaptchaenterprise::v1::DeleteFirewallPolicyRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::recaptchaenterprise::v1::
                 DeleteFirewallPolicyRequest const& request) {
        return child_->DeleteFirewallPolicy(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<
    google::cloud::recaptchaenterprise::v1::ListRelatedAccountGroupsResponse>
RecaptchaEnterpriseServiceLogging::ListRelatedAccountGroups(
    grpc::ClientContext& context,
    google::cloud::recaptchaenterprise::v1::
        ListRelatedAccountGroupsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::recaptchaenterprise::v1::
                 ListRelatedAccountGroupsRequest const& request) {
        return child_->ListRelatedAccountGroups(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::recaptchaenterprise::v1::
             ListRelatedAccountGroupMembershipsResponse>
RecaptchaEnterpriseServiceLogging::ListRelatedAccountGroupMemberships(
    grpc::ClientContext& context,
    google::cloud::recaptchaenterprise::v1::
        ListRelatedAccountGroupMembershipsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::recaptchaenterprise::v1::
                 ListRelatedAccountGroupMembershipsRequest const& request) {
        return child_->ListRelatedAccountGroupMemberships(context, request);
      },
      context, request, __func__, tracing_options_);
}

StatusOr<google::cloud::recaptchaenterprise::v1::
             SearchRelatedAccountGroupMembershipsResponse>
RecaptchaEnterpriseServiceLogging::SearchRelatedAccountGroupMemberships(
    grpc::ClientContext& context,
    google::cloud::recaptchaenterprise::v1::
        SearchRelatedAccountGroupMembershipsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](grpc::ClientContext& context,
             google::cloud::recaptchaenterprise::v1::
                 SearchRelatedAccountGroupMembershipsRequest const& request) {
        return child_->SearchRelatedAccountGroupMemberships(context, request);
      },
      context, request, __func__, tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace recaptchaenterprise_v1_internal
}  // namespace cloud
}  // namespace google
