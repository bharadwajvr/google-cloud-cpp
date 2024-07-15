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
// source: google/cloud/run/v2/revision.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RUN_V2_REVISIONS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RUN_V2_REVISIONS_CLIENT_H

#include "google/cloud/run/v2/revisions_connection.h"
#include "google/cloud/experimental_tag.h"
#include "google/cloud/future.h"
#include "google/cloud/no_await_tag.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <map>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace run_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Cloud Run Revision Control Plane API.
///
/// @par Equality
///
/// Instances of this class created via copy-construction or copy-assignment
/// always compare equal. Instances created with equal
/// `std::shared_ptr<*Connection>` objects compare equal. Objects that compare
/// equal share the same underlying resources.
///
/// @par Performance
///
/// Creating a new instance of this class is a relatively expensive operation,
/// new objects establish new connections to the service. In contrast,
/// copy-construction, move-construction, and the corresponding assignment
/// operations are relatively efficient as the copies share all underlying
/// resources.
///
/// @par Thread Safety
///
/// Concurrent access to different instances of this class, even if they compare
/// equal, is guaranteed to work. Two or more threads operating on the same
/// instance of this class is not guaranteed to work. Since copy-construction
/// and move-construction is a relatively efficient operation, consider using
/// such a copy when using this class from multiple threads.
///
class RevisionsClient {
 public:
  explicit RevisionsClient(std::shared_ptr<RevisionsConnection> connection,
                           Options opts = {});
  ~RevisionsClient();

