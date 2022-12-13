// Autogenerated from Pigeon (v4.2.9), do not edit directly.
// See also: https://pub.dev/packages/pigeon

#undef _HAS_EXCEPTIONS

#include "messages.h"

#include <flutter/basic_message_channel.h>
#include <flutter/binary_messenger.h>
#include <flutter/encodable_value.h>
#include <flutter/standard_message_codec.h>

#include <map>
#include <optional>
#include <string>

// TextureMessage

int64_t TextureMessage::texture_id() const { return texture_id_; }
void TextureMessage::set_texture_id(int64_t value_arg) {
  texture_id_ = value_arg;
}

flutter::EncodableMap TextureMessage::ToEncodableMap() const {
  return flutter::EncodableMap{
      {flutter::EncodableValue("textureId"),
       flutter::EncodableValue(texture_id_)},
  };
}

TextureMessage::TextureMessage() {}

TextureMessage::TextureMessage(flutter::EncodableMap map) {
  auto& encodable_texture_id = map.at(flutter::EncodableValue("textureId"));
  if (const int32_t* pointer_texture_id =
          std::get_if<int32_t>(&encodable_texture_id))
    texture_id_ = *pointer_texture_id;
  else if (const int64_t* pointer_texture_id_64 =
               std::get_if<int64_t>(&encodable_texture_id))
    texture_id_ = *pointer_texture_id_64;
}

// LoopingMessage

int64_t LoopingMessage::texture_id() const { return texture_id_; }
void LoopingMessage::set_texture_id(int64_t value_arg) {
  texture_id_ = value_arg;
}

bool LoopingMessage::is_looping() const { return is_looping_; }
void LoopingMessage::set_is_looping(bool value_arg) { is_looping_ = value_arg; }

flutter::EncodableMap LoopingMessage::ToEncodableMap() const {
  return flutter::EncodableMap{
      {flutter::EncodableValue("textureId"),
       flutter::EncodableValue(texture_id_)},
      {flutter::EncodableValue("isLooping"),
       flutter::EncodableValue(is_looping_)},
  };
}

LoopingMessage::LoopingMessage() {}

LoopingMessage::LoopingMessage(flutter::EncodableMap map) {
  auto& encodable_texture_id = map.at(flutter::EncodableValue("textureId"));
  if (const int32_t* pointer_texture_id =
          std::get_if<int32_t>(&encodable_texture_id))
    texture_id_ = *pointer_texture_id;
  else if (const int64_t* pointer_texture_id_64 =
               std::get_if<int64_t>(&encodable_texture_id))
    texture_id_ = *pointer_texture_id_64;
  auto& encodable_is_looping = map.at(flutter::EncodableValue("isLooping"));
  if (const bool* pointer_is_looping =
          std::get_if<bool>(&encodable_is_looping)) {
    is_looping_ = *pointer_is_looping;
  }
}

// VolumeMessage

int64_t VolumeMessage::texture_id() const { return texture_id_; }
void VolumeMessage::set_texture_id(int64_t value_arg) {
  texture_id_ = value_arg;
}

double VolumeMessage::volume() const { return volume_; }
void VolumeMessage::set_volume(double value_arg) { volume_ = value_arg; }

flutter::EncodableMap VolumeMessage::ToEncodableMap() const {
  return flutter::EncodableMap{
      {flutter::EncodableValue("textureId"),
       flutter::EncodableValue(texture_id_)},
      {flutter::EncodableValue("volume"), flutter::EncodableValue(volume_)},
  };
}

VolumeMessage::VolumeMessage() {}

VolumeMessage::VolumeMessage(flutter::EncodableMap map) {
  auto& encodable_texture_id = map.at(flutter::EncodableValue("textureId"));
  if (const int32_t* pointer_texture_id =
          std::get_if<int32_t>(&encodable_texture_id))
    texture_id_ = *pointer_texture_id;
  else if (const int64_t* pointer_texture_id_64 =
               std::get_if<int64_t>(&encodable_texture_id))
    texture_id_ = *pointer_texture_id_64;
  auto& encodable_volume = map.at(flutter::EncodableValue("volume"));
  if (const double* pointer_volume = std::get_if<double>(&encodable_volume)) {
    volume_ = *pointer_volume;
  }
}

// PlaybackSpeedMessage

