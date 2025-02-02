// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from tezos_like_wallet.djinni

#include "NJSTezosConfigurationDefaultsCpp.hpp"
#include "NJSObjectWrapper.hpp"

using namespace v8;
using namespace node;
using namespace std;


NAN_METHOD(NJSTezosConfigurationDefaults::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSTezosConfigurationDefaults function can only be called as constructor (use New)");
    }
    info.GetReturnValue().Set(info.This());
}


Nan::Persistent<ObjectTemplate> NJSTezosConfigurationDefaults::TezosConfigurationDefaults_prototype;

Local<Object> NJSTezosConfigurationDefaults::wrap(const std::shared_ptr<ledger::core::api::TezosConfigurationDefaults> &object) {
    Nan::EscapableHandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(TezosConfigurationDefaults_prototype);

    Local<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance();
        djinni::js::ObjectWrapper<ledger::core::api::TezosConfigurationDefaults>::Wrap(object, obj);
    }
    else
    {
        Nan::ThrowError("NJSTezosConfigurationDefaults::wrap: object template not valid");
    }
    return scope.Escape(obj);
}

NAN_METHOD(NJSTezosConfigurationDefaults::isNull) {
    auto cpp_implementation = djinni::js::ObjectWrapper<ledger::core::api::TezosConfigurationDefaults>::Unwrap(info.This());
    auto isNull = !cpp_implementation ? true : false;
    return info.GetReturnValue().Set(Nan::New<Boolean>(isNull));
}

void NJSTezosConfigurationDefaults::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSTezosConfigurationDefaults::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSTezosConfigurationDefaults").ToLocalChecked());

    //SetPrototypeMethod all methods
    Nan::SetPrototypeMethod(func_template,"isNull", isNull);
    //Set object prototype
    TezosConfigurationDefaults_prototype.Reset(objectTemplate);

    //Add template to target
    target->Set(Nan::New<String>("NJSTezosConfigurationDefaults").ToLocalChecked(), func_template->GetFunction());
}
