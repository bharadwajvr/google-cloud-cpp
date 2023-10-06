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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RECAPTCHAENTERPRISE_V1_MOCKS_MOCK_RECAPTCHA_ENTERPRISE_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RECAPTCHAENTERPRISE_V1_MOCKS_MOCK_RECAPTCHA_ENTERPRISE_CONNECTION_H

#include "google/cloud/recaptchaenterprise/v1/recaptcha_enterprise_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace recaptchaenterprise_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `RecaptchaEnterpriseServiceConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `RecaptchaEnterpriseServiceClient`.
 * To do so, construct an object of type `RecaptchaEnterpriseServiceClient` with
 * an instance of this class. Then use the Google Test framework functions to
 * program the behavior of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockRecaptchaEnterpriseServiceConnection
    : public recaptchaenterprise_v1::RecaptchaEnterpriseServiceConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      StatusOr<google::cloud::recaptchaenterprise::v1::Assessment>,
      CreateAssessment,
      (google::cloud::recaptchaenterprise::v1::CreateAssessmentRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<
          google::cloud::recaptchaenterprise::v1::AnnotateAssessmentResponse>,
      AnnotateAssessment,
      (google::cloud::recaptchaenterprise::v1::AnnotateAssessmentRequest const&
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::recaptchaenterprise::v1::Key>, CreateKey,
      (google::cloud::recaptchaenterprise::v1::CreateKeyRequest const& request),
      (override));

  MOCK_METHOD((StreamRange<google::cloud::recaptchaenterprise::v1::Key>),
              ListKeys,
              (google::cloud::recaptchaenterprise::v1::ListKeysRequest request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::recaptchaenterprise::v1::
                           RetrieveLegacySecretKeyResponse>,
              RetrieveLegacySecretKey,
              (google::cloud::recaptchaenterprise::v1::
                   RetrieveLegacySecretKeyRequest const& request),
              (override));

  MOCK_METHOD(
      StatusOr<google::cloud::recaptchaenterprise::v1::Key>, GetKey,
      (google::cloud::recaptchaenterprise::v1::GetKeyRequest const& request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::recaptchaenterprise::v1::Key>, UpdateKey,
      (google::cloud::recaptchaenterprise::v1::UpdateKeyRequest const& request),
      (override));

  MOCK_METHOD(
      Status, DeleteKey,
      (google::cloud::recaptchaenterprise::v1::DeleteKeyRequest const& request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::recaptchaenterprise::v1::Key>, MigrateKey,
              (google::cloud::recaptchaenterprise::v1::MigrateKeyRequest const&
                   request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::recaptchaenterprise::v1::Metrics>,
              GetMetrics,
              (google::cloud::recaptchaenterprise::v1::GetMetricsRequest const&
                   request),
              (override));

  MOCK_METHOD(StatusOr<google::cloud::recaptchaenterprise::v1::FirewallPolicy>,
              CreateFirewallPolicy,
              (google::cloud::recaptchaenterprise::v1::
                   CreateFirewallPolicyRequest const& request),
              (override));

  MOCK_METHOD(
      (StreamRange<google::cloud::recaptchaenterprise::v1::FirewallPolicy>),
      ListFirewallPolicies,
      (google::cloud::recaptchaenterprise::v1::ListFirewallPoliciesRequest
           request),
      (override));

  MOCK_METHOD(
      StatusOr<google::cloud::recaptchaenterprise::v1::FirewallPolicy>,
      GetFirewallPolicy,
      (google::cloud::recaptchaenterprise::v1::GetFirewallPolicyRequest const&
           request),
      (override));

  MOCK_METHOD(StatusOr<google::cloud::recaptchaenterprise::v1::FirewallPolicy>,
              UpdateFirewallPolicy,
              (google::cloud::recaptchaenterprise::v1::
                   UpdateFirewallPolicyRequest const& request),
              (override));

  MOCK_METHOD(Status, DeleteFirewallPolicy,
              (google::cloud::recaptchaenterprise::v1::
                   DeleteFirewallPolicyRequest const& request),
              (override));

  MOCK_METHOD(
      (StreamRange<
          google::cloud::recaptchaenterprise::v1::RelatedAccountGroup>),
      ListRelatedAccountGroups,
      (google::cloud::recaptchaenterprise::v1::ListRelatedAccountGroupsRequest
           request),
      (override));

  MOCK_METHOD((StreamRange<google::cloud::recaptchaenterprise::v1::
                               RelatedAccountGroupMembership>),
              ListRelatedAccountGroupMemberships,
              (google::cloud::recaptchaenterprise::v1::
                   ListRelatedAccountGroupMembershipsRequest request),
              (override));

  MOCK_METHOD((StreamRange<google::cloud::recaptchaenterprise::v1::
                               RelatedAccountGroupMembership>),
              SearchRelatedAccountGroupMemberships,
              (google::cloud::recaptchaenterprise::v1::
                   SearchRelatedAccountGroupMembershipsRequest request),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace recaptchaenterprise_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RECAPTCHAENTERPRISE_V1_MOCKS_MOCK_RECAPTCHA_ENTERPRISE_CONNECTION_H
