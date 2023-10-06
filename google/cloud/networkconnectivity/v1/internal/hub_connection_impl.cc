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
// source: google/cloud/networkconnectivity/v1/hub.proto

#include "google/cloud/networkconnectivity/v1/internal/hub_connection_impl.h"
#include "google/cloud/networkconnectivity/v1/internal/hub_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/async_long_running_operation.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace networkconnectivity_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN
namespace {

std::unique_ptr<networkconnectivity_v1::HubServiceRetryPolicy> retry_policy(
    Options const& options) {
  return options.get<networkconnectivity_v1::HubServiceRetryPolicyOption>()
      ->clone();
}

std::unique_ptr<BackoffPolicy> backoff_policy(Options const& options) {
  return options.get<networkconnectivity_v1::HubServiceBackoffPolicyOption>()
      ->clone();
}

std::unique_ptr<networkconnectivity_v1::HubServiceConnectionIdempotencyPolicy>
idempotency_policy(Options const& options) {
  return options
      .get<
          networkconnectivity_v1::HubServiceConnectionIdempotencyPolicyOption>()
      ->clone();
}

std::unique_ptr<PollingPolicy> polling_policy(Options const& options) {
  return options.get<networkconnectivity_v1::HubServicePollingPolicyOption>()
      ->clone();
}

}  // namespace

HubServiceConnectionImpl::HubServiceConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<networkconnectivity_v1_internal::HubServiceStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      HubServiceConnection::options())) {}

StreamRange<google::cloud::networkconnectivity::v1::Hub>
HubServiceConnectionImpl::ListHubs(
    google::cloud::networkconnectivity::v1::ListHubsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListHubs(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::networkconnectivity::v1::Hub>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<networkconnectivity_v1::HubServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::networkconnectivity::v1::ListHubsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context,
                google::cloud::networkconnectivity::v1::ListHubsRequest const&
                    request) { return stub->ListHubs(context, request); },
            r, function_name);
      },
      [](google::cloud::networkconnectivity::v1::ListHubsResponse r) {
        std::vector<google::cloud::networkconnectivity::v1::Hub> result(
            r.hubs().size());
        auto& messages = *r.mutable_hubs();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::networkconnectivity::v1::Hub>
HubServiceConnectionImpl::GetHub(
    google::cloud::networkconnectivity::v1::GetHubRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetHub(request),
      [this](grpc::ClientContext& context,
             google::cloud::networkconnectivity::v1::GetHubRequest const&
                 request) { return stub_->GetHub(context, request); },
      request, __func__);
}

