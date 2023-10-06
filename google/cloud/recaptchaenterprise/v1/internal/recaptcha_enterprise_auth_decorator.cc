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

#include "google/cloud/recaptchaenterprise/v1/internal/recaptcha_enterprise_auth_decorator.h"
#include <google/cloud/recaptchaenterprise/v1/recaptchaenterprise.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace recaptchaenterprise_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

RecaptchaEnterpriseServiceAuth::RecaptchaEnterpriseServiceAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<RecaptchaEnterpriseServiceStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::recaptchaenterprise::v1::Assessment>
RecaptchaEnterpriseServiceAuth::CreateAssessment(
    grpc::ClientContext& context,
    google::cloud::recaptchaenterprise::v1::CreateAssessmentRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateAssessment(context, request);
}

StatusOr<google::cloud::recaptchaenterprise::v1::AnnotateAssessmentResponse>
RecaptchaEnterpriseServiceAuth::AnnotateAssessment(
    grpc::ClientContext& context,
    google::cloud::recaptchaenterprise::v1::AnnotateAssessmentRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->AnnotateAssessment(context, request);
}

StatusOr<google::cloud::recaptchaenterprise::v1::Key>
RecaptchaEnterpriseServiceAuth::CreateKey(
    grpc::ClientContext& context,
    google::cloud::recaptchaenterprise::v1::CreateKeyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateKey(context, request);
}

StatusOr<google::cloud::recaptchaenterprise::v1::ListKeysResponse>
RecaptchaEnterpriseServiceAuth::ListKeys(
    grpc::ClientContext& context,
    google::cloud::recaptchaenterprise::v1::ListKeysRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListKeys(context, request);
}

StatusOr<
    google::cloud::recaptchaenterprise::v1::RetrieveLegacySecretKeyResponse>
RecaptchaEnterpriseServiceAuth::RetrieveLegacySecretKey(
    grpc::ClientContext& context,
    google::cloud::recaptchaenterprise::v1::
        RetrieveLegacySecretKeyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->RetrieveLegacySecretKey(context, request);
}

StatusOr<google::cloud::recaptchaenterprise::v1::Key>
RecaptchaEnterpriseServiceAuth::GetKey(
    grpc::ClientContext& context,
    google::cloud::recaptchaenterprise::v1::GetKeyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetKey(context, request);
}

StatusOr<google::cloud::recaptchaenterprise::v1::Key>
RecaptchaEnterpriseServiceAuth::UpdateKey(
    grpc::ClientContext& context,
    google::cloud::recaptchaenterprise::v1::UpdateKeyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateKey(context, request);
}

Status RecaptchaEnterpriseServiceAuth::DeleteKey(
    grpc::ClientContext& context,
    google::cloud::recaptchaenterprise::v1::DeleteKeyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteKey(context, request);
}

StatusOr<google::cloud::recaptchaenterprise::v1::Key>
RecaptchaEnterpriseServiceAuth::MigrateKey(
    grpc::ClientContext& context,
    google::cloud::recaptchaenterprise::v1::MigrateKeyRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->MigrateKey(context, request);
}

StatusOr<google::cloud::recaptchaenterprise::v1::Metrics>
RecaptchaEnterpriseServiceAuth::GetMetrics(
    grpc::ClientContext& context,
    google::cloud::recaptchaenterprise::v1::GetMetricsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetMetrics(context, request);
}

StatusOr<google::cloud::recaptchaenterprise::v1::FirewallPolicy>
RecaptchaEnterpriseServiceAuth::CreateFirewallPolicy(
    grpc::ClientContext& context,
    google::cloud::recaptchaenterprise::v1::CreateFirewallPolicyRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateFirewallPolicy(context, request);
}

StatusOr<google::cloud::recaptchaenterprise::v1::ListFirewallPoliciesResponse>
RecaptchaEnterpriseServiceAuth::ListFirewallPolicies(
    grpc::ClientContext& context,
    google::cloud::recaptchaenterprise::v1::ListFirewallPoliciesRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListFirewallPolicies(context, request);
}

StatusOr<google::cloud::recaptchaenterprise::v1::FirewallPolicy>
RecaptchaEnterpriseServiceAuth::GetFirewallPolicy(
    grpc::ClientContext& context,
    google::cloud::recaptchaenterprise::v1::GetFirewallPolicyRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetFirewallPolicy(context, request);
}

StatusOr<google::cloud::recaptchaenterprise::v1::FirewallPolicy>
RecaptchaEnterpriseServiceAuth::UpdateFirewallPolicy(
    grpc::ClientContext& context,
    google::cloud::recaptchaenterprise::v1::UpdateFirewallPolicyRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateFirewallPolicy(context, request);
}

Status RecaptchaEnterpriseServiceAuth::DeleteFirewallPolicy(
    grpc::ClientContext& context,
    google::cloud::recaptchaenterprise::v1::DeleteFirewallPolicyRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteFirewallPolicy(context, request);
}

StatusOr<
    google::cloud::recaptchaenterprise::v1::ListRelatedAccountGroupsResponse>
RecaptchaEnterpriseServiceAuth::ListRelatedAccountGroups(
    grpc::ClientContext& context,
    google::cloud::recaptchaenterprise::v1::
        ListRelatedAccountGroupsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListRelatedAccountGroups(context, request);
}

StatusOr<google::cloud::recaptchaenterprise::v1::
             ListRelatedAccountGroupMembershipsResponse>
RecaptchaEnterpriseServiceAuth::ListRelatedAccountGroupMemberships(
    grpc::ClientContext& context,
    google::cloud::recaptchaenterprise::v1::
        ListRelatedAccountGroupMembershipsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListRelatedAccountGroupMemberships(context, request);
}

StatusOr<google::cloud::recaptchaenterprise::v1::
             SearchRelatedAccountGroupMembershipsResponse>
RecaptchaEnterpriseServiceAuth::SearchRelatedAccountGroupMemberships(
    grpc::ClientContext& context,
    google::cloud::recaptchaenterprise::v1::
        SearchRelatedAccountGroupMembershipsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->SearchRelatedAccountGroupMemberships(context, request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace recaptchaenterprise_v1_internal
}  // namespace cloud
}  // namespace google
