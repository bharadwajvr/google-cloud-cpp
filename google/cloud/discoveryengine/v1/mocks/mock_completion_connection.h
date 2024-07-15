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

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DISCOVERYENGINE_V1_MOCKS_MOCK_COMPLETION_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DISCOVERYENGINE_V1_MOCKS_MOCK_COMPLETION_CONNECTION_H

#include "google/cloud/discoveryengine/v1/completion_connection.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace discoveryengine_v1_mocks {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

/**
 * A class to mock `CompletionServiceConnection`.
 *
 * Application developers may want to test their code with simulated responses,
 * including errors, from an object of type `CompletionServiceClient`. To do so,
 * construct an object of type `CompletionServiceClient` with an instance of
 * this class. Then use the Google Test framework functions to program the
 * behavior of this mock.
 *
 * @see [This example][bq-mock] for how to test your application with GoogleTest.
 * While the example showcases types from the BigQuery library, the underlying
 * principles apply for any pair of `*Client` and `*Connection`.
 *
 * [bq-mock]: @cloud_cpp_docs_link{bigquery,bigquery-read-mock}
 */
class MockCompletionServiceConnection
    : public discoveryengine_v1::CompletionServiceConnection {
 public:
  MOCK_METHOD(Options, options, (), (override));

  MOCK_METHOD(
      StatusOr<google::cloud::discoveryengine::v1::CompleteQueryResponse>,
      CompleteQuery,
      (google::cloud::discoveryengine::v1::CompleteQueryRequest const& request),
      (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, ImportSuggestionDenyListEntries)` is now ambiguous.
  /// Use `EXPECT_CALL(*mock, ImportSuggestionDenyListEntries(::testing::_))`
  /// instead.
  MOCK_METHOD(future<StatusOr<google::cloud::discoveryengine::v1::
                                  ImportSuggestionDenyListEntriesResponse>>,
              ImportSuggestionDenyListEntries,
              (google::cloud::discoveryengine::v1::
                   ImportSuggestionDenyListEntriesRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>,
              ImportSuggestionDenyListEntries,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::discoveryengine::v1::
                   ImportSuggestionDenyListEntriesRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::discoveryengine::v1::
                                  ImportSuggestionDenyListEntriesResponse>>,
              ImportSuggestionDenyListEntries,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, PurgeSuggestionDenyListEntries)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, PurgeSuggestionDenyListEntries(::testing::_))`
  /// instead.
  MOCK_METHOD(future<StatusOr<google::cloud::discoveryengine::v1::
                                  PurgeSuggestionDenyListEntriesResponse>>,
              PurgeSuggestionDenyListEntries,
              (google::cloud::discoveryengine::v1::
                   PurgeSuggestionDenyListEntriesRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>,
              PurgeSuggestionDenyListEntries,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::discoveryengine::v1::
                   PurgeSuggestionDenyListEntriesRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::discoveryengine::v1::
                                  PurgeSuggestionDenyListEntriesResponse>>,
              PurgeSuggestionDenyListEntries,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, ImportCompletionSuggestions)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, ImportCompletionSuggestions(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::discoveryengine::v1::
                                  ImportCompletionSuggestionsResponse>>,
              ImportCompletionSuggestions,
              (google::cloud::discoveryengine::v1::
                   ImportCompletionSuggestionsRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>,
              ImportCompletionSuggestions,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::discoveryengine::v1::
                   ImportCompletionSuggestionsRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::discoveryengine::v1::
                                  ImportCompletionSuggestionsResponse>>,
              ImportCompletionSuggestions,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));

  /// Due to additional overloads for this method
  /// `EXPECT_CALL(*mock, PurgeCompletionSuggestions)` is now ambiguous. Use
  /// `EXPECT_CALL(*mock, PurgeCompletionSuggestions(::testing::_))` instead.
  MOCK_METHOD(future<StatusOr<google::cloud::discoveryengine::v1::
                                  PurgeCompletionSuggestionsResponse>>,
              PurgeCompletionSuggestions,
              (google::cloud::discoveryengine::v1::
                   PurgeCompletionSuggestionsRequest const& request),
              (override));

  MOCK_METHOD(StatusOr<google::longrunning::Operation>,
              PurgeCompletionSuggestions,
              (ExperimentalTag, NoAwaitTag,
               google::cloud::discoveryengine::v1::
                   PurgeCompletionSuggestionsRequest const& request),
              (override));

  MOCK_METHOD(future<StatusOr<google::cloud::discoveryengine::v1::
                                  PurgeCompletionSuggestionsResponse>>,
              PurgeCompletionSuggestions,
              (ExperimentalTag,
               google::longrunning::Operation const& operation),
              (override));
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace discoveryengine_v1_mocks
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DISCOVERYENGINE_V1_MOCKS_MOCK_COMPLETION_CONNECTION_H