int64_t PlaybackSpeedMessage::texture_id() const { return texture_id_; }
void PlaybackSpeedMessage::set_texture_id(int64_t value_arg) {
  texture_id_ = value_arg;
}

double PlaybackSpeedMessage::speed() const { return speed_; }
void PlaybackSpeedMessage::set_speed(double value_arg) { speed_ = value_arg; }

flutter::EncodableMap PlaybackSpeedMessage::ToEncodableMap() const {
  return flutter::EncodableMap{
      {flutter::EncodableValue("textureId"),
       flutter::EncodableValue(texture_id_)},
      {flutter::EncodableValue("speed"), flutter::EncodableValue(speed_)},
  };
}

PlaybackSpeedMessage::PlaybackSpeedMessage() {}

PlaybackSpeedMessage::PlaybackSpeedMessage(flutter::EncodableMap map) {
  auto& encodable_texture_id = map.at(flutter::EncodableValue("textureId"));
  if (const int32_t* pointer_texture_id =
          std::get_if<int32_t>(&encodable_texture_id))
    texture_id_ = *pointer_texture_id;
  else if (const int64_t* pointer_texture_id_64 =
               std::get_if<int64_t>(&encodable_texture_id))
    texture_id_ = *pointer_texture_id_64;
  auto& encodable_speed = map.at(flutter::EncodableValue("speed"));
  if (const double* pointer_speed = std::get_if<double>(&encodable_speed)) {
    speed_ = *pointer_speed;
  }
}

// PositionMessage

int64_t PositionMessage::texture_id() const { return texture_id_; }
void PositionMessage::set_texture_id(int64_t value_arg) {
  texture_id_ = value_arg;
}

int64_t PositionMessage::position() const { return position_; }
void PositionMessage::set_position(int64_t value_arg) { position_ = value_arg; }

flutter::EncodableMap PositionMessage::ToEncodableMap() const {
  return flutter::EncodableMap{
      {flutter::EncodableValue("textureId"),
       flutter::EncodableValue(texture_id_)},
      {flutter::EncodableValue("position"), flutter::EncodableValue(position_)},
  };
}

PositionMessage::PositionMessage() {}

PositionMessage::PositionMessage(flutter::EncodableMap map) {
  auto& encodable_texture_id = map.at(flutter::EncodableValue("textureId"));
  if (const int32_t* pointer_texture_id =
          std::get_if<int32_t>(&encodable_texture_id))
    texture_id_ = *pointer_texture_id;
  else if (const int64_t* pointer_texture_id_64 =
               std::get_if<int64_t>(&encodable_texture_id))
    texture_id_ = *pointer_texture_id_64;
  auto& encodable_position = map.at(flutter::EncodableValue("position"));
  if (const int32_t* pointer_position =
          std::get_if<int32_t>(&encodable_position))
    position_ = *pointer_position;
  else if (const int64_t* pointer_position_64 =
               std::get_if<int64_t>(&encodable_position))
    position_ = *pointer_position_64;
}

// CreateMessage

const std::string* CreateMessage::asset() const {
  return asset_ ? &(*asset_) : nullptr;
}
void CreateMessage::set_asset(const std::string_view* value_arg) {
  asset_ = value_arg ? std::optional<std::string>(*value_arg) : std::nullopt;
}
void CreateMessage::set_asset(std::string_view value_arg) {
  asset_ = value_arg;
}

const std::string* CreateMessage::uri() const {
  return uri_ ? &(*uri_) : nullptr;
}
void CreateMessage::set_uri(const std::string_view* value_arg) {
  uri_ = value_arg ? std::optional<std::string>(*value_arg) : std::nullopt;
}
void CreateMessage::set_uri(std::string_view value_arg) { uri_ = value_arg; }

const std::string* CreateMessage::package_name() const {
  return package_name_ ? &(*package_name_) : nullptr;
}
void CreateMessage::set_package_name(const std::string_view* value_arg) {
  package_name_ =
      value_arg ? std::optional<std::string>(*value_arg) : std::nullopt;
}
void CreateMessage::set_package_name(std::string_view value_arg) {
  package_name_ = value_arg;
}

const std::string* CreateMessage::format_hint() const {
  return format_hint_ ? &(*format_hint_) : nullptr;
}
void CreateMessage::set_format_hint(const std::string_view* value_arg) {
  format_hint_ =
      value_arg ? std::optional<std::string>(*value_arg) : std::nullopt;
}
void CreateMessage::set_format_hint(std::string_view value_arg) {
  format_hint_ = value_arg;
}