future<StatusOr<google::cloud::networkconnectivity::v1::Hub>>
HubServiceConnectionImpl::CreateHub(
    google::cloud::networkconnectivity::v1::CreateHubRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::networkconnectivity::v1::Hub>(
      background_->cq(), request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::networkconnectivity::v1::CreateHubRequest const&
              request) {
        return stub->AsyncCreateHub(cq, std::move(context), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::networkconnectivity::v1::Hub>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateHub(request),
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::networkconnectivity::v1::Hub>>
HubServiceConnectionImpl::UpdateHub(
    google::cloud::networkconnectivity::v1::UpdateHubRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::networkconnectivity::v1::Hub>(
      background_->cq(), request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::networkconnectivity::v1::UpdateHubRequest const&
              request) {
        return stub->AsyncUpdateHub(cq, std::move(context), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::networkconnectivity::v1::Hub>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateHub(request),
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::networkconnectivity::v1::OperationMetadata>>
HubServiceConnectionImpl::DeleteHub(
    google::cloud::networkconnectivity::v1::DeleteHubRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::networkconnectivity::v1::OperationMetadata>(
      background_->cq(), request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::networkconnectivity::v1::DeleteHubRequest const&
              request) {
        return stub->AsyncDeleteHub(cq, std::move(context), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultMetadata<
          google::cloud::networkconnectivity::v1::OperationMetadata>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteHub(request),
      polling_policy(*current), __func__);
}

StreamRange<google::cloud::networkconnectivity::v1::Spoke>
HubServiceConnectionImpl::ListHubSpokes(
    google::cloud::networkconnectivity::v1::ListHubSpokesRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListHubSpokes(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::networkconnectivity::v1::Spoke>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<networkconnectivity_v1::HubServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::networkconnectivity::v1::ListHubSpokesRequest const&
              r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::networkconnectivity::v1::
                       ListHubSpokesRequest const& request) {
              return stub->ListHubSpokes(context, request);
            },
            r, function_name);
      },
      [](google::cloud::networkconnectivity::v1::ListHubSpokesResponse r) {
        std::vector<google::cloud::networkconnectivity::v1::Spoke> result(
            r.spokes().size());
        auto& messages = *r.mutable_spokes();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StreamRange<google::cloud::networkconnectivity::v1::Spoke>
HubServiceConnectionImpl::ListSpokes(
    google::cloud::networkconnectivity::v1::ListSpokesRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListSpokes(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::networkconnectivity::v1::Spoke>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<networkconnectivity_v1::HubServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::networkconnectivity::v1::ListSpokesRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context,
                google::cloud::networkconnectivity::v1::ListSpokesRequest const&
                    request) { return stub->ListSpokes(context, request); },
            r, function_name);
      },
      [](google::cloud::networkconnectivity::v1::ListSpokesResponse r) {
        std::vector<google::cloud::networkconnectivity::v1::Spoke> result(
            r.spokes().size());
        auto& messages = *r.mutable_spokes();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::networkconnectivity::v1::Spoke>
HubServiceConnectionImpl::GetSpoke(
    google::cloud::networkconnectivity::v1::GetSpokeRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetSpoke(request),
      [this](grpc::ClientContext& context,
             google::cloud::networkconnectivity::v1::GetSpokeRequest const&
                 request) { return stub_->GetSpoke(context, request); },
      request, __func__);
}

future<StatusOr<google::cloud::networkconnectivity::v1::Spoke>>
HubServiceConnectionImpl::CreateSpoke(
    google::cloud::networkconnectivity::v1::CreateSpokeRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::networkconnectivity::v1::Spoke>(
      background_->cq(), request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::networkconnectivity::v1::CreateSpokeRequest const&
              request) {
        return stub->AsyncCreateSpoke(cq, std::move(context), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::networkconnectivity::v1::Spoke>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->CreateSpoke(request),
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::networkconnectivity::v1::Spoke>>
HubServiceConnectionImpl::UpdateSpoke(
    google::cloud::networkconnectivity::v1::UpdateSpokeRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::networkconnectivity::v1::Spoke>(
      background_->cq(), request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::networkconnectivity::v1::UpdateSpokeRequest const&
              request) {
        return stub->AsyncUpdateSpoke(cq, std::move(context), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::networkconnectivity::v1::Spoke>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->UpdateSpoke(request),
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::networkconnectivity::v1::RejectHubSpokeResponse>>
HubServiceConnectionImpl::RejectHubSpoke(
    google::cloud::networkconnectivity::v1::RejectHubSpokeRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::networkconnectivity::v1::RejectHubSpokeResponse>(
      background_->cq(), request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::networkconnectivity::v1::RejectHubSpokeRequest const&
              request) {
        return stub->AsyncRejectHubSpoke(cq, std::move(context), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::networkconnectivity::v1::RejectHubSpokeResponse>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->RejectHubSpoke(request),
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::networkconnectivity::v1::AcceptHubSpokeResponse>>
HubServiceConnectionImpl::AcceptHubSpoke(
    google::cloud::networkconnectivity::v1::AcceptHubSpokeRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::networkconnectivity::v1::AcceptHubSpokeResponse>(
      background_->cq(), request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::networkconnectivity::v1::AcceptHubSpokeRequest const&
              request) {
        return stub->AsyncAcceptHubSpoke(cq, std::move(context), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultResponse<
          google::cloud::networkconnectivity::v1::AcceptHubSpokeResponse>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->AcceptHubSpoke(request),
      polling_policy(*current), __func__);
}

future<StatusOr<google::cloud::networkconnectivity::v1::OperationMetadata>>
HubServiceConnectionImpl::DeleteSpoke(
    google::cloud::networkconnectivity::v1::DeleteSpokeRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::AsyncLongRunningOperation<
      google::cloud::networkconnectivity::v1::OperationMetadata>(
      background_->cq(), request,
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::cloud::networkconnectivity::v1::DeleteSpokeRequest const&
              request) {
        return stub->AsyncDeleteSpoke(cq, std::move(context), request);
      },
      [stub = stub_](google::cloud::CompletionQueue& cq,
                     std::shared_ptr<grpc::ClientContext> context,
                     google::longrunning::GetOperationRequest const& request) {
        return stub->AsyncGetOperation(cq, std::move(context), request);
      },
      [stub = stub_](
          google::cloud::CompletionQueue& cq,
          std::shared_ptr<grpc::ClientContext> context,
          google::longrunning::CancelOperationRequest const& request) {
        return stub->AsyncCancelOperation(cq, std::move(context), request);
      },
      &google::cloud::internal::ExtractLongRunningResultMetadata<
          google::cloud::networkconnectivity::v1::OperationMetadata>,
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->DeleteSpoke(request),
      polling_policy(*current), __func__);
}

StatusOr<google::cloud::networkconnectivity::v1::RouteTable>
HubServiceConnectionImpl::GetRouteTable(
    google::cloud::networkconnectivity::v1::GetRouteTableRequest const&
        request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetRouteTable(request),
      [this](grpc::ClientContext& context,
             google::cloud::networkconnectivity::v1::GetRouteTableRequest const&
                 request) { return stub_->GetRouteTable(context, request); },
      request, __func__);
}

StatusOr<google::cloud::networkconnectivity::v1::Route>
HubServiceConnectionImpl::GetRoute(
    google::cloud::networkconnectivity::v1::GetRouteRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetRoute(request),
      [this](grpc::ClientContext& context,
             google::cloud::networkconnectivity::v1::GetRouteRequest const&
                 request) { return stub_->GetRoute(context, request); },
      request, __func__);
}

StreamRange<google::cloud::networkconnectivity::v1::Route>
HubServiceConnectionImpl::ListRoutes(
    google::cloud::networkconnectivity::v1::ListRoutesRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListRoutes(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::networkconnectivity::v1::Route>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<networkconnectivity_v1::HubServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::networkconnectivity::v1::ListRoutesRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context,
                google::cloud::networkconnectivity::v1::ListRoutesRequest const&
                    request) { return stub->ListRoutes(context, request); },
            r, function_name);
      },
      [](google::cloud::networkconnectivity::v1::ListRoutesResponse r) {
        std::vector<google::cloud::networkconnectivity::v1::Route> result(
            r.routes().size());
        auto& messages = *r.mutable_routes();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StreamRange<google::cloud::networkconnectivity::v1::RouteTable>
HubServiceConnectionImpl::ListRouteTables(
    google::cloud::networkconnectivity::v1::ListRouteTablesRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListRouteTables(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::networkconnectivity::v1::RouteTable>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<networkconnectivity_v1::HubServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::networkconnectivity::v1::ListRouteTablesRequest const&
              r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::networkconnectivity::v1::
                       ListRouteTablesRequest const& request) {
              return stub->ListRouteTables(context, request);
            },
            r, function_name);
      },
      [](google::cloud::networkconnectivity::v1::ListRouteTablesResponse r) {
        std::vector<google::cloud::networkconnectivity::v1::RouteTable> result(
            r.route_tables().size());
        auto& messages = *r.mutable_route_tables();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::networkconnectivity::v1::Group>
HubServiceConnectionImpl::GetGroup(
    google::cloud::networkconnectivity::v1::GetGroupRequest const& request) {
  auto current = google::cloud::internal::SaveCurrentOptions();
  return google::cloud::internal::RetryLoop(
      retry_policy(*current), backoff_policy(*current),
      idempotency_policy(*current)->GetGroup(request),
      [this](grpc::ClientContext& context,
             google::cloud::networkconnectivity::v1::GetGroupRequest const&
                 request) { return stub_->GetGroup(context, request); },
      request, __func__);
}

StreamRange<google::cloud::networkconnectivity::v1::Group>
HubServiceConnectionImpl::ListGroups(
    google::cloud::networkconnectivity::v1::ListGroupsRequest request) {
  request.clear_page_token();
  auto current = google::cloud::internal::SaveCurrentOptions();
  auto idempotency = idempotency_policy(*current)->ListGroups(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::networkconnectivity::v1::Group>>(
      std::move(request),
      [idempotency, function_name, stub = stub_,
       retry = std::shared_ptr<networkconnectivity_v1::HubServiceRetryPolicy>(
           retry_policy(*current)),
       backoff = std::shared_ptr<BackoffPolicy>(backoff_policy(*current))](
          google::cloud::networkconnectivity::v1::ListGroupsRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](
                grpc::ClientContext& context,
                google::cloud::networkconnectivity::v1::ListGroupsRequest const&
                    request) { return stub->ListGroups(context, request); },
            r, function_name);
      },
      [](google::cloud::networkconnectivity::v1::ListGroupsResponse r) {
        std::vector<google::cloud::networkconnectivity::v1::Group> result(
            r.groups().size());
        auto& messages = *r.mutable_groups();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace networkconnectivity_v1_internal
}  // namespace cloud
}  // namespace google