  ///@{
  /// @name Copy and move support
  RevisionsClient(RevisionsClient const&) = default;
  RevisionsClient& operator=(RevisionsClient const&) = default;
  RevisionsClient(RevisionsClient&&) = default;
  RevisionsClient& operator=(RevisionsClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(RevisionsClient const& a, RevisionsClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(RevisionsClient const& a, RevisionsClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Gets information about a Revision.
  ///
  /// @param name  Required. The full name of the Revision.
  ///  Format:
  ///  projects/{project}/locations/{location}/services/{service}/revisions/{revision}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.run.v2.Revision])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.run.v2.GetRevisionRequest]: @googleapis_reference_link{google/cloud/run/v2/revision.proto#L94}
  /// [google.cloud.run.v2.Revision]: @googleapis_reference_link{google/cloud/run/v2/revision.proto#L162}
  ///
  // clang-format on
  StatusOr<google::cloud::run::v2::Revision> GetRevision(
      std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Gets information about a Revision.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.run.v2.GetRevisionRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.run.v2.Revision])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.run.v2.GetRevisionRequest]: @googleapis_reference_link{google/cloud/run/v2/revision.proto#L94}
  /// [google.cloud.run.v2.Revision]: @googleapis_reference_link{google/cloud/run/v2/revision.proto#L162}
  ///
  // clang-format on
  StatusOr<google::cloud::run::v2::Revision> GetRevision(
      google::cloud::run::v2::GetRevisionRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Lists Revisions from a given Service, or from a given location.  Results
  /// are sorted by creation time, descending.
  ///
  /// @param parent  Required. The Service from which the Revisions should be listed.
  ///  To list all Revisions across Services, use "-" instead of Service name.
  ///  Format:
  ///  projects/{project}/locations/{location}/services/{service}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [StreamRange](@ref google::cloud::StreamRange)
  ///     to iterate of the results. See the documentation of this type for
  ///     details. In brief, this class has `begin()` and `end()` member
  ///     functions returning a iterator class meeting the
  ///     [input iterator requirements]. The value type for this iterator is a
  ///     [`StatusOr`] as the iteration may fail even after some values are
  ///     retrieved successfully, for example, if there is a network disconnect.
  ///     An empty set of results does not indicate an error, it indicates
  ///     that there are no resources meeting the request criteria.
  ///     On a successful iteration the `StatusOr<T>` contains elements of type
  ///     [google.cloud.run.v2.Revision], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.run.v2.ListRevisionsRequest]: @googleapis_reference_link{google/cloud/run/v2/revision.proto#L105}
  /// [google.cloud.run.v2.Revision]: @googleapis_reference_link{google/cloud/run/v2/revision.proto#L162}
  ///
  // clang-format on
  StreamRange<google::cloud::run::v2::Revision> ListRevisions(
      std::string const& parent, Options opts = {});

  // clang-format off
  ///
  /// Lists Revisions from a given Service, or from a given location.  Results
  /// are sorted by creation time, descending.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.run.v2.ListRevisionsRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [StreamRange](@ref google::cloud::StreamRange)
  ///     to iterate of the results. See the documentation of this type for
  ///     details. In brief, this class has `begin()` and `end()` member
  ///     functions returning a iterator class meeting the
  ///     [input iterator requirements]. The value type for this iterator is a
  ///     [`StatusOr`] as the iteration may fail even after some values are
  ///     retrieved successfully, for example, if there is a network disconnect.
  ///     An empty set of results does not indicate an error, it indicates
  ///     that there are no resources meeting the request criteria.
  ///     On a successful iteration the `StatusOr<T>` contains elements of type
  ///     [google.cloud.run.v2.Revision], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.run.v2.ListRevisionsRequest]: @googleapis_reference_link{google/cloud/run/v2/revision.proto#L105}
  /// [google.cloud.run.v2.Revision]: @googleapis_reference_link{google/cloud/run/v2/revision.proto#L162}
  ///
  // clang-format on
  StreamRange<google::cloud::run::v2::Revision> ListRevisions(
      google::cloud::run::v2::ListRevisionsRequest request, Options opts = {});

  // clang-format off
  ///
  /// Deletes a Revision.
  ///
  /// @param name  Required. The name of the Revision to delete.
  ///  Format:
  ///  projects/{project}/locations/{location}/services/{service}/revisions/{revision}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.run.v2.Revision] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.run.v2.DeleteRevisionRequest]: @googleapis_reference_link{google/cloud/run/v2/revision.proto#L141}
  /// [google.cloud.run.v2.Revision]: @googleapis_reference_link{google/cloud/run/v2/revision.proto#L162}
  ///
  // clang-format on
  future<StatusOr<google::cloud::run::v2::Revision>> DeleteRevision(
      std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// @copybrief DeleteRevision
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::longrunning::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::longrunning::Operation> DeleteRevision(
      ExperimentalTag, NoAwaitTag, std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Deletes a Revision.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.run.v2.DeleteRevisionRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.run.v2.Revision] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.run.v2.DeleteRevisionRequest]: @googleapis_reference_link{google/cloud/run/v2/revision.proto#L141}
  /// [google.cloud.run.v2.Revision]: @googleapis_reference_link{google/cloud/run/v2/revision.proto#L162}
  ///
  // clang-format on
  future<StatusOr<google::cloud::run::v2::Revision>> DeleteRevision(
      google::cloud::run::v2::DeleteRevisionRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief DeleteRevision
  ///
  /// Specifying the [`NoAwaitTag`] immediately returns the
  /// [`google::longrunning::Operation`] that corresponds to the Long Running
  /// Operation that has been started. No polling for operation status occurs.
  ///
  /// [`NoAwaitTag`]: @ref google::cloud::NoAwaitTag
  ///
  // clang-format on
  StatusOr<google::longrunning::Operation> DeleteRevision(
      ExperimentalTag, NoAwaitTag,
      google::cloud::run::v2::DeleteRevisionRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// @copybrief DeleteRevision
  ///
  /// This method accepts a `google::longrunning::Operation` that corresponds
  /// to a previously started Long Running Operation (LRO) and polls the status
  /// of the LRO in the background.
  ///
  // clang-format on
  future<StatusOr<google::cloud::run::v2::Revision>> DeleteRevision(
      ExperimentalTag, google::longrunning::Operation const& operation,
      Options opts = {});

 private:
  std::shared_ptr<RevisionsConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace run_v2
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RUN_V2_REVISIONS_CLIENT_H