const flutter::EncodableMap& CreateMessage::http_headers() const {
  return http_headers_;
}
void CreateMessage::set_http_headers(const flutter::EncodableMap& value_arg) {
  http_headers_ = value_arg;
}

flutter::EncodableMap CreateMessage::ToEncodableMap() const {
  return flutter::EncodableMap{
      {flutter::EncodableValue("asset"),
       asset_ ? flutter::EncodableValue(*asset_) : flutter::EncodableValue()},
      {flutter::EncodableValue("uri"),
       uri_ ? flutter::EncodableValue(*uri_) : flutter::EncodableValue()},
      {flutter::EncodableValue("packageName"),
       package_name_ ? flutter::EncodableValue(*package_name_)
                     : flutter::EncodableValue()},
      {flutter::EncodableValue("formatHint"),
       format_hint_ ? flutter::EncodableValue(*format_hint_)
                    : flutter::EncodableValue()},
      {flutter::EncodableValue("httpHeaders"),
       flutter::EncodableValue(http_headers_)},
  };
}

CreateMessage::CreateMessage() {}

CreateMessage::CreateMessage(flutter::EncodableMap map) {
  auto& encodable_asset = map.at(flutter::EncodableValue("asset"));
  if (const std::string* pointer_asset =
          std::get_if<std::string>(&encodable_asset)) {
    asset_ = *pointer_asset;
  }
  auto& encodable_uri = map.at(flutter::EncodableValue("uri"));
  if (const std::string* pointer_uri =
          std::get_if<std::string>(&encodable_uri)) {
    uri_ = *pointer_uri;
  }
  auto& encodable_package_name = map.at(flutter::EncodableValue("packageName"));
  if (const std::string* pointer_package_name =
          std::get_if<std::string>(&encodable_package_name)) {
    package_name_ = *pointer_package_name;
  }
  auto& encodable_format_hint = map.at(flutter::EncodableValue("formatHint"));
  if (const std::string* pointer_format_hint =
          std::get_if<std::string>(&encodable_format_hint)) {
    format_hint_ = *pointer_format_hint;
  }
  auto& encodable_http_headers = map.at(flutter::EncodableValue("httpHeaders"));
  if (const flutter::EncodableMap* pointer_http_headers =
          std::get_if<flutter::EncodableMap>(&encodable_http_headers)) {
    http_headers_ = *pointer_http_headers;
  }
}

// MixWithOthersMessage

bool MixWithOthersMessage::mix_with_others() const { return mix_with_others_; }
void MixWithOthersMessage::set_mix_with_others(bool value_arg) {
  mix_with_others_ = value_arg;
}

flutter::EncodableMap MixWithOthersMessage::ToEncodableMap() const {
  return flutter::EncodableMap{
      {flutter::EncodableValue("mixWithOthers"),
       flutter::EncodableValue(mix_with_others_)},
  };
}

MixWithOthersMessage::MixWithOthersMessage() {}

MixWithOthersMessage::MixWithOthersMessage(flutter::EncodableMap map) {
  auto& encodable_mix_with_others =
      map.at(flutter::EncodableValue("mixWithOthers"));
  if (const bool* pointer_mix_with_others =
          std::get_if<bool>(&encodable_mix_with_others)) {
    mix_with_others_ = *pointer_mix_with_others;
  }
}

TizenVideoPlayerApiCodecSerializer::TizenVideoPlayerApiCodecSerializer() {}
flutter::EncodableValue TizenVideoPlayerApiCodecSerializer::ReadValueOfType(
    uint8_t type, flutter::ByteStreamReader* stream) const {
  switch (type) {
    case 128:
      return flutter::CustomEncodableValue(
          CreateMessage(std::get<flutter::EncodableMap>(ReadValue(stream))));

    case 129:
      return flutter::CustomEncodableValue(
          LoopingMessage(std::get<flutter::EncodableMap>(ReadValue(stream))));

    case 130:
      return flutter::CustomEncodableValue(MixWithOthersMessage(
          std::get<flutter::EncodableMap>(ReadValue(stream))));

    case 131:
      return flutter::CustomEncodableValue(PlaybackSpeedMessage(
          std::get<flutter::EncodableMap>(ReadValue(stream))));

    case 132:
      return flutter::CustomEncodableValue(
          PositionMessage(std::get<flutter::EncodableMap>(ReadValue(stream))));

    case 133:
      return flutter::CustomEncodableValue(
          TextureMessage(std::get<flutter::EncodableMap>(ReadValue(stream))));

    case 134:
      return flutter::CustomEncodableValue(
          VolumeMessage(std::get<flutter::EncodableMap>(ReadValue(stream))));

    default:
      return flutter::StandardCodecSerializer::ReadValueOfType(type, stream);
  }
}

