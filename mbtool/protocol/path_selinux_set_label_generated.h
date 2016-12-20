// automatically generated by the FlatBuffers compiler, do not modify

#ifndef FLATBUFFERS_GENERATED_PATHSELINUXSETLABEL_MBTOOL_DAEMON_V3_H_
#define FLATBUFFERS_GENERATED_PATHSELINUXSETLABEL_MBTOOL_DAEMON_V3_H_

#include "flatbuffers/flatbuffers.h"

namespace mbtool {
namespace daemon {
namespace v3 {

struct PathSELinuxSetLabelError;

struct PathSELinuxSetLabelRequest;

struct PathSELinuxSetLabelResponse;

struct PathSELinuxSetLabelError FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_ERRNO_VALUE = 4,
    VT_MSG = 6
  };
  int32_t errno_value() const { return GetField<int32_t>(VT_ERRNO_VALUE, 0); }
  const flatbuffers::String *msg() const { return GetPointer<const flatbuffers::String *>(VT_MSG); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_ERRNO_VALUE) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_MSG) &&
           verifier.Verify(msg()) &&
           verifier.EndTable();
  }
};

struct PathSELinuxSetLabelErrorBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_errno_value(int32_t errno_value) { fbb_.AddElement<int32_t>(PathSELinuxSetLabelError::VT_ERRNO_VALUE, errno_value, 0); }
  void add_msg(flatbuffers::Offset<flatbuffers::String> msg) { fbb_.AddOffset(PathSELinuxSetLabelError::VT_MSG, msg); }
  PathSELinuxSetLabelErrorBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  PathSELinuxSetLabelErrorBuilder &operator=(const PathSELinuxSetLabelErrorBuilder &);
  flatbuffers::Offset<PathSELinuxSetLabelError> Finish() {
    auto o = flatbuffers::Offset<PathSELinuxSetLabelError>(fbb_.EndTable(start_, 2));
    return o;
  }
};

inline flatbuffers::Offset<PathSELinuxSetLabelError> CreatePathSELinuxSetLabelError(flatbuffers::FlatBufferBuilder &_fbb,
    int32_t errno_value = 0,
    flatbuffers::Offset<flatbuffers::String> msg = 0) {
  PathSELinuxSetLabelErrorBuilder builder_(_fbb);
  builder_.add_msg(msg);
  builder_.add_errno_value(errno_value);
  return builder_.Finish();
}

inline flatbuffers::Offset<PathSELinuxSetLabelError> CreatePathSELinuxSetLabelErrorDirect(flatbuffers::FlatBufferBuilder &_fbb,
    int32_t errno_value = 0,
    const char *msg = nullptr) {
  return CreatePathSELinuxSetLabelError(_fbb, errno_value, msg ? _fbb.CreateString(msg) : 0);
}

struct PathSELinuxSetLabelRequest FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_PATH = 4,
    VT_LABEL = 6,
    VT_FOLLOW_SYMLINKS = 8
  };
  const flatbuffers::String *path() const { return GetPointer<const flatbuffers::String *>(VT_PATH); }
  const flatbuffers::String *label() const { return GetPointer<const flatbuffers::String *>(VT_LABEL); }
  bool follow_symlinks() const { return GetField<uint8_t>(VT_FOLLOW_SYMLINKS, 0) != 0; }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_PATH) &&
           verifier.Verify(path()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_LABEL) &&
           verifier.Verify(label()) &&
           VerifyField<uint8_t>(verifier, VT_FOLLOW_SYMLINKS) &&
           verifier.EndTable();
  }
};

struct PathSELinuxSetLabelRequestBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_path(flatbuffers::Offset<flatbuffers::String> path) { fbb_.AddOffset(PathSELinuxSetLabelRequest::VT_PATH, path); }
  void add_label(flatbuffers::Offset<flatbuffers::String> label) { fbb_.AddOffset(PathSELinuxSetLabelRequest::VT_LABEL, label); }
  void add_follow_symlinks(bool follow_symlinks) { fbb_.AddElement<uint8_t>(PathSELinuxSetLabelRequest::VT_FOLLOW_SYMLINKS, static_cast<uint8_t>(follow_symlinks), 0); }
  PathSELinuxSetLabelRequestBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  PathSELinuxSetLabelRequestBuilder &operator=(const PathSELinuxSetLabelRequestBuilder &);
  flatbuffers::Offset<PathSELinuxSetLabelRequest> Finish() {
    auto o = flatbuffers::Offset<PathSELinuxSetLabelRequest>(fbb_.EndTable(start_, 3));
    return o;
  }
};

