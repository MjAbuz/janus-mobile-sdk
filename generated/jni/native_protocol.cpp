// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from janus-client.djinni

#include "native_protocol.hpp"  // my header
#include "Marshal.hpp"
#include "native_bundle.hpp"
#include "native_janus_conf.hpp"
#include "native_platform.hpp"
#include "native_protocol_delegate.hpp"

namespace djinni_generated {

NativeProtocol::NativeProtocol() : ::djinni::JniInterface<::Janus::Protocol, NativeProtocol>("com/github/helloiampau/janus/generated/Protocol$CppProxy") {}

NativeProtocol::~NativeProtocol() = default;

NativeProtocol::JavaProxy::JavaProxy(JniType j) : Handle(::djinni::jniGetThreadEnv(), j) { }

NativeProtocol::JavaProxy::~JavaProxy() = default;

std::string NativeProtocol::JavaProxy::name() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeProtocol>::get();
    auto jret = (jstring)jniEnv->CallObjectMethod(Handle::get().get(), data.method_name);
    ::djinni::jniExceptionCheck(jniEnv);
    return ::djinni::String::toCpp(jniEnv, jret);
}
void NativeProtocol::JavaProxy::init(const std::shared_ptr<::Janus::JanusConf> & c_conf, const std::shared_ptr<::Janus::Platform> & c_platform, const std::shared_ptr<::Janus::ProtocolDelegate> & c_delegate) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeProtocol>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_init,
                           ::djinni::get(::djinni_generated::NativeJanusConf::fromCpp(jniEnv, c_conf)),
                           ::djinni::get(::djinni_generated::NativePlatform::fromCpp(jniEnv, c_platform)),
                           ::djinni::get(::djinni_generated::NativeProtocolDelegate::fromCpp(jniEnv, c_delegate)));
    ::djinni::jniExceptionCheck(jniEnv);
}
void NativeProtocol::JavaProxy::dispatch(const std::string & c_command, const std::shared_ptr<::Janus::Bundle> & c_payload) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeProtocol>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_dispatch,
                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c_command)),
                           ::djinni::get(::djinni_generated::NativeBundle::fromCpp(jniEnv, c_payload)));
    ::djinni::jniExceptionCheck(jniEnv);
}
void NativeProtocol::JavaProxy::hangup() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeProtocol>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_hangup);
    ::djinni::jniExceptionCheck(jniEnv);
}
void NativeProtocol::JavaProxy::close() {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeProtocol>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_close);
    ::djinni::jniExceptionCheck(jniEnv);
}
void NativeProtocol::JavaProxy::onOffer(const std::string & c_sdp, const std::shared_ptr<::Janus::Bundle> & c_context) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeProtocol>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_onOffer,
                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c_sdp)),
                           ::djinni::get(::djinni_generated::NativeBundle::fromCpp(jniEnv, c_context)));
    ::djinni::jniExceptionCheck(jniEnv);
}
void NativeProtocol::JavaProxy::onAnswer(const std::string & c_sdp, const std::shared_ptr<::Janus::Bundle> & c_context) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeProtocol>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_onAnswer,
                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c_sdp)),
                           ::djinni::get(::djinni_generated::NativeBundle::fromCpp(jniEnv, c_context)));
    ::djinni::jniExceptionCheck(jniEnv);
}
void NativeProtocol::JavaProxy::onIceCandidate(const std::string & c_mid, int32_t c_index, const std::string & c_sdp, int64_t c_id) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeProtocol>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_onIceCandidate,
                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c_mid)),
                           ::djinni::get(::djinni::I32::fromCpp(jniEnv, c_index)),
                           ::djinni::get(::djinni::String::fromCpp(jniEnv, c_sdp)),
                           ::djinni::get(::djinni::I64::fromCpp(jniEnv, c_id)));
    ::djinni::jniExceptionCheck(jniEnv);
}
void NativeProtocol::JavaProxy::onIceCompleted(int64_t c_id) {
    auto jniEnv = ::djinni::jniGetThreadEnv();
    ::djinni::JniLocalScope jscope(jniEnv, 10);
    const auto& data = ::djinni::JniClass<::djinni_generated::NativeProtocol>::get();
    jniEnv->CallVoidMethod(Handle::get().get(), data.method_onIceCompleted,
                           ::djinni::get(::djinni::I64::fromCpp(jniEnv, c_id)));
    ::djinni::jniExceptionCheck(jniEnv);
}

CJNIEXPORT void JNICALL Java_com_github_helloiampau_janus_generated_Protocol_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::Janus::Protocol>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jstring JNICALL Java_com_github_helloiampau_janus_generated_Protocol_00024CppProxy_native_1name(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::Janus::Protocol>(nativeRef);
        auto r = ref->name();
        return ::djinni::release(::djinni::String::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_com_github_helloiampau_janus_generated_Protocol_00024CppProxy_native_1init(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_conf, jobject j_platform, jobject j_delegate)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::Janus::Protocol>(nativeRef);
        ref->init(::djinni_generated::NativeJanusConf::toCpp(jniEnv, j_conf),
                  ::djinni_generated::NativePlatform::toCpp(jniEnv, j_platform),
                  ::djinni_generated::NativeProtocolDelegate::toCpp(jniEnv, j_delegate));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_com_github_helloiampau_janus_generated_Protocol_00024CppProxy_native_1dispatch(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jstring j_command, jobject j_payload)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::Janus::Protocol>(nativeRef);
        ref->dispatch(::djinni::String::toCpp(jniEnv, j_command),
                      ::djinni_generated::NativeBundle::toCpp(jniEnv, j_payload));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_com_github_helloiampau_janus_generated_Protocol_00024CppProxy_native_1hangup(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::Janus::Protocol>(nativeRef);
        ref->hangup();
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_com_github_helloiampau_janus_generated_Protocol_00024CppProxy_native_1close(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::Janus::Protocol>(nativeRef);
        ref->close();
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_com_github_helloiampau_janus_generated_Protocol_00024CppProxy_native_1onOffer(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jstring j_sdp, jobject j_context)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::Janus::Protocol>(nativeRef);
        ref->onOffer(::djinni::String::toCpp(jniEnv, j_sdp),
                     ::djinni_generated::NativeBundle::toCpp(jniEnv, j_context));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_com_github_helloiampau_janus_generated_Protocol_00024CppProxy_native_1onAnswer(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jstring j_sdp, jobject j_context)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::Janus::Protocol>(nativeRef);
        ref->onAnswer(::djinni::String::toCpp(jniEnv, j_sdp),
                      ::djinni_generated::NativeBundle::toCpp(jniEnv, j_context));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_com_github_helloiampau_janus_generated_Protocol_00024CppProxy_native_1onIceCandidate(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jstring j_mid, jint j_index, jstring j_sdp, jlong j_id)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::Janus::Protocol>(nativeRef);
        ref->onIceCandidate(::djinni::String::toCpp(jniEnv, j_mid),
                            ::djinni::I32::toCpp(jniEnv, j_index),
                            ::djinni::String::toCpp(jniEnv, j_sdp),
                            ::djinni::I64::toCpp(jniEnv, j_id));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_com_github_helloiampau_janus_generated_Protocol_00024CppProxy_native_1onIceCompleted(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jlong j_id)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::Janus::Protocol>(nativeRef);
        ref->onIceCompleted(::djinni::I64::toCpp(jniEnv, j_id));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

}  // namespace djinni_generated