void TizenVideoPlayerApiCodecSerializer::WriteValue(
    const flutter::EncodableValue& value,
    flutter::ByteStreamWriter* stream) const {
  if (const flutter::CustomEncodableValue* custom_value =
          std::get_if<flutter::CustomEncodableValue>(&value)) {
    if (custom_value->type() == typeid(CreateMessage)) {
      stream->WriteByte(128);
      WriteValue(
          flutter::EncodableValue(
              std::any_cast<CreateMessage>(*custom_value).ToEncodableMap()),
          stream);
      return;
    }
    if (custom_value->type() == typeid(LoopingMessage)) {
      stream->WriteByte(129);
      WriteValue(
          flutter::EncodableValue(
              std::any_cast<LoopingMessage>(*custom_value).ToEncodableMap()),
          stream);
      return;
    }
    if (custom_value->type() == typeid(MixWithOthersMessage)) {
      stream->WriteByte(130);
      WriteValue(flutter::EncodableValue(
                     std::any_cast<MixWithOthersMessage>(*custom_value)
                         .ToEncodableMap()),
                 stream);
      return;
    }
    if (custom_value->type() == typeid(PlaybackSpeedMessage)) {
      stream->WriteByte(131);
      WriteValue(flutter::EncodableValue(
                     std::any_cast<PlaybackSpeedMessage>(*custom_value)
                         .ToEncodableMap()),
                 stream);
      return;
    }
    if (custom_value->type() == typeid(PositionMessage)) {
      stream->WriteByte(132);
      WriteValue(
          flutter::EncodableValue(
              std::any_cast<PositionMessage>(*custom_value).ToEncodableMap()),
          stream);
      return;
    }
    if (custom_value->type() == typeid(TextureMessage)) {
      stream->WriteByte(133);
      WriteValue(
          flutter::EncodableValue(
              std::any_cast<TextureMessage>(*custom_value).ToEncodableMap()),
          stream);
      return;
    }
    if (custom_value->type() == typeid(VolumeMessage)) {
      stream->WriteByte(134);
      WriteValue(
          flutter::EncodableValue(
              std::any_cast<VolumeMessage>(*custom_value).ToEncodableMap()),
          stream);
      return;
    }
  }
  flutter::StandardCodecSerializer::WriteValue(value, stream);
}

/// The codec used by TizenVideoPlayerApi.
const flutter::StandardMessageCodec& TizenVideoPlayerApi::GetCodec() {
  return flutter::StandardMessageCodec::GetInstance(
      &TizenVideoPlayerApiCodecSerializer::GetInstance());
}

