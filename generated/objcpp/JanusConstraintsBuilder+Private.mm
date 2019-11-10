// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from janus-client.djinni

#import "JanusConstraintsBuilder+Private.h"
#import "JanusConstraintsBuilder.h"
#import "DJICppWrapperCache+Private.h"
#import "DJIError.h"
#import "DJIMarshal+Private.h"
#import "JanusCamera+Private.h"
#import "JanusConstraints+Private.h"
#include <exception>
#include <stdexcept>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface JanusConstraintsBuilder ()

- (id)initWithCpp:(const std::shared_ptr<::Janus::ConstraintsBuilder>&)cppRef;

@end

@implementation JanusConstraintsBuilder {
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::Janus::ConstraintsBuilder>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::Janus::ConstraintsBuilder>&)cppRef
{
    if (self = [super init]) {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

- (nullable JanusConstraintsBuilder *)datachannel:(BOOL)enable {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->datachannel(::djinni::Bool::toCpp(enable));
        return ::djinni_generated::ConstraintsBuilder::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nullable JanusConstraintsBuilder *)sendAudio:(BOOL)enable {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->send_audio(::djinni::Bool::toCpp(enable));
        return ::djinni_generated::ConstraintsBuilder::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nullable JanusConstraintsBuilder *)sendVideo:(BOOL)enable {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->send_video(::djinni::Bool::toCpp(enable));
        return ::djinni_generated::ConstraintsBuilder::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nullable JanusConstraintsBuilder *)receiveAudio:(BOOL)enable {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->receive_audio(::djinni::Bool::toCpp(enable));
        return ::djinni_generated::ConstraintsBuilder::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nullable JanusConstraintsBuilder *)receiveVideo:(BOOL)enable {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->receive_video(::djinni::Bool::toCpp(enable));
        return ::djinni_generated::ConstraintsBuilder::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nullable JanusConstraintsBuilder *)camera:(JanusCamera)camera {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->camera(::djinni::Enum<::Janus::Camera, JanusCamera>::toCpp(camera));
        return ::djinni_generated::ConstraintsBuilder::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nullable JanusConstraintsBuilder *)video:(int32_t)width
                                     height:(int32_t)height
                                        fps:(int32_t)fps {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->video(::djinni::I32::toCpp(width),
                                                         ::djinni::I32::toCpp(height),
                                                         ::djinni::I32::toCpp(fps));
        return ::djinni_generated::ConstraintsBuilder::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nullable JanusConstraintsBuilder *)sendOnly {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->send_only();
        return ::djinni_generated::ConstraintsBuilder::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nullable JanusConstraintsBuilder *)receiveOnly {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->receive_only();
        return ::djinni_generated::ConstraintsBuilder::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nullable JanusConstraintsBuilder *)none {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->none();
        return ::djinni_generated::ConstraintsBuilder::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (nonnull JanusConstraints *)build {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->build();
        return ::djinni_generated::Constraints::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (nullable JanusConstraintsBuilder *)create {
    try {
        auto objcpp_result_ = ::Janus::ConstraintsBuilder::create();
        return ::djinni_generated::ConstraintsBuilder::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

namespace djinni_generated {

auto ConstraintsBuilder::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    return objc->_cppRefHandle.get();
}

auto ConstraintsBuilder::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    return ::djinni::get_cpp_proxy<JanusConstraintsBuilder>(cpp);
}

}  // namespace djinni_generated

@end