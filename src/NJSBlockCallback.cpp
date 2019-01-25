// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#include "NJSBlockCallback.hpp"
#include "NJSObjectWrapper.hpp"

using namespace v8;
using namespace node;
using namespace std;

void NJSBlockCallback::onCallback(const std::experimental::optional<Block> & result, const std::experimental::optional<Error> & error)
{
    Nan::HandleScope scope;
    //Wrap parameters
    Local<Value> arg_0;
    if(result)
    {
        auto arg_0_optional = (result).value();
        auto arg_0_tmp = Nan::New<Object>();
        auto arg_0_tmp_1 = Nan::New<String>(arg_0_optional.blockHash).ToLocalChecked();
        Nan::DefineOwnProperty(arg_0_tmp, Nan::New<String>("blockHash").ToLocalChecked(), arg_0_tmp_1);
        auto arg_0_tmp_2 = Nan::New<String>(arg_0_optional.uid).ToLocalChecked();
        Nan::DefineOwnProperty(arg_0_tmp, Nan::New<String>("uid").ToLocalChecked(), arg_0_tmp_2);
        auto date_arg_0_tmp_3 = chrono::duration_cast<chrono::milliseconds>(arg_0_optional.time.time_since_epoch()).count();
        auto arg_0_tmp_3 = Nan::New<Date>(date_arg_0_tmp_3).ToLocalChecked();
        Nan::DefineOwnProperty(arg_0_tmp, Nan::New<String>("time").ToLocalChecked(), arg_0_tmp_3);
        auto arg_0_tmp_4 = Nan::New<String>(arg_0_optional.currencyName).ToLocalChecked();
        Nan::DefineOwnProperty(arg_0_tmp, Nan::New<String>("currencyName").ToLocalChecked(), arg_0_tmp_4);
        auto arg_0_tmp_5 = Nan::New<Number>(arg_0_optional.height);
        Nan::DefineOwnProperty(arg_0_tmp, Nan::New<String>("height").ToLocalChecked(), arg_0_tmp_5);

        arg_0 = arg_0_tmp;
    }

    Local<Value> arg_1;
    if(error)
    {
        auto arg_1_optional = (error).value();
        auto arg_1_tmp = Nan::New<Object>();
        auto arg_1_tmp_1 = Nan::New<Integer>((int)arg_1_optional.code);
        Nan::DefineOwnProperty(arg_1_tmp, Nan::New<String>("code").ToLocalChecked(), arg_1_tmp_1);
        auto arg_1_tmp_2 = Nan::New<String>(arg_1_optional.message).ToLocalChecked();
        Nan::DefineOwnProperty(arg_1_tmp, Nan::New<String>("message").ToLocalChecked(), arg_1_tmp_2);

        arg_1 = arg_1_tmp;
    }

    auto local_resolver = Nan::New<Promise::Resolver>(pers_resolver);
    if(error)
    {
        auto rejected = local_resolver->Reject(Nan::GetCurrentContext(), arg_1);
        rejected.FromJust();
    }
    else
    {
        auto resolve = local_resolver->Resolve(Nan::GetCurrentContext(), arg_0);
        resolve.FromJust();
    }
}

NAN_METHOD(NJSBlockCallback::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSBlockCallback function can only be called as constructor (use New)");
    }

    auto resolver = v8::Promise::Resolver::New(Nan::GetCurrentContext()).ToLocalChecked();
    auto node_instance = std::make_shared<NJSBlockCallback>(resolver);
    djinni::js::ObjectWrapper<NJSBlockCallback>::Wrap(node_instance, info.This());
    info.GetReturnValue().Set(info.This());
}


Nan::Persistent<ObjectTemplate> NJSBlockCallback::BlockCallback_prototype;

Local<Object> NJSBlockCallback::wrap(const std::shared_ptr<ledger::core::api::BlockCallback> &object) {
    Nan::EscapableHandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(BlockCallback_prototype);

    Local<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance();
        djinni::js::ObjectWrapper<ledger::core::api::BlockCallback>::Wrap(object, obj);
    }
    else
    {
        Nan::ThrowError("NJSBlockCallback::wrap: object template not valid");
    }
    return scope.Escape(obj);
}

void NJSBlockCallback::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSBlockCallback::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSBlockCallback").ToLocalChecked());
    Nan::SetPrototypeMethod(func_template,"New", New);
    //Set object prototype
    BlockCallback_prototype.Reset(objectTemplate);

    //Add template to target
    target->Set(Nan::New<String>("NJSBlockCallback").ToLocalChecked(), func_template->GetFunction());
}