// Sets up an instance of `TizenVideoPlayerApi` to handle messages through the
// `binary_messenger`.
void TizenVideoPlayerApi::SetUp(flutter::BinaryMessenger* binary_messenger,
                                TizenVideoPlayerApi* api) {
  {
    auto channel =
        std::make_unique<flutter::BasicMessageChannel<flutter::EncodableValue>>(
            binary_messenger,
            "dev.flutter.pigeon.TizenVideoPlayerApi.initialize", &GetCodec());
    if (api != nullptr) {
      channel->SetMessageHandler(
          [api](const flutter::EncodableValue& message,
                const flutter::MessageReply<flutter::EncodableValue>& reply) {
            flutter::EncodableMap wrapped;
            try {
              std::optional<FlutterError> output = api->Initialize();
              if (output.has_value()) {
                wrapped.emplace(flutter::EncodableValue("error"),
                                WrapError(output.value()));
              } else {
                wrapped.emplace(flutter::EncodableValue("result"),
                                flutter::EncodableValue());
              }
            } catch (const std::exception& exception) {
              wrapped.emplace(flutter::EncodableValue("error"),
                              WrapError(exception.what()));
            }
            reply(flutter::EncodableValue(wrapped));
          });
    } else {
      channel->SetMessageHandler(nullptr);
    }
  }
  {
    auto channel =
        std::make_unique<flutter::BasicMessageChannel<flutter::EncodableValue>>(
            binary_messenger, "dev.flutter.pigeon.TizenVideoPlayerApi.create",
            &GetCodec());
    if (api != nullptr) {
      channel->SetMessageHandler(
          [api](const flutter::EncodableValue& message,
                const flutter::MessageReply<flutter::EncodableValue>& reply) {
            flutter::EncodableMap wrapped;
            try {
              const auto& args = std::get<flutter::EncodableList>(message);
              const auto& encodable_msg_arg = args.at(0);
              if (encodable_msg_arg.IsNull()) {
                wrapped.emplace(flutter::EncodableValue("error"),
                                WrapError("msg_arg unexpectedly null."));
                reply(flutter::EncodableValue(wrapped));
                return;
              }
              const auto& msg_arg = std::any_cast<const CreateMessage&>(
                  std::get<flutter::CustomEncodableValue>(encodable_msg_arg));
              ErrorOr<TextureMessage> output = api->Create(msg_arg);
              if (output.has_error()) {
                wrapped.emplace(flutter::EncodableValue("error"),
                                WrapError(output.error()));
              } else {
                wrapped.emplace(flutter::EncodableValue("result"),
                                flutter::CustomEncodableValue(
                                    std::move(output).TakeValue()));
              }
            } catch (const std::exception& exception) {
              wrapped.emplace(flutter::EncodableValue("error"),
                              WrapError(exception.what()));
            }
            reply(flutter::EncodableValue(wrapped));
          });
    } else {
      channel->SetMessageHandler(nullptr);
    }
  }
  {
    auto channel =
        std::make_unique<flutter::BasicMessageChannel<flutter::EncodableValue>>(
            binary_messenger, "dev.flutter.pigeon.TizenVideoPlayerApi.dispose",
            &GetCodec());
    if (api != nullptr) {
      channel->SetMessageHandler(
          [api](const flutter::EncodableValue& message,
                const flutter::MessageReply<flutter::EncodableValue>& reply) {
            flutter::EncodableMap wrapped;
            try {
              const auto& args = std::get<flutter::EncodableList>(message);
              const auto& encodable_msg_arg = args.at(0);
              if (encodable_msg_arg.IsNull()) {
                wrapped.emplace(flutter::EncodableValue("error"),
                                WrapError("msg_arg unexpectedly null."));
                reply(flutter::EncodableValue(wrapped));
                return;
              }
              const auto& msg_arg = std::any_cast<const TextureMessage&>(
                  std::get<flutter::CustomEncodableValue>(encodable_msg_arg));
              std::optional<FlutterError> output = api->Dispose(msg_arg);
              if (output.has_value()) {
                wrapped.emplace(flutter::EncodableValue("error"),
                                WrapError(output.value()));
              } else {
                wrapped.emplace(flutter::EncodableValue("result"),
                                flutter::EncodableValue());
              }
            } catch (const std::exception& exception) {
              wrapped.emplace(flutter::EncodableValue("error"),
                              WrapError(exception.what()));
            }
            reply(flutter::EncodableValue(wrapped));
          });
    } else {
      channel->SetMessageHandler(nullptr);
    }
  }
  {
    auto channel =
        std::make_unique<flutter::BasicMessageChannel<flutter::EncodableValue>>(
            binary_messenger,
            "dev.flutter.pigeon.TizenVideoPlayerApi.setLooping", &GetCodec());
    if (api != nullptr) {
      channel->SetMessageHandler(
          [api](const flutter::EncodableValue& message,
                const flutter::MessageReply<flutter::EncodableValue>& reply) {
            flutter::EncodableMap wrapped;
            try {
              const auto& args = std::get<flutter::EncodableList>(message);
              const auto& encodable_msg_arg = args.at(0);
              if (encodable_msg_arg.IsNull()) {
                wrapped.emplace(flutter::EncodableValue("error"),
                                WrapError("msg_arg unexpectedly null."));
                reply(flutter::EncodableValue(wrapped));
                return;
              }
              const auto& msg_arg = std::any_cast<const LoopingMessage&>(
                  std::get<flutter::CustomEncodableValue>(encodable_msg_arg));
              std::optional<FlutterError> output = api->SetLooping(msg_arg);
              if (output.has_value()) {
                wrapped.emplace(flutter::EncodableValue("error"),
                                WrapError(output.value()));
              } else {
                wrapped.emplace(flutter::EncodableValue("result"),
                                flutter::EncodableValue());
              }
            } catch (const std::exception& exception) {
              wrapped.emplace(flutter::EncodableValue("error"),
                              WrapError(exception.what()));
            }
            reply(flutter::EncodableValue(wrapped));
          });
    } else {
      channel->SetMessageHandler(nullptr);
    }
  }
  {
    auto channel =
        std::make_unique<flutter::BasicMessageChannel<flutter::EncodableValue>>(
            binary_messenger,
            "dev.flutter.pigeon.TizenVideoPlayerApi.setVolume", &GetCodec());
    if (api != nullptr) {
      channel->SetMessageHandler(
          [api](const flutter::EncodableValue& message,
                const flutter::MessageReply<flutter::EncodableValue>& reply) {
            flutter::EncodableMap wrapped;
            try {
              const auto& args = std::get<flutter::EncodableList>(message);
              const auto& encodable_msg_arg = args.at(0);
              if (encodable_msg_arg.IsNull()) {
                wrapped.emplace(flutter::EncodableValue("error"),
                                WrapError("msg_arg unexpectedly null."));
                reply(flutter::EncodableValue(wrapped));
                return;
              }
              const auto& msg_arg = std::any_cast<const VolumeMessage&>(
                  std::get<flutter::CustomEncodableValue>(encodable_msg_arg));
              std::optional<FlutterError> output = api->SetVolume(msg_arg);
              if (output.has_value()) {
                wrapped.emplace(flutter::EncodableValue("error"),
                                WrapError(output.value()));
              } else {
                wrapped.emplace(flutter::EncodableValue("result"),
                                flutter::EncodableValue());
              }
            } catch (const std::exception& exception) {
              wrapped.emplace(flutter::EncodableValue("error"),
                              WrapError(exception.what()));
            }
            reply(flutter::EncodableValue(wrapped));
          });
    } else {
      channel->SetMessageHandler(nullptr);
    }
  }
  {
    auto channel =
        std::make_unique<flutter::BasicMessageChannel<flutter::EncodableValue>>(
            binary_messenger,
            "dev.flutter.pigeon.TizenVideoPlayerApi.setPlaybackSpeed",
            &GetCodec());
    if (api != nullptr) {
      channel->SetMessageHandler(
          [api](const flutter::EncodableValue& message,
                const flutter::MessageReply<flutter::EncodableValue>& reply) {
            flutter::EncodableMap wrapped;
            try {
              const auto& args = std::get<flutter::EncodableList>(message);
              const auto& encodable_msg_arg = args.at(0);
              if (encodable_msg_arg.IsNull()) {
                wrapped.emplace(flutter::EncodableValue("error"),
                                WrapError("msg_arg unexpectedly null."));
                reply(flutter::EncodableValue(wrapped));
                return;
              }
              const auto& msg_arg = std::any_cast<const PlaybackSpeedMessage&>(
                  std::get<flutter::CustomEncodableValue>(encodable_msg_arg));
              std::optional<FlutterError> output =
                  api->SetPlaybackSpeed(msg_arg);
              if (output.has_value()) {
                wrapped.emplace(flutter::EncodableValue("error"),
                                WrapError(output.value()));
              } else {
                wrapped.emplace(flutter::EncodableValue("result"),
                                flutter::EncodableValue());
              }
            } catch (const std::exception& exception) {
              wrapped.emplace(flutter::EncodableValue("error"),
                              WrapError(exception.what()));
            }
            reply(flutter::EncodableValue(wrapped));
          });
    } else {
      channel->SetMessageHandler(nullptr);
    }
  }
  {
    auto channel =
        std::make_unique<flutter::BasicMessageChannel<flutter::EncodableValue>>(
            binary_messenger, "dev.flutter.pigeon.TizenVideoPlayerApi.play",
            &GetCodec());
    if (api != nullptr) {
      channel->SetMessageHandler(
          [api](const flutter::EncodableValue& message,
                const flutter::MessageReply<flutter::EncodableValue>& reply) {
            flutter::EncodableMap wrapped;
            try {
              const auto& args = std::get<flutter::EncodableList>(message);
              const auto& encodable_msg_arg = args.at(0);
              if (encodable_msg_arg.IsNull()) {
                wrapped.emplace(flutter::EncodableValue("error"),
                                WrapError("msg_arg unexpectedly null."));
                reply(flutter::EncodableValue(wrapped));
                return;
              }
              const auto& msg_arg = std::any_cast<const TextureMessage&>(
                  std::get<flutter::CustomEncodableValue>(encodable_msg_arg));
              std::optional<FlutterError> output = api->Play(msg_arg);
              if (output.has_value()) {
                wrapped.emplace(flutter::EncodableValue("error"),
                                WrapError(output.value()));
              } else {
                wrapped.emplace(flutter::EncodableValue("result"),
                                flutter::EncodableValue());
              }
            } catch (const std::exception& exception) {
              wrapped.emplace(flutter::EncodableValue("error"),
                              WrapError(exception.what()));
            }
            reply(flutter::EncodableValue(wrapped));
          });
    } else {
      channel->SetMessageHandler(nullptr);
    }
  }
  {
    auto channel =
        std::make_unique<flutter::BasicMessageChannel<flutter::EncodableValue>>(
            binary_messenger, "dev.flutter.pigeon.TizenVideoPlayerApi.position",
            &GetCodec());
    if (api != nullptr) {
      channel->SetMessageHandler(
          [api](const flutter::EncodableValue& message,
                const flutter::MessageReply<flutter::EncodableValue>& reply) {
            flutter::EncodableMap wrapped;
            try {
              const auto& args = std::get<flutter::EncodableList>(message);
              const auto& encodable_msg_arg = args.at(0);
              if (encodable_msg_arg.IsNull()) {
                wrapped.emplace(flutter::EncodableValue("error"),
                                WrapError("msg_arg unexpectedly null."));
                reply(flutter::EncodableValue(wrapped));
                return;
              }
              const auto& msg_arg = std::any_cast<const TextureMessage&>(
                  std::get<flutter::CustomEncodableValue>(encodable_msg_arg));
              ErrorOr<PositionMessage> output = api->Position(msg_arg);
              if (output.has_error()) {
                wrapped.emplace(flutter::EncodableValue("error"),
                                WrapError(output.error()));
              } else {
                wrapped.emplace(flutter::EncodableValue("result"),
                                flutter::CustomEncodableValue(
                                    std::move(output).TakeValue()));
              }
            } catch (const std::exception& exception) {
              wrapped.emplace(flutter::EncodableValue("error"),
                              WrapError(exception.what()));
            }
            reply(flutter::EncodableValue(wrapped));
          });
    } else {
      channel->SetMessageHandler(nullptr);
    }
  }
  {
    auto channel =
        std::make_unique<flutter::BasicMessageChannel<flutter::EncodableValue>>(
            binary_messenger, "dev.flutter.pigeon.TizenVideoPlayerApi.seekTo",
            &GetCodec());
    if (api != nullptr) {
      channel->SetMessageHandler(
          [api](const flutter::EncodableValue& message,
                const flutter::MessageReply<flutter::EncodableValue>& reply) {
            flutter::EncodableMap wrapped;
            try {
              const auto& args = std::get<flutter::EncodableList>(message);
              const auto& encodable_msg_arg = args.at(0);
              if (encodable_msg_arg.IsNull()) {
                wrapped.emplace(flutter::EncodableValue("error"),
                                WrapError("msg_arg unexpectedly null."));
                reply(flutter::EncodableValue(wrapped));
                return;
              }
              const auto& msg_arg = std::any_cast<const PositionMessage&>(
                  std::get<flutter::CustomEncodableValue>(encodable_msg_arg));
              api->SeekTo(msg_arg, [&wrapped, &reply](
                                       std::optional<FlutterError>&& output) {
                if (output.has_value()) {
                  wrapped.emplace(flutter::EncodableValue("error"),
                                  WrapError(output.value()));
                  reply(flutter::EncodableValue(wrapped));
                } else {
                  wrapped.emplace(flutter::EncodableValue("result"),
                                  flutter::EncodableValue());
                  reply(flutter::EncodableValue(wrapped));
                }
              });
            } catch (const std::exception& exception) {
              wrapped.emplace(flutter::EncodableValue("error"),
                              WrapError(exception.what()));
              reply(flutter::EncodableValue(wrapped));
            }
          });
    } else {
      channel->SetMessageHandler(nullptr);
    }
  }
  {
    auto channel =
        std::make_unique<flutter::BasicMessageChannel<flutter::EncodableValue>>(
            binary_messenger, "dev.flutter.pigeon.TizenVideoPlayerApi.pause",
            &GetCodec());
    if (api != nullptr) {
      channel->SetMessageHandler(
          [api](const flutter::EncodableValue& message,
                const flutter::MessageReply<flutter::EncodableValue>& reply) {
            flutter::EncodableMap wrapped;
            try {
              const auto& args = std::get<flutter::EncodableList>(message);
              const auto& encodable_msg_arg = args.at(0);
              if (encodable_msg_arg.IsNull()) {
                wrapped.emplace(flutter::EncodableValue("error"),
                                WrapError("msg_arg unexpectedly null."));
                reply(flutter::EncodableValue(wrapped));
                return;
              }
              const auto& msg_arg = std::any_cast<const TextureMessage&>(
                  std::get<flutter::CustomEncodableValue>(encodable_msg_arg));
              std::optional<FlutterError> output = api->Pause(msg_arg);
              if (output.has_value()) {
                wrapped.emplace(flutter::EncodableValue("error"),
                                WrapError(output.value()));
              } else {
                wrapped.emplace(flutter::EncodableValue("result"),
                                flutter::EncodableValue());
              }
            } catch (const std::exception& exception) {
              wrapped.emplace(flutter::EncodableValue("error"),
                              WrapError(exception.what()));
            }
            reply(flutter::EncodableValue(wrapped));
          });
    } else {
      channel->SetMessageHandler(nullptr);
    }
  }
  {
    auto channel =
        std::make_unique<flutter::BasicMessageChannel<flutter::EncodableValue>>(
            binary_messenger,
            "dev.flutter.pigeon.TizenVideoPlayerApi.setMixWithOthers",
            &GetCodec());
    if (api != nullptr) {
      channel->SetMessageHandler(
          [api](const flutter::EncodableValue& message,
                const flutter::MessageReply<flutter::EncodableValue>& reply) {
            flutter::EncodableMap wrapped;
            try {
              const auto& args = std::get<flutter::EncodableList>(message);
              const auto& encodable_msg_arg = args.at(0);
              if (encodable_msg_arg.IsNull()) {
                wrapped.emplace(flutter::EncodableValue("error"),
                                WrapError("msg_arg unexpectedly null."));
                reply(flutter::EncodableValue(wrapped));
                return;
              }
              const auto& msg_arg = std::any_cast<const MixWithOthersMessage&>(
                  std::get<flutter::CustomEncodableValue>(encodable_msg_arg));
              std::optional<FlutterError> output =
                  api->SetMixWithOthers(msg_arg);
              if (output.has_value()) {
                wrapped.emplace(flutter::EncodableValue("error"),
                                WrapError(output.value()));
              } else {
                wrapped.emplace(flutter::EncodableValue("result"),
                                flutter::EncodableValue());
              }
            } catch (const std::exception& exception) {
              wrapped.emplace(flutter::EncodableValue("error"),
                              WrapError(exception.what()));
            }
            reply(flutter::EncodableValue(wrapped));
          });
    } else {
      channel->SetMessageHandler(nullptr);
    }
  }
}

flutter::EncodableMap TizenVideoPlayerApi::WrapError(
    std::string_view error_message) {
  return flutter::EncodableMap(
      {{flutter::EncodableValue("message"),
        flutter::EncodableValue(std::string(error_message))},
       {flutter::EncodableValue("code"), flutter::EncodableValue("Error")},
       {flutter::EncodableValue("details"), flutter::EncodableValue()}});
}
flutter::EncodableMap TizenVideoPlayerApi::WrapError(
    const FlutterError& error) {
  return flutter::EncodableMap(
      {{flutter::EncodableValue("message"),
        flutter::EncodableValue(error.message())},
       {flutter::EncodableValue("code"), flutter::EncodableValue(error.code())},
       {flutter::EncodableValue("details"), error.details()}});
}
