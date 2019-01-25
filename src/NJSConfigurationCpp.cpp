// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from configuration.djinni

#include "NJSConfigurationCpp.hpp"
#include "NJSObjectWrapper.hpp"

using namespace v8;
using namespace node;
using namespace std;


NAN_METHOD(NJSConfiguration::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSConfiguration function can only be called as constructor (use New)");
    }
    info.GetReturnValue().Set(info.This());
}


Nan::Persistent<ObjectTemplate> NJSConfiguration::Configuration_prototype;

Local<Object> NJSConfiguration::wrap(const std::shared_ptr<ledger::core::api::Configuration> &object) {
    Nan::EscapableHandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(Configuration_prototype);

    Local<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance();
        djinni::js::ObjectWrapper<ledger::core::api::Configuration>::Wrap(object, obj);
    }
    else
    {
        Nan::ThrowError("NJSConfiguration::wrap: object template not valid");
    }
    return scope.Escape(obj);
}

NAN_METHOD(NJSConfiguration::isNull) {
    auto cpp_implementation = djinni::js::ObjectWrapper<Configuration>::Unwrap(info.This());
    auto isNull = !cpp_implementation ? true : false;
    return info.GetReturnValue().Set(Nan::New<Boolean>(isNull));
}

void NJSConfiguration::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSConfiguration::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSConfiguration").ToLocalChecked());

    //SetPrototypeMethod all methods
    Nan::SetPrototypeMethod(func_template,"isNull", isNull);
    //Set object prototype
    Configuration_prototype.Reset(objectTemplate);

    //Add template to target
    target->Set(Nan::New<String>("NJSConfiguration").ToLocalChecked(), func_template->GetFunction());
}
