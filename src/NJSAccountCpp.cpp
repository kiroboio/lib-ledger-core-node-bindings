// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet.djinni

#include "NJSAccountCpp.hpp"

using namespace v8;
using namespace node;
using namespace std;

NAN_METHOD(NJSAccount::getIndex) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSAccount::getIndex needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSAccount* obj = Nan::ObjectWrap::Unwrap<NJSAccount>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSAccount::getIndex : implementation of Account is not valid");
    }

    auto result = cpp_impl->getIndex();

    //Wrap result in node object
    auto arg_0 = Nan::New<Int32>(result);

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSAccount::queryOperations) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSAccount::queryOperations needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSAccount* obj = Nan::ObjectWrap::Unwrap<NJSAccount>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSAccount::queryOperations : implementation of Account is not valid");
    }

    auto result = cpp_impl->queryOperations();

    //Wrap result in node object
    auto arg_0_wrap = NJSOperationQuery::wrap(result);
    auto arg_0 = Nan::ObjectWrap::Unwrap<NJSOperationQuery>(arg_0_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSAccount::getBalance) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSAccount::getBalance needs 0 arguments");
    }

    //Check if parameters have correct types

    //Create promise and set it into Callcack
    auto arg_0_resolver = v8::Promise::Resolver::New(Nan::GetCurrentContext()).ToLocalChecked();
    NJSAmountCallback *njs_ptr_arg_0 = new NJSAmountCallback(arg_0_resolver);
    std::shared_ptr<NJSAmountCallback> arg_0(njs_ptr_arg_0);


    //Unwrap current object and retrieve its Cpp Implementation
    NJSAccount* obj = Nan::ObjectWrap::Unwrap<NJSAccount>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSAccount::getBalance : implementation of Account is not valid");
    }
    cpp_impl->getBalance(arg_0);
    info.GetReturnValue().Set(arg_0_resolver->GetPromise());
}
NAN_METHOD(NJSAccount::getBalanceHistory) {

    //Check if method called with right number of arguments
    if(info.Length() != 3)
    {
        return Nan::ThrowError("NJSAccount::getBalanceHistory needs 3 arguments");
    }

    //Check if parameters have correct types
    String::Utf8Value string_arg_0(info[0]->ToString());
    auto arg_0 = std::string(*string_arg_0);
    String::Utf8Value string_arg_1(info[1]->ToString());
    auto arg_1 = std::string(*string_arg_1);
    auto arg_2 = (ledger::core::api::TimePeriod)Nan::To<int>(info[2]).FromJust();

    //Create promise and set it into Callcack
    auto arg_3_resolver = v8::Promise::Resolver::New(Nan::GetCurrentContext()).ToLocalChecked();
    NJSAmountListCallback *njs_ptr_arg_3 = new NJSAmountListCallback(arg_3_resolver);
    std::shared_ptr<NJSAmountListCallback> arg_3(njs_ptr_arg_3);


    //Unwrap current object and retrieve its Cpp Implementation
    NJSAccount* obj = Nan::ObjectWrap::Unwrap<NJSAccount>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSAccount::getBalanceHistory : implementation of Account is not valid");
    }
    cpp_impl->getBalanceHistory(arg_0,arg_1,arg_2,arg_3);
    info.GetReturnValue().Set(arg_3_resolver->GetPromise());
}
NAN_METHOD(NJSAccount::isSynchronizing) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSAccount::isSynchronizing needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSAccount* obj = Nan::ObjectWrap::Unwrap<NJSAccount>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSAccount::isSynchronizing : implementation of Account is not valid");
    }

    auto result = cpp_impl->isSynchronizing();

    //Wrap result in node object
    auto arg_0 = Nan::New<Boolean>(result);

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSAccount::synchronize) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSAccount::synchronize needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSAccount* obj = Nan::ObjectWrap::Unwrap<NJSAccount>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSAccount::synchronize : implementation of Account is not valid");
    }

    auto result = cpp_impl->synchronize();

    //Wrap result in node object
    auto arg_0_wrap = NJSEventBus::wrap(result);
    auto arg_0 = Nan::ObjectWrap::Unwrap<NJSEventBus>(arg_0_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSAccount::getPreferences) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSAccount::getPreferences needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSAccount* obj = Nan::ObjectWrap::Unwrap<NJSAccount>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSAccount::getPreferences : implementation of Account is not valid");
    }

    auto result = cpp_impl->getPreferences();

    //Wrap result in node object
    auto arg_0_wrap = NJSPreferences::wrap(result);
    auto arg_0 = Nan::ObjectWrap::Unwrap<NJSPreferences>(arg_0_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSAccount::getLogger) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSAccount::getLogger needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSAccount* obj = Nan::ObjectWrap::Unwrap<NJSAccount>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSAccount::getLogger : implementation of Account is not valid");
    }

    auto result = cpp_impl->getLogger();

    //Wrap result in node object
    auto arg_0_wrap = NJSLogger::wrap(result);
    auto arg_0 = Nan::ObjectWrap::Unwrap<NJSLogger>(arg_0_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSAccount::getOperationPreferences) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSAccount::getOperationPreferences needs 1 arguments");
    }

    //Check if parameters have correct types
    String::Utf8Value string_arg_0(info[0]->ToString());
    auto arg_0 = std::string(*string_arg_0);

    //Unwrap current object and retrieve its Cpp Implementation
    NJSAccount* obj = Nan::ObjectWrap::Unwrap<NJSAccount>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSAccount::getOperationPreferences : implementation of Account is not valid");
    }

    auto result = cpp_impl->getOperationPreferences(arg_0);

    //Wrap result in node object
    auto arg_1_wrap = NJSPreferences::wrap(result);
    auto arg_1 = Nan::ObjectWrap::Unwrap<NJSPreferences>(arg_1_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSAccount::asBitcoinLikeAccount) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSAccount::asBitcoinLikeAccount needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSAccount* obj = Nan::ObjectWrap::Unwrap<NJSAccount>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSAccount::asBitcoinLikeAccount : implementation of Account is not valid");
    }

    auto result = cpp_impl->asBitcoinLikeAccount();

    //Wrap result in node object
    auto arg_0_wrap = NJSBitcoinLikeAccount::wrap(result);
    auto arg_0 = Nan::ObjectWrap::Unwrap<NJSBitcoinLikeAccount>(arg_0_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSAccount::isInstanceOfBitcoinLikeAccount) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSAccount::isInstanceOfBitcoinLikeAccount needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSAccount* obj = Nan::ObjectWrap::Unwrap<NJSAccount>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSAccount::isInstanceOfBitcoinLikeAccount : implementation of Account is not valid");
    }

    auto result = cpp_impl->isInstanceOfBitcoinLikeAccount();

    //Wrap result in node object
    auto arg_0 = Nan::New<Boolean>(result);

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSAccount::isInstanceOfEthereumLikeAccount) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSAccount::isInstanceOfEthereumLikeAccount needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSAccount* obj = Nan::ObjectWrap::Unwrap<NJSAccount>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSAccount::isInstanceOfEthereumLikeAccount : implementation of Account is not valid");
    }

    auto result = cpp_impl->isInstanceOfEthereumLikeAccount();

    //Wrap result in node object
    auto arg_0 = Nan::New<Boolean>(result);

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSAccount::isInstanceOfRippleLikeAccount) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSAccount::isInstanceOfRippleLikeAccount needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSAccount* obj = Nan::ObjectWrap::Unwrap<NJSAccount>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSAccount::isInstanceOfRippleLikeAccount : implementation of Account is not valid");
    }

    auto result = cpp_impl->isInstanceOfRippleLikeAccount();

    //Wrap result in node object
    auto arg_0 = Nan::New<Boolean>(result);

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSAccount::getFreshPublicAddresses) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSAccount::getFreshPublicAddresses needs 0 arguments");
    }

    //Check if parameters have correct types

    //Create promise and set it into Callcack
    auto arg_0_resolver = v8::Promise::Resolver::New(Nan::GetCurrentContext()).ToLocalChecked();
    NJSStringListCallback *njs_ptr_arg_0 = new NJSStringListCallback(arg_0_resolver);
    std::shared_ptr<NJSStringListCallback> arg_0(njs_ptr_arg_0);


    //Unwrap current object and retrieve its Cpp Implementation
    NJSAccount* obj = Nan::ObjectWrap::Unwrap<NJSAccount>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSAccount::getFreshPublicAddresses : implementation of Account is not valid");
    }
    cpp_impl->getFreshPublicAddresses(arg_0);
    info.GetReturnValue().Set(arg_0_resolver->GetPromise());
}
NAN_METHOD(NJSAccount::getWalletType) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSAccount::getWalletType needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSAccount* obj = Nan::ObjectWrap::Unwrap<NJSAccount>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSAccount::getWalletType : implementation of Account is not valid");
    }

    auto result = cpp_impl->getWalletType();

    //Wrap result in node object
    auto arg_0 = Nan::New<Integer>((int)result);

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSAccount::getEventBus) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSAccount::getEventBus needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSAccount* obj = Nan::ObjectWrap::Unwrap<NJSAccount>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSAccount::getEventBus : implementation of Account is not valid");
    }

    auto result = cpp_impl->getEventBus();

    //Wrap result in node object
    auto arg_0_wrap = NJSEventBus::wrap(result);
    auto arg_0 = Nan::ObjectWrap::Unwrap<NJSEventBus>(arg_0_wrap)->handle();


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSAccount::startBlockchainObservation) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSAccount::startBlockchainObservation needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSAccount* obj = Nan::ObjectWrap::Unwrap<NJSAccount>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSAccount::startBlockchainObservation : implementation of Account is not valid");
    }
    cpp_impl->startBlockchainObservation();
}
NAN_METHOD(NJSAccount::stopBlockchainObservation) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSAccount::stopBlockchainObservation needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSAccount* obj = Nan::ObjectWrap::Unwrap<NJSAccount>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSAccount::stopBlockchainObservation : implementation of Account is not valid");
    }
    cpp_impl->stopBlockchainObservation();
}
NAN_METHOD(NJSAccount::isObservingBlockchain) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSAccount::isObservingBlockchain needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSAccount* obj = Nan::ObjectWrap::Unwrap<NJSAccount>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSAccount::isObservingBlockchain : implementation of Account is not valid");
    }

    auto result = cpp_impl->isObservingBlockchain();

    //Wrap result in node object
    auto arg_0 = Nan::New<Boolean>(result);

    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSAccount::getLastBlock) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSAccount::getLastBlock needs 0 arguments");
    }

    //Check if parameters have correct types

    //Create promise and set it into Callcack
    auto arg_0_resolver = v8::Promise::Resolver::New(Nan::GetCurrentContext()).ToLocalChecked();
    NJSBlockCallback *njs_ptr_arg_0 = new NJSBlockCallback(arg_0_resolver);
    std::shared_ptr<NJSBlockCallback> arg_0(njs_ptr_arg_0);


    //Unwrap current object and retrieve its Cpp Implementation
    NJSAccount* obj = Nan::ObjectWrap::Unwrap<NJSAccount>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSAccount::getLastBlock : implementation of Account is not valid");
    }
    cpp_impl->getLastBlock(arg_0);
    info.GetReturnValue().Set(arg_0_resolver->GetPromise());
}
NAN_METHOD(NJSAccount::getRestoreKey) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSAccount::getRestoreKey needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    NJSAccount* obj = Nan::ObjectWrap::Unwrap<NJSAccount>(info.This());
    auto cpp_impl = obj->getCppImpl();
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSAccount::getRestoreKey : implementation of Account is not valid");
    }

    auto result = cpp_impl->getRestoreKey();

    //Wrap result in node object
    auto arg_0 = Nan::New<String>(result).ToLocalChecked();

    //Return result
    info.GetReturnValue().Set(arg_0);
}