inline flatbuffers::Offset<PathSELinuxSetLabelRequest> CreatePathSELinuxSetLabelRequest(flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<flatbuffers::String> path = 0,
    flatbuffers::Offset<flatbuffers::String> label = 0,
    bool follow_symlinks = false) {
  PathSELinuxSetLabelRequestBuilder builder_(_fbb);
  builder_.add_label(label);
  builder_.add_path(path);
  builder_.add_follow_symlinks(follow_symlinks);
  return builder_.Finish();
}

inline flatbuffers::Offset<PathSELinuxSetLabelRequest> CreatePathSELinuxSetLabelRequestDirect(flatbuffers::FlatBufferBuilder &_fbb,
    const char *path = nullptr,
    const char *label = nullptr,
    bool follow_symlinks = false) {
  return CreatePathSELinuxSetLabelRequest(_fbb, path ? _fbb.CreateString(path) : 0, label ? _fbb.CreateString(label) : 0, follow_symlinks);
}

struct PathSELinuxSetLabelResponse FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_SUCCESS = 4,
    VT_ERROR_MSG = 6,
    VT_ERROR = 8
  };
  bool success() const { return GetField<uint8_t>(VT_SUCCESS, 0) != 0; }
  const flatbuffers::String *error_msg() const { return GetPointer<const flatbuffers::String *>(VT_ERROR_MSG); }
  const PathSELinuxSetLabelError *error() const { return GetPointer<const PathSELinuxSetLabelError *>(VT_ERROR); }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint8_t>(verifier, VT_SUCCESS) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_ERROR_MSG) &&
           verifier.Verify(error_msg()) &&
           VerifyField<flatbuffers::uoffset_t>(verifier, VT_ERROR) &&
           verifier.VerifyTable(error()) &&
           verifier.EndTable();
  }
};

struct PathSELinuxSetLabelResponseBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_success(bool success) { fbb_.AddElement<uint8_t>(PathSELinuxSetLabelResponse::VT_SUCCESS, static_cast<uint8_t>(success), 0); }
  void add_error_msg(flatbuffers::Offset<flatbuffers::String> error_msg) { fbb_.AddOffset(PathSELinuxSetLabelResponse::VT_ERROR_MSG, error_msg); }
  void add_error(flatbuffers::Offset<PathSELinuxSetLabelError> error) { fbb_.AddOffset(PathSELinuxSetLabelResponse::VT_ERROR, error); }
  PathSELinuxSetLabelResponseBuilder(flatbuffers::FlatBufferBuilder &_fbb) : fbb_(_fbb) { start_ = fbb_.StartTable(); }
  PathSELinuxSetLabelResponseBuilder &operator=(const PathSELinuxSetLabelResponseBuilder &);
  flatbuffers::Offset<PathSELinuxSetLabelResponse> Finish() {
    auto o = flatbuffers::Offset<PathSELinuxSetLabelResponse>(fbb_.EndTable(start_, 3));
    return o;
  }
};

inline flatbuffers::Offset<PathSELinuxSetLabelResponse> CreatePathSELinuxSetLabelResponse(flatbuffers::FlatBufferBuilder &_fbb,
    bool success = false,
    flatbuffers::Offset<flatbuffers::String> error_msg = 0,
    flatbuffers::Offset<PathSELinuxSetLabelError> error = 0) {
  PathSELinuxSetLabelResponseBuilder builder_(_fbb);
  builder_.add_error(error);
  builder_.add_error_msg(error_msg);
  builder_.add_success(success);
  return builder_.Finish();
}

inline flatbuffers::Offset<PathSELinuxSetLabelResponse> CreatePathSELinuxSetLabelResponseDirect(flatbuffers::FlatBufferBuilder &_fbb,
    bool success = false,
    const char *error_msg = nullptr,
    flatbuffers::Offset<PathSELinuxSetLabelError> error = 0) {
  return CreatePathSELinuxSetLabelResponse(_fbb, success, error_msg ? _fbb.CreateString(error_msg) : 0, error);
}

}  // namespace v3
}  // namespace daemon
}  // namespace mbtool

#endif  // FLATBUFFERS_GENERATED_PATHSELINUXSETLABEL_MBTOOL_DAEMON_V3_H_
