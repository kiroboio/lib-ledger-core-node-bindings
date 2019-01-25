// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from thread_dispatcher.djinni

#include "NJSExecutionContext.hpp"
#include "NJSObjectWrapper.hpp"

using namespace v8;
using namespace node;
using namespace std;

void NJSExecutionContext::execute(const std::shared_ptr<Runnable> & runnable)
{
    Nan::HandleScope scope;
    //Wrap parameters
    auto arg_0 = NJSRunnable::wrap(runnable);

    Handle<Value> args[1] = {arg_0};
    Local<Object> local_njs_impl = Nan::New<Object>(njs_impl);
    if(!local_njs_impl->IsObject())
    {
        Nan::ThrowError("NJSExecutionContext::execute fail to retrieve node implementation");
    }
    auto calling_funtion = Nan::Get(local_njs_impl,Nan::New<String>("execute").ToLocalChecked()).ToLocalChecked();
    auto result_execute = Nan::CallAsFunction(calling_funtion->ToObject(),local_njs_impl,1,args);
    if(result_execute.IsEmpty())
    {
        Nan::ThrowError("NJSExecutionContext::execute call failed");
    }
}

void NJSExecutionContext::delay(const std::shared_ptr<Runnable> & runnable, int64_t millis)
{
    Nan::HandleScope scope;
    //Wrap parameters
    auto arg_0 = NJSRunnable::wrap(runnable);

    auto arg_1 = Nan::New<Number>(millis);
    Handle<Value> args[2] = {arg_0,arg_1};
    Local<Object> local_njs_impl = Nan::New<Object>(njs_impl);
    if(!local_njs_impl->IsObject())
    {
        Nan::ThrowError("NJSExecutionContext::delay fail to retrieve node implementation");
    }
    auto calling_funtion = Nan::Get(local_njs_impl,Nan::New<String>("delay").ToLocalChecked()).ToLocalChecked();
    auto result_delay = Nan::CallAsFunction(calling_funtion->ToObject(),local_njs_impl,2,args);
    if(result_delay.IsEmpty())
    {
        Nan::ThrowError("NJSExecutionContext::delay call failed");
    }
}

NAN_METHOD(NJSExecutionContext::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSExecutionContext function can only be called as constructor (use New)");
    }

    if(!info[0]->IsObject())
    {
        return Nan::ThrowError("NJSExecutionContext::New requires an implementation from node");
    }
    auto node_instance = std::make_shared<NJSExecutionContext>(info[0]->ToObject());
    djinni::js::ObjectWrapper<NJSExecutionContext>::Wrap(node_instance, info.This());
    info.GetReturnValue().Set(info.This());
}


Nan::Persistent<ObjectTemplate> NJSExecutionContext::ExecutionContext_prototype;

Local<Object> NJSExecutionContext::wrap(const std::shared_ptr<ledger::core::api::ExecutionContext> &object) {
    Nan::EscapableHandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(ExecutionContext_prototype);

    Local<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance();
        djinni::js::ObjectWrapper<ledger::core::api::ExecutionContext>::Wrap(object, obj);
    }
    else
    {
        Nan::ThrowError("NJSExecutionContext::wrap: object template not valid");
    }
    return scope.Escape(obj);
}

void NJSExecutionContext::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSExecutionContext::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSExecutionContext").ToLocalChecked());
    Nan::SetPrototypeMethod(func_template,"New", New);
    //Set object prototype
    ExecutionContext_prototype.Reset(objectTemplate);

    //Add template to target
    target->Set(Nan::New<String>("NJSExecutionContext").ToLocalChecked(), func_template->GetFunction());
}