NAN_METHOD(NJSAccount::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSAccount function can only be called as constructor (use New)");
    }
    NJSAccount *node_instance = new NJSAccount(nullptr);

    if(node_instance)
    {
        //Wrap and return node instance
        node_instance->Wrap(info.This());
        node_instance->Ref();
        info.GetReturnValue().Set(info.This());
    }
}


Nan::Persistent<ObjectTemplate> NJSAccount::Account_prototype;

Handle<Object> NJSAccount::wrap(const std::shared_ptr<ledger::core::api::Account> &object) {
    Nan::HandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(Account_prototype);

    Handle<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance();
        NJSAccount *new_obj = new NJSAccount(object);
        if(new_obj)
        {
            new_obj->Wrap(obj);
            new_obj->Ref();
        }
    }
    else
    {
        Nan::ThrowError("NJSAccount::wrap: object template not valid");
    }
    return obj;
}

NAN_METHOD(NJSAccount::isNull) {
    NJSAccount* obj = Nan::ObjectWrap::Unwrap<NJSAccount>(info.This());
    auto cpp_implementation = obj->getCppImpl();
    auto isNull = !cpp_implementation ? true : false;
    return info.GetReturnValue().Set(Nan::New<Boolean>(isNull));
}

void NJSAccount::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSAccount::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSAccount").ToLocalChecked());

    //SetPrototypeMethod all methods
    Nan::SetPrototypeMethod(func_template,"getIndex", getIndex);
    Nan::SetPrototypeMethod(func_template,"queryOperations", queryOperations);
    Nan::SetPrototypeMethod(func_template,"getBalance", getBalance);
    Nan::SetPrototypeMethod(func_template,"getBalanceHistory", getBalanceHistory);
    Nan::SetPrototypeMethod(func_template,"isSynchronizing", isSynchronizing);
    Nan::SetPrototypeMethod(func_template,"synchronize", synchronize);
    Nan::SetPrototypeMethod(func_template,"getPreferences", getPreferences);
    Nan::SetPrototypeMethod(func_template,"getLogger", getLogger);
    Nan::SetPrototypeMethod(func_template,"getOperationPreferences", getOperationPreferences);
    Nan::SetPrototypeMethod(func_template,"asBitcoinLikeAccount", asBitcoinLikeAccount);
    Nan::SetPrototypeMethod(func_template,"isInstanceOfBitcoinLikeAccount", isInstanceOfBitcoinLikeAccount);
    Nan::SetPrototypeMethod(func_template,"isInstanceOfEthereumLikeAccount", isInstanceOfEthereumLikeAccount);
    Nan::SetPrototypeMethod(func_template,"isInstanceOfRippleLikeAccount", isInstanceOfRippleLikeAccount);
    Nan::SetPrototypeMethod(func_template,"getFreshPublicAddresses", getFreshPublicAddresses);
    Nan::SetPrototypeMethod(func_template,"getWalletType", getWalletType);
    Nan::SetPrototypeMethod(func_template,"getEventBus", getEventBus);
    Nan::SetPrototypeMethod(func_template,"startBlockchainObservation", startBlockchainObservation);
    Nan::SetPrototypeMethod(func_template,"stopBlockchainObservation", stopBlockchainObservation);
    Nan::SetPrototypeMethod(func_template,"isObservingBlockchain", isObservingBlockchain);
    Nan::SetPrototypeMethod(func_template,"getLastBlock", getLastBlock);
    Nan::SetPrototypeMethod(func_template,"getRestoreKey", getRestoreKey);
    //Set object prototype
    Account_prototype.Reset(objectTemplate);
    Nan::SetPrototypeMethod(func_template,"isNull", isNull);

    //Add template to target
    target->Set(Nan::New<String>("NJSAccount").ToLocalChecked(), func_template->GetFunction());
}
