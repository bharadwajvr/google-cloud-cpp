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
// source: google/cloud/video/livestream/v1/service.proto

#include "google/cloud/video/livestream/v1/internal/livestream_auth_decorator.h"
#include <google/cloud/video/livestream/v1/service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace video_livestream_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

LivestreamServiceAuth::LivestreamServiceAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<LivestreamServiceStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

future<StatusOr<google::longrunning::Operation>>
LivestreamServiceAuth::AsyncCreateChannel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::video::livestream::v1::CreateChannelRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateChannel(cq, *std::move(context),
                                         std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> LivestreamServiceAuth::CreateChannel(
    grpc::ClientContext& context, Options options,
    google::cloud::video::livestream::v1::CreateChannelRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateChannel(context, options, request);
}

StatusOr<google::cloud::video::livestream::v1::ListChannelsResponse>
LivestreamServiceAuth::ListChannels(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::livestream::v1::ListChannelsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListChannels(context, options, request);
}

StatusOr<google::cloud::video::livestream::v1::Channel>
LivestreamServiceAuth::GetChannel(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::livestream::v1::GetChannelRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetChannel(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
LivestreamServiceAuth::AsyncDeleteChannel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::video::livestream::v1::DeleteChannelRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteChannel(cq, *std::move(context),
                                         std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> LivestreamServiceAuth::DeleteChannel(
    grpc::ClientContext& context, Options options,
    google::cloud::video::livestream::v1::DeleteChannelRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteChannel(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
LivestreamServiceAuth::AsyncUpdateChannel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::video::livestream::v1::UpdateChannelRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateChannel(cq, *std::move(context),
                                         std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> LivestreamServiceAuth::UpdateChannel(
    grpc::ClientContext& context, Options options,
    google::cloud::video::livestream::v1::UpdateChannelRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateChannel(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
LivestreamServiceAuth::AsyncStartChannel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::video::livestream::v1::StartChannelRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncStartChannel(cq, *std::move(context),
                                        std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> LivestreamServiceAuth::StartChannel(
    grpc::ClientContext& context, Options options,
    google::cloud::video::livestream::v1::StartChannelRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->StartChannel(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
LivestreamServiceAuth::AsyncStopChannel(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::video::livestream::v1::StopChannelRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncStopChannel(cq, *std::move(context),
                                       std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> LivestreamServiceAuth::StopChannel(
    grpc::ClientContext& context, Options options,
    google::cloud::video::livestream::v1::StopChannelRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->StopChannel(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
LivestreamServiceAuth::AsyncCreateInput(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::video::livestream::v1::CreateInputRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateInput(cq, *std::move(context),
                                       std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> LivestreamServiceAuth::CreateInput(
    grpc::ClientContext& context, Options options,
    google::cloud::video::livestream::v1::CreateInputRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateInput(context, options, request);
}

StatusOr<google::cloud::video::livestream::v1::ListInputsResponse>
LivestreamServiceAuth::ListInputs(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::livestream::v1::ListInputsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListInputs(context, options, request);
}

StatusOr<google::cloud::video::livestream::v1::Input>
LivestreamServiceAuth::GetInput(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::livestream::v1::GetInputRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetInput(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
LivestreamServiceAuth::AsyncDeleteInput(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::video::livestream::v1::DeleteInputRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteInput(cq, *std::move(context),
                                       std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> LivestreamServiceAuth::DeleteInput(
    grpc::ClientContext& context, Options options,
    google::cloud::video::livestream::v1::DeleteInputRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteInput(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
LivestreamServiceAuth::AsyncUpdateInput(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::video::livestream::v1::UpdateInputRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateInput(cq, *std::move(context),
                                       std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> LivestreamServiceAuth::UpdateInput(
    grpc::ClientContext& context, Options options,
    google::cloud::video::livestream::v1::UpdateInputRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdateInput(context, options, request);
}

StatusOr<google::cloud::video::livestream::v1::Event>
LivestreamServiceAuth::CreateEvent(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::livestream::v1::CreateEventRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateEvent(context, options, request);
}

StatusOr<google::cloud::video::livestream::v1::ListEventsResponse>
LivestreamServiceAuth::ListEvents(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::livestream::v1::ListEventsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListEvents(context, options, request);
}

StatusOr<google::cloud::video::livestream::v1::Event>
LivestreamServiceAuth::GetEvent(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::livestream::v1::GetEventRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetEvent(context, options, request);
}

Status LivestreamServiceAuth::DeleteEvent(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::livestream::v1::DeleteEventRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteEvent(context, options, request);
}

StatusOr<google::cloud::video::livestream::v1::ListClipsResponse>
LivestreamServiceAuth::ListClips(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::livestream::v1::ListClipsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListClips(context, options, request);
}

StatusOr<google::cloud::video::livestream::v1::Clip>
LivestreamServiceAuth::GetClip(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::livestream::v1::GetClipRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetClip(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
LivestreamServiceAuth::AsyncCreateClip(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::video::livestream::v1::CreateClipRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateClip(cq, *std::move(context),
                                      std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> LivestreamServiceAuth::CreateClip(
    grpc::ClientContext& context, Options options,
    google::cloud::video::livestream::v1::CreateClipRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateClip(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
LivestreamServiceAuth::AsyncDeleteClip(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::video::livestream::v1::DeleteClipRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteClip(cq, *std::move(context),
                                      std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> LivestreamServiceAuth::DeleteClip(
    grpc::ClientContext& context, Options options,
    google::cloud::video::livestream::v1::DeleteClipRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteClip(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
LivestreamServiceAuth::AsyncCreateAsset(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::video::livestream::v1::CreateAssetRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateAsset(cq, *std::move(context),
                                       std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> LivestreamServiceAuth::CreateAsset(
    grpc::ClientContext& context, Options options,
    google::cloud::video::livestream::v1::CreateAssetRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateAsset(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
LivestreamServiceAuth::AsyncDeleteAsset(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::video::livestream::v1::DeleteAssetRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteAsset(cq, *std::move(context),
                                       std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> LivestreamServiceAuth::DeleteAsset(
    grpc::ClientContext& context, Options options,
    google::cloud::video::livestream::v1::DeleteAssetRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteAsset(context, options, request);
}

StatusOr<google::cloud::video::livestream::v1::Asset>
LivestreamServiceAuth::GetAsset(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::livestream::v1::GetAssetRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetAsset(context, options, request);
}

StatusOr<google::cloud::video::livestream::v1::ListAssetsResponse>
LivestreamServiceAuth::ListAssets(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::livestream::v1::ListAssetsRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListAssets(context, options, request);
}

StatusOr<google::cloud::video::livestream::v1::Pool>
LivestreamServiceAuth::GetPool(
    grpc::ClientContext& context, Options const& options,
    google::cloud::video::livestream::v1::GetPoolRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetPool(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
LivestreamServiceAuth::AsyncUpdatePool(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::video::livestream::v1::UpdatePoolRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdatePool(cq, *std::move(context),
                                      std::move(options), request);
      });
}

StatusOr<google::longrunning::Operation> LivestreamServiceAuth::UpdatePool(
    grpc::ClientContext& context, Options options,
    google::cloud::video::livestream::v1::UpdatePoolRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->UpdatePool(context, options, request);
}

future<StatusOr<google::longrunning::Operation>>
LivestreamServiceAuth::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::GetOperationRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncGetOperation(cq, *std::move(context),
                                        std::move(options), request);
      });
}

future<Status> LivestreamServiceAuth::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::shared_ptr<grpc::ClientContext> context,
    google::cloud::internal::ImmutableOptions options,
    google::longrunning::CancelOperationRequest const& request) {
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child = child_, options = std::move(options),
             request](future<StatusOr<std::shared_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) return make_ready_future(std::move(context).status());
        return child->AsyncCancelOperation(cq, *std::move(context),
                                           std::move(options), request);
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace video_livestream_v1_internal
}  // namespace cloud
}  // namespace google
