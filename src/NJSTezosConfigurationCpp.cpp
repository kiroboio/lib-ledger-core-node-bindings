// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from tezos_like_wallet.djinni

#include "NJSTezosConfigurationCpp.hpp"
#include "NJSObjectWrapper.hpp"

using namespace v8;
using namespace node;
using namespace std;


NAN_METHOD(NJSTezosConfiguration::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSTezosConfiguration function can only be called as constructor (use New)");
    }
    info.GetReturnValue().Set(info.This());
}


Nan::Persistent<ObjectTemplate> NJSTezosConfiguration::TezosConfiguration_prototype;

Local<Object> NJSTezosConfiguration::wrap(const std::shared_ptr<ledger::core::api::TezosConfiguration> &object) {
    Nan::EscapableHandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(TezosConfiguration_prototype);

    Local<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance();
        djinni::js::ObjectWrapper<ledger::core::api::TezosConfiguration>::Wrap(object, obj);
    }
    else
    {
        Nan::ThrowError("NJSTezosConfiguration::wrap: object template not valid");
    }
    return scope.Escape(obj);
}

NAN_METHOD(NJSTezosConfiguration::isNull) {
    auto cpp_implementation = djinni::js::ObjectWrapper<ledger::core::api::TezosConfiguration>::Unwrap(info.This());
    auto isNull = !cpp_implementation ? true : false;
    return info.GetReturnValue().Set(Nan::New<Boolean>(isNull));
}

void NJSTezosConfiguration::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSTezosConfiguration::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSTezosConfiguration").ToLocalChecked());

    //SetPrototypeMethod all methods
    Nan::SetPrototypeMethod(func_template,"isNull", isNull);
    //Set object prototype
    TezosConfiguration_prototype.Reset(objectTemplate);

    //Add template to target
    target->Set(Nan::New<String>("NJSTezosConfiguration").ToLocalChecked(), func_template->GetFunction());
}
