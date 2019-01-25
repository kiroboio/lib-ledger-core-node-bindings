// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from addresses.djinni

#include "NJSEthereumLikeAddressCpp.hpp"
#include "NJSObjectWrapper.hpp"

using namespace v8;
using namespace node;
using namespace std;

NAN_METHOD(NJSEthereumLikeAddress::getVersion) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSEthereumLikeAddress::getVersion needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<EthereumLikeAddress>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSEthereumLikeAddress::getVersion : implementation of EthereumLikeAddress is not valid");
    }

    auto result = cpp_impl->getVersion();

    //Wrap result in node object
    Local<Array> arg_0 = Nan::New<Array>();
    for(size_t arg_0_id = 0; arg_0_id < result.size(); arg_0_id++)
    {
        auto arg_0_elem = Nan::New<Uint32>(result[arg_0_id]);
        arg_0->Set((int)arg_0_id,arg_0_elem);
    }


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSEthereumLikeAddress::getKeccakHash) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSEthereumLikeAddress::getKeccakHash needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<EthereumLikeAddress>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSEthereumLikeAddress::getKeccakHash : implementation of EthereumLikeAddress is not valid");
    }

    auto result = cpp_impl->getKeccakHash();

    //Wrap result in node object
    Local<Array> arg_0 = Nan::New<Array>();
    for(size_t arg_0_id = 0; arg_0_id < result.size(); arg_0_id++)
    {
        auto arg_0_elem = Nan::New<Uint32>(result[arg_0_id]);
        arg_0->Set((int)arg_0_id,arg_0_elem);
    }


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSEthereumLikeAddress::getNetworkParameters) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSEthereumLikeAddress::getNetworkParameters needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<EthereumLikeAddress>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSEthereumLikeAddress::getNetworkParameters : implementation of EthereumLikeAddress is not valid");
    }

    auto result = cpp_impl->getNetworkParameters();

    //Wrap result in node object
    auto arg_0 = Nan::New<Object>();
    auto arg_0_1 = Nan::New<String>(result.Identifier).ToLocalChecked();
    Nan::DefineOwnProperty(arg_0, Nan::New<String>("Identifier").ToLocalChecked(), arg_0_1);
    auto arg_0_2 = Nan::New<String>(result.MessagePrefix).ToLocalChecked();
    Nan::DefineOwnProperty(arg_0, Nan::New<String>("MessagePrefix").ToLocalChecked(), arg_0_2);
    auto arg_0_3 = Nan::New<String>(result.ChainID).ToLocalChecked();
    Nan::DefineOwnProperty(arg_0, Nan::New<String>("ChainID").ToLocalChecked(), arg_0_3);
    Local<Array> arg_0_4 = Nan::New<Array>();
    for(size_t arg_0_4_id = 0; arg_0_4_id < result.XPUBVersion.size(); arg_0_4_id++)
    {
        auto arg_0_4_elem = Nan::New<Uint32>(result.XPUBVersion[arg_0_4_id]);
        arg_0_4->Set((int)arg_0_4_id,arg_0_4_elem);
    }

    Nan::DefineOwnProperty(arg_0, Nan::New<String>("XPUBVersion").ToLocalChecked(), arg_0_4);
    Local<Array> arg_0_5 = Nan::New<Array>();
    for(size_t arg_0_5_id = 0; arg_0_5_id < result.AdditionalEIPs.size(); arg_0_5_id++)
    {
        auto arg_0_5_elem = Nan::New<String>(result.AdditionalEIPs[arg_0_5_id]).ToLocalChecked();
        arg_0_5->Set((int)arg_0_5_id,arg_0_5_elem);
    }

    Nan::DefineOwnProperty(arg_0, Nan::New<String>("AdditionalEIPs").ToLocalChecked(), arg_0_5);
    auto arg_0_6 = Nan::New<Number>(result.TimestampDelay);
    Nan::DefineOwnProperty(arg_0, Nan::New<String>("TimestampDelay").ToLocalChecked(), arg_0_6);


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSEthereumLikeAddress::toEIP55) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSEthereumLikeAddress::toEIP55 needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<EthereumLikeAddress>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSEthereumLikeAddress::toEIP55 : implementation of EthereumLikeAddress is not valid");
    }

    auto result = cpp_impl->toEIP55();

    //Wrap result in node object
    auto arg_0 = Nan::New<String>(result).ToLocalChecked();

    //Return result
    info.GetReturnValue().Set(arg_0);
}

NAN_METHOD(NJSEthereumLikeAddress::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSEthereumLikeAddress function can only be called as constructor (use New)");
    }
    info.GetReturnValue().Set(info.This());
}


Nan::Persistent<ObjectTemplate> NJSEthereumLikeAddress::EthereumLikeAddress_prototype;

Local<Object> NJSEthereumLikeAddress::wrap(const std::shared_ptr<ledger::core::api::EthereumLikeAddress> &object) {
    Nan::EscapableHandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(EthereumLikeAddress_prototype);

    Local<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance();
        djinni::js::ObjectWrapper<ledger::core::api::EthereumLikeAddress>::Wrap(object, obj);
    }
    else
    {
        Nan::ThrowError("NJSEthereumLikeAddress::wrap: object template not valid");
    }
    return scope.Escape(obj);
}

NAN_METHOD(NJSEthereumLikeAddress::isNull) {
    auto cpp_implementation = djinni::js::ObjectWrapper<EthereumLikeAddress>::Unwrap(info.This());
    auto isNull = !cpp_implementation ? true : false;
    return info.GetReturnValue().Set(Nan::New<Boolean>(isNull));
}

void NJSEthereumLikeAddress::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSEthereumLikeAddress::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSEthereumLikeAddress").ToLocalChecked());

    //SetPrototypeMethod all methods
    Nan::SetPrototypeMethod(func_template,"getVersion", getVersion);
    Nan::SetPrototypeMethod(func_template,"getKeccakHash", getKeccakHash);
    Nan::SetPrototypeMethod(func_template,"getNetworkParameters", getNetworkParameters);
    Nan::SetPrototypeMethod(func_template,"toEIP55", toEIP55);
    Nan::SetPrototypeMethod(func_template,"isNull", isNull);
    //Set object prototype
    EthereumLikeAddress_prototype.Reset(objectTemplate);

    //Add template to target
    target->Set(Nan::New<String>("NJSEthereumLikeAddress").ToLocalChecked(), func_template->GetFunction());
}
