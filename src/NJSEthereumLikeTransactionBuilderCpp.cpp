// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from ethereum_like_wallet.djinni

#include "NJSEthereumLikeTransactionBuilderCpp.hpp"
#include "NJSObjectWrapper.hpp"

using namespace v8;
using namespace node;
using namespace std;

NAN_METHOD(NJSEthereumLikeTransactionBuilder::sendToAddress) {

    //Check if method called with right number of arguments
    if(info.Length() != 2)
    {
        return Nan::ThrowError("NJSEthereumLikeTransactionBuilder::sendToAddress needs 2 arguments");
    }

    //Check if parameters have correct types
    Local<Object> njs_arg_0 = info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    auto arg_0 = djinni::js::ObjectWrapper<Amount>::Unwrap(njs_arg_0);
    if(!arg_0)
    {
        return Nan::ThrowError("NodeJs Object to NJSAmount failed");
    }

    String::Utf8Value string_arg_1(info[1]->ToString());
    auto arg_1 = std::string(*string_arg_1);

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<EthereumLikeTransactionBuilder>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSEthereumLikeTransactionBuilder::sendToAddress : implementation of EthereumLikeTransactionBuilder is not valid");
    }

    auto result = cpp_impl->sendToAddress(arg_0,arg_1);

    //Wrap result in node object
    auto arg_2 = NJSEthereumLikeTransactionBuilder::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_2);
}
NAN_METHOD(NJSEthereumLikeTransactionBuilder::wipeToAddress) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSEthereumLikeTransactionBuilder::wipeToAddress needs 1 arguments");
    }

    //Check if parameters have correct types
    String::Utf8Value string_arg_0(info[0]->ToString());
    auto arg_0 = std::string(*string_arg_0);

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<EthereumLikeTransactionBuilder>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSEthereumLikeTransactionBuilder::wipeToAddress : implementation of EthereumLikeTransactionBuilder is not valid");
    }

    auto result = cpp_impl->wipeToAddress(arg_0);

    //Wrap result in node object
    auto arg_1 = NJSEthereumLikeTransactionBuilder::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSEthereumLikeTransactionBuilder::setGasPrice) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSEthereumLikeTransactionBuilder::setGasPrice needs 1 arguments");
    }

    //Check if parameters have correct types
    Local<Object> njs_arg_0 = info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    auto arg_0 = djinni::js::ObjectWrapper<Amount>::Unwrap(njs_arg_0);
    if(!arg_0)
    {
        return Nan::ThrowError("NodeJs Object to NJSAmount failed");
    }


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<EthereumLikeTransactionBuilder>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSEthereumLikeTransactionBuilder::setGasPrice : implementation of EthereumLikeTransactionBuilder is not valid");
    }

    auto result = cpp_impl->setGasPrice(arg_0);

    //Wrap result in node object
    auto arg_1 = NJSEthereumLikeTransactionBuilder::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSEthereumLikeTransactionBuilder::setGasLimit) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSEthereumLikeTransactionBuilder::setGasLimit needs 1 arguments");
    }

    //Check if parameters have correct types
    Local<Object> njs_arg_0 = info[0]->ToObject(Nan::GetCurrentContext()).ToLocalChecked();
    auto arg_0 = djinni::js::ObjectWrapper<Amount>::Unwrap(njs_arg_0);
    if(!arg_0)
    {
        return Nan::ThrowError("NodeJs Object to NJSAmount failed");
    }


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<EthereumLikeTransactionBuilder>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSEthereumLikeTransactionBuilder::setGasLimit : implementation of EthereumLikeTransactionBuilder is not valid");
    }

    auto result = cpp_impl->setGasLimit(arg_0);

    //Wrap result in node object
    auto arg_1 = NJSEthereumLikeTransactionBuilder::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSEthereumLikeTransactionBuilder::setInputData) {

    //Check if method called with right number of arguments
    if(info.Length() != 1)
    {
        return Nan::ThrowError("NJSEthereumLikeTransactionBuilder::setInputData needs 1 arguments");
    }

    //Check if parameters have correct types
    vector<uint8_t> arg_0;
    Local<Array> arg_0_container = Local<Array>::Cast(info[0]);
    for(uint32_t arg_0_id = 0; arg_0_id < arg_0_container->Length(); arg_0_id++)
    {
        if(arg_0_container->Get(arg_0_id)->IsUint32())
        {
            auto arg_0_elem = Nan::To<uint32_t>(arg_0_container->Get(arg_0_id)).FromJust();
            arg_0.emplace_back(arg_0_elem);
        }
    }


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<EthereumLikeTransactionBuilder>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSEthereumLikeTransactionBuilder::setInputData : implementation of EthereumLikeTransactionBuilder is not valid");
    }

    auto result = cpp_impl->setInputData(arg_0);

    //Wrap result in node object
    auto arg_1 = NJSEthereumLikeTransactionBuilder::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_1);
}
NAN_METHOD(NJSEthereumLikeTransactionBuilder::build) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSEthereumLikeTransactionBuilder::build needs 0 arguments");
    }

    //Check if parameters have correct types

    //Create promise and set it into Callback
    auto arg_0_resolver = v8::Promise::Resolver::New(Nan::GetCurrentContext()).ToLocalChecked();
    NJSEthereumLikeTransactionCallback *njs_ptr_arg_0 = new NJSEthereumLikeTransactionCallback(arg_0_resolver);
    std::shared_ptr<NJSEthereumLikeTransactionCallback> arg_0(njs_ptr_arg_0);


    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<EthereumLikeTransactionBuilder>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSEthereumLikeTransactionBuilder::build : implementation of EthereumLikeTransactionBuilder is not valid");
    }
    cpp_impl->build(arg_0);
    info.GetReturnValue().Set(arg_0_resolver->GetPromise());
}
NAN_METHOD(NJSEthereumLikeTransactionBuilder::clone) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSEthereumLikeTransactionBuilder::clone needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<EthereumLikeTransactionBuilder>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSEthereumLikeTransactionBuilder::clone : implementation of EthereumLikeTransactionBuilder is not valid");
    }

    auto result = cpp_impl->clone();

    //Wrap result in node object
    auto arg_0 = NJSEthereumLikeTransactionBuilder::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_0);
}
NAN_METHOD(NJSEthereumLikeTransactionBuilder::reset) {

    //Check if method called with right number of arguments
    if(info.Length() != 0)
    {
        return Nan::ThrowError("NJSEthereumLikeTransactionBuilder::reset needs 0 arguments");
    }

    //Check if parameters have correct types

    //Unwrap current object and retrieve its Cpp Implementation
    auto cpp_impl = djinni::js::ObjectWrapper<EthereumLikeTransactionBuilder>::Unwrap(info.This());
    if(!cpp_impl)
    {
        return Nan::ThrowError("NJSEthereumLikeTransactionBuilder::reset : implementation of EthereumLikeTransactionBuilder is not valid");
    }
    cpp_impl->reset();
}
NAN_METHOD(NJSEthereumLikeTransactionBuilder::parseRawUnsignedTransaction) {

    //Check if method called with right number of arguments
    if(info.Length() != 2)
    {
        return Nan::ThrowError("NJSEthereumLikeTransactionBuilder::parseRawUnsignedTransaction needs 2 arguments");
    }

    //Check if parameters have correct types

    auto field_arg_0_1 = Nan::Get(info[0]->ToObject(), Nan::New<String>("walletType").ToLocalChecked()).ToLocalChecked();
    auto arg_0_1 = (ledger::core::api::WalletType)Nan::To<int>(field_arg_0_1).FromJust();

    auto field_arg_0_2 = Nan::Get(info[0]->ToObject(), Nan::New<String>("name").ToLocalChecked()).ToLocalChecked();
    String::Utf8Value string_arg_0_2(field_arg_0_2->ToString());
    auto arg_0_2 = std::string(*string_arg_0_2);

    auto field_arg_0_3 = Nan::Get(info[0]->ToObject(), Nan::New<String>("bip44CoinType").ToLocalChecked()).ToLocalChecked();
    auto arg_0_3 = Nan::To<int32_t>(field_arg_0_3).FromJust();

    auto field_arg_0_4 = Nan::Get(info[0]->ToObject(), Nan::New<String>("paymentUriScheme").ToLocalChecked()).ToLocalChecked();
    String::Utf8Value string_arg_0_4(field_arg_0_4->ToString());
    auto arg_0_4 = std::string(*string_arg_0_4);

    auto field_arg_0_5 = Nan::Get(info[0]->ToObject(), Nan::New<String>("units").ToLocalChecked()).ToLocalChecked();
    vector<CurrencyUnit> arg_0_5;
    Local<Array> arg_0_5_container = Local<Array>::Cast(field_arg_0_5);
    for(uint32_t arg_0_5_id = 0; arg_0_5_id < arg_0_5_container->Length(); arg_0_5_id++)
    {
        if(arg_0_5_container->Get(arg_0_5_id)->IsObject())
        {

            auto field_arg_0_5_elem_1 = Nan::Get(arg_0_5_container->Get(arg_0_5_id)->ToObject(), Nan::New<String>("name").ToLocalChecked()).ToLocalChecked();
            String::Utf8Value string_arg_0_5_elem_1(field_arg_0_5_elem_1->ToString());
            auto arg_0_5_elem_1 = std::string(*string_arg_0_5_elem_1);

            auto field_arg_0_5_elem_2 = Nan::Get(arg_0_5_container->Get(arg_0_5_id)->ToObject(), Nan::New<String>("symbol").ToLocalChecked()).ToLocalChecked();
            String::Utf8Value string_arg_0_5_elem_2(field_arg_0_5_elem_2->ToString());
            auto arg_0_5_elem_2 = std::string(*string_arg_0_5_elem_2);

            auto field_arg_0_5_elem_3 = Nan::Get(arg_0_5_container->Get(arg_0_5_id)->ToObject(), Nan::New<String>("code").ToLocalChecked()).ToLocalChecked();
            String::Utf8Value string_arg_0_5_elem_3(field_arg_0_5_elem_3->ToString());
            auto arg_0_5_elem_3 = std::string(*string_arg_0_5_elem_3);

            auto field_arg_0_5_elem_4 = Nan::Get(arg_0_5_container->Get(arg_0_5_id)->ToObject(), Nan::New<String>("numberOfDecimal").ToLocalChecked()).ToLocalChecked();
            auto arg_0_5_elem_4 = Nan::To<int32_t>(field_arg_0_5_elem_4).FromJust();
            CurrencyUnit arg_0_5_elem(arg_0_5_elem_1, arg_0_5_elem_2, arg_0_5_elem_3, arg_0_5_elem_4);

            arg_0_5.emplace_back(arg_0_5_elem);
        }
    }


    auto field_arg_0_6 = Nan::Get(info[0]->ToObject(), Nan::New<String>("bitcoinLikeNetworkParameters").ToLocalChecked()).ToLocalChecked();
    auto arg_0_6 = std::experimental::optional<BitcoinLikeNetworkParameters>();
    if(!field_arg_0_6->IsNull() && !field_arg_0_6->IsUndefined())
    {

        auto field_opt_arg_0_6_1 = Nan::Get(field_arg_0_6->ToObject(), Nan::New<String>("Identifier").ToLocalChecked()).ToLocalChecked();
        String::Utf8Value string_opt_arg_0_6_1(field_opt_arg_0_6_1->ToString());
        auto opt_arg_0_6_1 = std::string(*string_opt_arg_0_6_1);

        auto field_opt_arg_0_6_2 = Nan::Get(field_arg_0_6->ToObject(), Nan::New<String>("P2PKHVersion").ToLocalChecked()).ToLocalChecked();
        vector<uint8_t> opt_arg_0_6_2;
        Local<Array> opt_arg_0_6_2_container = Local<Array>::Cast(field_opt_arg_0_6_2);
        for(uint32_t opt_arg_0_6_2_id = 0; opt_arg_0_6_2_id < opt_arg_0_6_2_container->Length(); opt_arg_0_6_2_id++)
        {
            if(opt_arg_0_6_2_container->Get(opt_arg_0_6_2_id)->IsUint32())
            {
                auto opt_arg_0_6_2_elem = Nan::To<uint32_t>(opt_arg_0_6_2_container->Get(opt_arg_0_6_2_id)).FromJust();
                opt_arg_0_6_2.emplace_back(opt_arg_0_6_2_elem);
            }
        }


        auto field_opt_arg_0_6_3 = Nan::Get(field_arg_0_6->ToObject(), Nan::New<String>("P2SHVersion").ToLocalChecked()).ToLocalChecked();
        vector<uint8_t> opt_arg_0_6_3;
        Local<Array> opt_arg_0_6_3_container = Local<Array>::Cast(field_opt_arg_0_6_3);
        for(uint32_t opt_arg_0_6_3_id = 0; opt_arg_0_6_3_id < opt_arg_0_6_3_container->Length(); opt_arg_0_6_3_id++)
        {
            if(opt_arg_0_6_3_container->Get(opt_arg_0_6_3_id)->IsUint32())
            {
                auto opt_arg_0_6_3_elem = Nan::To<uint32_t>(opt_arg_0_6_3_container->Get(opt_arg_0_6_3_id)).FromJust();
                opt_arg_0_6_3.emplace_back(opt_arg_0_6_3_elem);
            }
        }


        auto field_opt_arg_0_6_4 = Nan::Get(field_arg_0_6->ToObject(), Nan::New<String>("XPUBVersion").ToLocalChecked()).ToLocalChecked();
        vector<uint8_t> opt_arg_0_6_4;
        Local<Array> opt_arg_0_6_4_container = Local<Array>::Cast(field_opt_arg_0_6_4);
        for(uint32_t opt_arg_0_6_4_id = 0; opt_arg_0_6_4_id < opt_arg_0_6_4_container->Length(); opt_arg_0_6_4_id++)
        {
            if(opt_arg_0_6_4_container->Get(opt_arg_0_6_4_id)->IsUint32())
            {
                auto opt_arg_0_6_4_elem = Nan::To<uint32_t>(opt_arg_0_6_4_container->Get(opt_arg_0_6_4_id)).FromJust();
                opt_arg_0_6_4.emplace_back(opt_arg_0_6_4_elem);
            }
        }


        auto field_opt_arg_0_6_5 = Nan::Get(field_arg_0_6->ToObject(), Nan::New<String>("FeePolicy").ToLocalChecked()).ToLocalChecked();
        auto opt_arg_0_6_5 = (ledger::core::api::BitcoinLikeFeePolicy)Nan::To<int>(field_opt_arg_0_6_5).FromJust();

        auto field_opt_arg_0_6_6 = Nan::Get(field_arg_0_6->ToObject(), Nan::New<String>("DustAmount").ToLocalChecked()).ToLocalChecked();
        auto opt_arg_0_6_6 = Nan::To<int64_t>(field_opt_arg_0_6_6).FromJust();

        auto field_opt_arg_0_6_7 = Nan::Get(field_arg_0_6->ToObject(), Nan::New<String>("MessagePrefix").ToLocalChecked()).ToLocalChecked();
        String::Utf8Value string_opt_arg_0_6_7(field_opt_arg_0_6_7->ToString());
        auto opt_arg_0_6_7 = std::string(*string_opt_arg_0_6_7);

        auto field_opt_arg_0_6_8 = Nan::Get(field_arg_0_6->ToObject(), Nan::New<String>("UsesTimestampedTransaction").ToLocalChecked()).ToLocalChecked();
        auto opt_arg_0_6_8 = Nan::To<bool>(field_opt_arg_0_6_8).FromJust();

        auto field_opt_arg_0_6_9 = Nan::Get(field_arg_0_6->ToObject(), Nan::New<String>("TimestampDelay").ToLocalChecked()).ToLocalChecked();
        auto opt_arg_0_6_9 = Nan::To<int64_t>(field_opt_arg_0_6_9).FromJust();

        auto field_opt_arg_0_6_10 = Nan::Get(field_arg_0_6->ToObject(), Nan::New<String>("SigHash").ToLocalChecked()).ToLocalChecked();
        vector<uint8_t> opt_arg_0_6_10;
        Local<Array> opt_arg_0_6_10_container = Local<Array>::Cast(field_opt_arg_0_6_10);
        for(uint32_t opt_arg_0_6_10_id = 0; opt_arg_0_6_10_id < opt_arg_0_6_10_container->Length(); opt_arg_0_6_10_id++)
        {
            if(opt_arg_0_6_10_container->Get(opt_arg_0_6_10_id)->IsUint32())
            {
                auto opt_arg_0_6_10_elem = Nan::To<uint32_t>(opt_arg_0_6_10_container->Get(opt_arg_0_6_10_id)).FromJust();
                opt_arg_0_6_10.emplace_back(opt_arg_0_6_10_elem);
            }
        }


        auto field_opt_arg_0_6_11 = Nan::Get(field_arg_0_6->ToObject(), Nan::New<String>("AdditionalBIPs").ToLocalChecked()).ToLocalChecked();
        vector<std::string> opt_arg_0_6_11;
        Local<Array> opt_arg_0_6_11_container = Local<Array>::Cast(field_opt_arg_0_6_11);
        for(uint32_t opt_arg_0_6_11_id = 0; opt_arg_0_6_11_id < opt_arg_0_6_11_container->Length(); opt_arg_0_6_11_id++)
        {
            if(opt_arg_0_6_11_container->Get(opt_arg_0_6_11_id)->IsString())
            {
                String::Utf8Value string_opt_arg_0_6_11_elem(opt_arg_0_6_11_container->Get(opt_arg_0_6_11_id)->ToString());
                auto opt_arg_0_6_11_elem = std::string(*string_opt_arg_0_6_11_elem);
                opt_arg_0_6_11.emplace_back(opt_arg_0_6_11_elem);
            }
        }

        BitcoinLikeNetworkParameters opt_arg_0_6(opt_arg_0_6_1, opt_arg_0_6_2, opt_arg_0_6_3, opt_arg_0_6_4, opt_arg_0_6_5, opt_arg_0_6_6, opt_arg_0_6_7, opt_arg_0_6_8, opt_arg_0_6_9, opt_arg_0_6_10, opt_arg_0_6_11);

        arg_0_6.emplace(opt_arg_0_6);
    }


    auto field_arg_0_7 = Nan::Get(info[0]->ToObject(), Nan::New<String>("ethereumLikeNetworkParameters").ToLocalChecked()).ToLocalChecked();
    auto arg_0_7 = std::experimental::optional<EthereumLikeNetworkParameters>();
    if(!field_arg_0_7->IsNull() && !field_arg_0_7->IsUndefined())
    {

        auto field_opt_arg_0_7_1 = Nan::Get(field_arg_0_7->ToObject(), Nan::New<String>("Identifier").ToLocalChecked()).ToLocalChecked();
        String::Utf8Value string_opt_arg_0_7_1(field_opt_arg_0_7_1->ToString());
        auto opt_arg_0_7_1 = std::string(*string_opt_arg_0_7_1);

        auto field_opt_arg_0_7_2 = Nan::Get(field_arg_0_7->ToObject(), Nan::New<String>("MessagePrefix").ToLocalChecked()).ToLocalChecked();
        String::Utf8Value string_opt_arg_0_7_2(field_opt_arg_0_7_2->ToString());
        auto opt_arg_0_7_2 = std::string(*string_opt_arg_0_7_2);

        auto field_opt_arg_0_7_3 = Nan::Get(field_arg_0_7->ToObject(), Nan::New<String>("ChainID").ToLocalChecked()).ToLocalChecked();
        String::Utf8Value string_opt_arg_0_7_3(field_opt_arg_0_7_3->ToString());
        auto opt_arg_0_7_3 = std::string(*string_opt_arg_0_7_3);

        auto field_opt_arg_0_7_4 = Nan::Get(field_arg_0_7->ToObject(), Nan::New<String>("XPUBVersion").ToLocalChecked()).ToLocalChecked();
        vector<uint8_t> opt_arg_0_7_4;
        Local<Array> opt_arg_0_7_4_container = Local<Array>::Cast(field_opt_arg_0_7_4);
        for(uint32_t opt_arg_0_7_4_id = 0; opt_arg_0_7_4_id < opt_arg_0_7_4_container->Length(); opt_arg_0_7_4_id++)
        {
            if(opt_arg_0_7_4_container->Get(opt_arg_0_7_4_id)->IsUint32())
            {
                auto opt_arg_0_7_4_elem = Nan::To<uint32_t>(opt_arg_0_7_4_container->Get(opt_arg_0_7_4_id)).FromJust();
                opt_arg_0_7_4.emplace_back(opt_arg_0_7_4_elem);
            }
        }


        auto field_opt_arg_0_7_5 = Nan::Get(field_arg_0_7->ToObject(), Nan::New<String>("AdditionalEIPs").ToLocalChecked()).ToLocalChecked();
        vector<std::string> opt_arg_0_7_5;
        Local<Array> opt_arg_0_7_5_container = Local<Array>::Cast(field_opt_arg_0_7_5);
        for(uint32_t opt_arg_0_7_5_id = 0; opt_arg_0_7_5_id < opt_arg_0_7_5_container->Length(); opt_arg_0_7_5_id++)
        {
            if(opt_arg_0_7_5_container->Get(opt_arg_0_7_5_id)->IsString())
            {
                String::Utf8Value string_opt_arg_0_7_5_elem(opt_arg_0_7_5_container->Get(opt_arg_0_7_5_id)->ToString());
                auto opt_arg_0_7_5_elem = std::string(*string_opt_arg_0_7_5_elem);
                opt_arg_0_7_5.emplace_back(opt_arg_0_7_5_elem);
            }
        }


        auto field_opt_arg_0_7_6 = Nan::Get(field_arg_0_7->ToObject(), Nan::New<String>("TimestampDelay").ToLocalChecked()).ToLocalChecked();
        auto opt_arg_0_7_6 = Nan::To<int64_t>(field_opt_arg_0_7_6).FromJust();
        EthereumLikeNetworkParameters opt_arg_0_7(opt_arg_0_7_1, opt_arg_0_7_2, opt_arg_0_7_3, opt_arg_0_7_4, opt_arg_0_7_5, opt_arg_0_7_6);

        arg_0_7.emplace(opt_arg_0_7);
    }

    Currency arg_0(arg_0_1, arg_0_2, arg_0_3, arg_0_4, arg_0_5, arg_0_6, arg_0_7);

    vector<uint8_t> arg_1;
    Local<Array> arg_1_container = Local<Array>::Cast(info[1]);
    for(uint32_t arg_1_id = 0; arg_1_id < arg_1_container->Length(); arg_1_id++)
    {
        if(arg_1_container->Get(arg_1_id)->IsUint32())
        {
            auto arg_1_elem = Nan::To<uint32_t>(arg_1_container->Get(arg_1_id)).FromJust();
            arg_1.emplace_back(arg_1_elem);
        }
    }


    auto result = EthereumLikeTransactionBuilder::parseRawUnsignedTransaction(arg_0,arg_1);

    //Wrap result in node object
    auto arg_2 = NJSEthereumLikeTransaction::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_2);
}
NAN_METHOD(NJSEthereumLikeTransactionBuilder::parseRawSignedTransaction) {

    //Check if method called with right number of arguments
    if(info.Length() != 2)
    {
        return Nan::ThrowError("NJSEthereumLikeTransactionBuilder::parseRawSignedTransaction needs 2 arguments");
    }

    //Check if parameters have correct types

    auto field_arg_0_1 = Nan::Get(info[0]->ToObject(), Nan::New<String>("walletType").ToLocalChecked()).ToLocalChecked();
    auto arg_0_1 = (ledger::core::api::WalletType)Nan::To<int>(field_arg_0_1).FromJust();

    auto field_arg_0_2 = Nan::Get(info[0]->ToObject(), Nan::New<String>("name").ToLocalChecked()).ToLocalChecked();
    String::Utf8Value string_arg_0_2(field_arg_0_2->ToString());
    auto arg_0_2 = std::string(*string_arg_0_2);

    auto field_arg_0_3 = Nan::Get(info[0]->ToObject(), Nan::New<String>("bip44CoinType").ToLocalChecked()).ToLocalChecked();
    auto arg_0_3 = Nan::To<int32_t>(field_arg_0_3).FromJust();

    auto field_arg_0_4 = Nan::Get(info[0]->ToObject(), Nan::New<String>("paymentUriScheme").ToLocalChecked()).ToLocalChecked();
    String::Utf8Value string_arg_0_4(field_arg_0_4->ToString());
    auto arg_0_4 = std::string(*string_arg_0_4);

    auto field_arg_0_5 = Nan::Get(info[0]->ToObject(), Nan::New<String>("units").ToLocalChecked()).ToLocalChecked();
    vector<CurrencyUnit> arg_0_5;
    Local<Array> arg_0_5_container = Local<Array>::Cast(field_arg_0_5);
    for(uint32_t arg_0_5_id = 0; arg_0_5_id < arg_0_5_container->Length(); arg_0_5_id++)
    {
        if(arg_0_5_container->Get(arg_0_5_id)->IsObject())
        {

            auto field_arg_0_5_elem_1 = Nan::Get(arg_0_5_container->Get(arg_0_5_id)->ToObject(), Nan::New<String>("name").ToLocalChecked()).ToLocalChecked();
            String::Utf8Value string_arg_0_5_elem_1(field_arg_0_5_elem_1->ToString());
            auto arg_0_5_elem_1 = std::string(*string_arg_0_5_elem_1);

            auto field_arg_0_5_elem_2 = Nan::Get(arg_0_5_container->Get(arg_0_5_id)->ToObject(), Nan::New<String>("symbol").ToLocalChecked()).ToLocalChecked();
            String::Utf8Value string_arg_0_5_elem_2(field_arg_0_5_elem_2->ToString());
            auto arg_0_5_elem_2 = std::string(*string_arg_0_5_elem_2);

            auto field_arg_0_5_elem_3 = Nan::Get(arg_0_5_container->Get(arg_0_5_id)->ToObject(), Nan::New<String>("code").ToLocalChecked()).ToLocalChecked();
            String::Utf8Value string_arg_0_5_elem_3(field_arg_0_5_elem_3->ToString());
            auto arg_0_5_elem_3 = std::string(*string_arg_0_5_elem_3);

            auto field_arg_0_5_elem_4 = Nan::Get(arg_0_5_container->Get(arg_0_5_id)->ToObject(), Nan::New<String>("numberOfDecimal").ToLocalChecked()).ToLocalChecked();
            auto arg_0_5_elem_4 = Nan::To<int32_t>(field_arg_0_5_elem_4).FromJust();
            CurrencyUnit arg_0_5_elem(arg_0_5_elem_1, arg_0_5_elem_2, arg_0_5_elem_3, arg_0_5_elem_4);

            arg_0_5.emplace_back(arg_0_5_elem);
        }
    }


    auto field_arg_0_6 = Nan::Get(info[0]->ToObject(), Nan::New<String>("bitcoinLikeNetworkParameters").ToLocalChecked()).ToLocalChecked();
    auto arg_0_6 = std::experimental::optional<BitcoinLikeNetworkParameters>();
    if(!field_arg_0_6->IsNull() && !field_arg_0_6->IsUndefined())
    {

        auto field_opt_arg_0_6_1 = Nan::Get(field_arg_0_6->ToObject(), Nan::New<String>("Identifier").ToLocalChecked()).ToLocalChecked();
        String::Utf8Value string_opt_arg_0_6_1(field_opt_arg_0_6_1->ToString());
        auto opt_arg_0_6_1 = std::string(*string_opt_arg_0_6_1);

        auto field_opt_arg_0_6_2 = Nan::Get(field_arg_0_6->ToObject(), Nan::New<String>("P2PKHVersion").ToLocalChecked()).ToLocalChecked();
        vector<uint8_t> opt_arg_0_6_2;
        Local<Array> opt_arg_0_6_2_container = Local<Array>::Cast(field_opt_arg_0_6_2);
        for(uint32_t opt_arg_0_6_2_id = 0; opt_arg_0_6_2_id < opt_arg_0_6_2_container->Length(); opt_arg_0_6_2_id++)
        {
            if(opt_arg_0_6_2_container->Get(opt_arg_0_6_2_id)->IsUint32())
            {
                auto opt_arg_0_6_2_elem = Nan::To<uint32_t>(opt_arg_0_6_2_container->Get(opt_arg_0_6_2_id)).FromJust();
                opt_arg_0_6_2.emplace_back(opt_arg_0_6_2_elem);
            }
        }


        auto field_opt_arg_0_6_3 = Nan::Get(field_arg_0_6->ToObject(), Nan::New<String>("P2SHVersion").ToLocalChecked()).ToLocalChecked();
        vector<uint8_t> opt_arg_0_6_3;
        Local<Array> opt_arg_0_6_3_container = Local<Array>::Cast(field_opt_arg_0_6_3);
        for(uint32_t opt_arg_0_6_3_id = 0; opt_arg_0_6_3_id < opt_arg_0_6_3_container->Length(); opt_arg_0_6_3_id++)
        {
            if(opt_arg_0_6_3_container->Get(opt_arg_0_6_3_id)->IsUint32())
            {
                auto opt_arg_0_6_3_elem = Nan::To<uint32_t>(opt_arg_0_6_3_container->Get(opt_arg_0_6_3_id)).FromJust();
                opt_arg_0_6_3.emplace_back(opt_arg_0_6_3_elem);
            }
        }


        auto field_opt_arg_0_6_4 = Nan::Get(field_arg_0_6->ToObject(), Nan::New<String>("XPUBVersion").ToLocalChecked()).ToLocalChecked();
        vector<uint8_t> opt_arg_0_6_4;
        Local<Array> opt_arg_0_6_4_container = Local<Array>::Cast(field_opt_arg_0_6_4);
        for(uint32_t opt_arg_0_6_4_id = 0; opt_arg_0_6_4_id < opt_arg_0_6_4_container->Length(); opt_arg_0_6_4_id++)
        {
            if(opt_arg_0_6_4_container->Get(opt_arg_0_6_4_id)->IsUint32())
            {
                auto opt_arg_0_6_4_elem = Nan::To<uint32_t>(opt_arg_0_6_4_container->Get(opt_arg_0_6_4_id)).FromJust();
                opt_arg_0_6_4.emplace_back(opt_arg_0_6_4_elem);
            }
        }


        auto field_opt_arg_0_6_5 = Nan::Get(field_arg_0_6->ToObject(), Nan::New<String>("FeePolicy").ToLocalChecked()).ToLocalChecked();
        auto opt_arg_0_6_5 = (ledger::core::api::BitcoinLikeFeePolicy)Nan::To<int>(field_opt_arg_0_6_5).FromJust();

        auto field_opt_arg_0_6_6 = Nan::Get(field_arg_0_6->ToObject(), Nan::New<String>("DustAmount").ToLocalChecked()).ToLocalChecked();
        auto opt_arg_0_6_6 = Nan::To<int64_t>(field_opt_arg_0_6_6).FromJust();

        auto field_opt_arg_0_6_7 = Nan::Get(field_arg_0_6->ToObject(), Nan::New<String>("MessagePrefix").ToLocalChecked()).ToLocalChecked();
        String::Utf8Value string_opt_arg_0_6_7(field_opt_arg_0_6_7->ToString());
        auto opt_arg_0_6_7 = std::string(*string_opt_arg_0_6_7);

        auto field_opt_arg_0_6_8 = Nan::Get(field_arg_0_6->ToObject(), Nan::New<String>("UsesTimestampedTransaction").ToLocalChecked()).ToLocalChecked();
        auto opt_arg_0_6_8 = Nan::To<bool>(field_opt_arg_0_6_8).FromJust();

        auto field_opt_arg_0_6_9 = Nan::Get(field_arg_0_6->ToObject(), Nan::New<String>("TimestampDelay").ToLocalChecked()).ToLocalChecked();
        auto opt_arg_0_6_9 = Nan::To<int64_t>(field_opt_arg_0_6_9).FromJust();

        auto field_opt_arg_0_6_10 = Nan::Get(field_arg_0_6->ToObject(), Nan::New<String>("SigHash").ToLocalChecked()).ToLocalChecked();
        vector<uint8_t> opt_arg_0_6_10;
        Local<Array> opt_arg_0_6_10_container = Local<Array>::Cast(field_opt_arg_0_6_10);
        for(uint32_t opt_arg_0_6_10_id = 0; opt_arg_0_6_10_id < opt_arg_0_6_10_container->Length(); opt_arg_0_6_10_id++)
        {
            if(opt_arg_0_6_10_container->Get(opt_arg_0_6_10_id)->IsUint32())
            {
                auto opt_arg_0_6_10_elem = Nan::To<uint32_t>(opt_arg_0_6_10_container->Get(opt_arg_0_6_10_id)).FromJust();
                opt_arg_0_6_10.emplace_back(opt_arg_0_6_10_elem);
            }
        }


        auto field_opt_arg_0_6_11 = Nan::Get(field_arg_0_6->ToObject(), Nan::New<String>("AdditionalBIPs").ToLocalChecked()).ToLocalChecked();
        vector<std::string> opt_arg_0_6_11;
        Local<Array> opt_arg_0_6_11_container = Local<Array>::Cast(field_opt_arg_0_6_11);
        for(uint32_t opt_arg_0_6_11_id = 0; opt_arg_0_6_11_id < opt_arg_0_6_11_container->Length(); opt_arg_0_6_11_id++)
        {
            if(opt_arg_0_6_11_container->Get(opt_arg_0_6_11_id)->IsString())
            {
                String::Utf8Value string_opt_arg_0_6_11_elem(opt_arg_0_6_11_container->Get(opt_arg_0_6_11_id)->ToString());
                auto opt_arg_0_6_11_elem = std::string(*string_opt_arg_0_6_11_elem);
                opt_arg_0_6_11.emplace_back(opt_arg_0_6_11_elem);
            }
        }

        BitcoinLikeNetworkParameters opt_arg_0_6(opt_arg_0_6_1, opt_arg_0_6_2, opt_arg_0_6_3, opt_arg_0_6_4, opt_arg_0_6_5, opt_arg_0_6_6, opt_arg_0_6_7, opt_arg_0_6_8, opt_arg_0_6_9, opt_arg_0_6_10, opt_arg_0_6_11);

        arg_0_6.emplace(opt_arg_0_6);
    }


    auto field_arg_0_7 = Nan::Get(info[0]->ToObject(), Nan::New<String>("ethereumLikeNetworkParameters").ToLocalChecked()).ToLocalChecked();
    auto arg_0_7 = std::experimental::optional<EthereumLikeNetworkParameters>();
    if(!field_arg_0_7->IsNull() && !field_arg_0_7->IsUndefined())
    {

        auto field_opt_arg_0_7_1 = Nan::Get(field_arg_0_7->ToObject(), Nan::New<String>("Identifier").ToLocalChecked()).ToLocalChecked();
        String::Utf8Value string_opt_arg_0_7_1(field_opt_arg_0_7_1->ToString());
        auto opt_arg_0_7_1 = std::string(*string_opt_arg_0_7_1);

        auto field_opt_arg_0_7_2 = Nan::Get(field_arg_0_7->ToObject(), Nan::New<String>("MessagePrefix").ToLocalChecked()).ToLocalChecked();
        String::Utf8Value string_opt_arg_0_7_2(field_opt_arg_0_7_2->ToString());
        auto opt_arg_0_7_2 = std::string(*string_opt_arg_0_7_2);

        auto field_opt_arg_0_7_3 = Nan::Get(field_arg_0_7->ToObject(), Nan::New<String>("ChainID").ToLocalChecked()).ToLocalChecked();
        String::Utf8Value string_opt_arg_0_7_3(field_opt_arg_0_7_3->ToString());
        auto opt_arg_0_7_3 = std::string(*string_opt_arg_0_7_3);

        auto field_opt_arg_0_7_4 = Nan::Get(field_arg_0_7->ToObject(), Nan::New<String>("XPUBVersion").ToLocalChecked()).ToLocalChecked();
        vector<uint8_t> opt_arg_0_7_4;
        Local<Array> opt_arg_0_7_4_container = Local<Array>::Cast(field_opt_arg_0_7_4);
        for(uint32_t opt_arg_0_7_4_id = 0; opt_arg_0_7_4_id < opt_arg_0_7_4_container->Length(); opt_arg_0_7_4_id++)
        {
            if(opt_arg_0_7_4_container->Get(opt_arg_0_7_4_id)->IsUint32())
            {
                auto opt_arg_0_7_4_elem = Nan::To<uint32_t>(opt_arg_0_7_4_container->Get(opt_arg_0_7_4_id)).FromJust();
                opt_arg_0_7_4.emplace_back(opt_arg_0_7_4_elem);
            }
        }


        auto field_opt_arg_0_7_5 = Nan::Get(field_arg_0_7->ToObject(), Nan::New<String>("AdditionalEIPs").ToLocalChecked()).ToLocalChecked();
        vector<std::string> opt_arg_0_7_5;
        Local<Array> opt_arg_0_7_5_container = Local<Array>::Cast(field_opt_arg_0_7_5);
        for(uint32_t opt_arg_0_7_5_id = 0; opt_arg_0_7_5_id < opt_arg_0_7_5_container->Length(); opt_arg_0_7_5_id++)
        {
            if(opt_arg_0_7_5_container->Get(opt_arg_0_7_5_id)->IsString())
            {
                String::Utf8Value string_opt_arg_0_7_5_elem(opt_arg_0_7_5_container->Get(opt_arg_0_7_5_id)->ToString());
                auto opt_arg_0_7_5_elem = std::string(*string_opt_arg_0_7_5_elem);
                opt_arg_0_7_5.emplace_back(opt_arg_0_7_5_elem);
            }
        }


        auto field_opt_arg_0_7_6 = Nan::Get(field_arg_0_7->ToObject(), Nan::New<String>("TimestampDelay").ToLocalChecked()).ToLocalChecked();
        auto opt_arg_0_7_6 = Nan::To<int64_t>(field_opt_arg_0_7_6).FromJust();
        EthereumLikeNetworkParameters opt_arg_0_7(opt_arg_0_7_1, opt_arg_0_7_2, opt_arg_0_7_3, opt_arg_0_7_4, opt_arg_0_7_5, opt_arg_0_7_6);

        arg_0_7.emplace(opt_arg_0_7);
    }

    Currency arg_0(arg_0_1, arg_0_2, arg_0_3, arg_0_4, arg_0_5, arg_0_6, arg_0_7);

    vector<uint8_t> arg_1;
    Local<Array> arg_1_container = Local<Array>::Cast(info[1]);
    for(uint32_t arg_1_id = 0; arg_1_id < arg_1_container->Length(); arg_1_id++)
    {
        if(arg_1_container->Get(arg_1_id)->IsUint32())
        {
            auto arg_1_elem = Nan::To<uint32_t>(arg_1_container->Get(arg_1_id)).FromJust();
            arg_1.emplace_back(arg_1_elem);
        }
    }


    auto result = EthereumLikeTransactionBuilder::parseRawSignedTransaction(arg_0,arg_1);

    //Wrap result in node object
    auto arg_2 = NJSEthereumLikeTransaction::wrap(result);


    //Return result
    info.GetReturnValue().Set(arg_2);
}

NAN_METHOD(NJSEthereumLikeTransactionBuilder::New) {
    //Only new allowed
    if(!info.IsConstructCall())
    {
        return Nan::ThrowError("NJSEthereumLikeTransactionBuilder function can only be called as constructor (use New)");
    }
    info.GetReturnValue().Set(info.This());
}


Nan::Persistent<ObjectTemplate> NJSEthereumLikeTransactionBuilder::EthereumLikeTransactionBuilder_prototype;

Local<Object> NJSEthereumLikeTransactionBuilder::wrap(const std::shared_ptr<ledger::core::api::EthereumLikeTransactionBuilder> &object) {
    Nan::EscapableHandleScope scope;
    Local<ObjectTemplate> local_prototype = Nan::New(EthereumLikeTransactionBuilder_prototype);

    Local<Object> obj;
    if(!local_prototype.IsEmpty())
    {
        obj = local_prototype->NewInstance();
        djinni::js::ObjectWrapper<ledger::core::api::EthereumLikeTransactionBuilder>::Wrap(object, obj);
    }
    else
    {
        Nan::ThrowError("NJSEthereumLikeTransactionBuilder::wrap: object template not valid");
    }
    return scope.Escape(obj);
}

NAN_METHOD(NJSEthereumLikeTransactionBuilder::isNull) {
    auto cpp_implementation = djinni::js::ObjectWrapper<EthereumLikeTransactionBuilder>::Unwrap(info.This());
    auto isNull = !cpp_implementation ? true : false;
    return info.GetReturnValue().Set(Nan::New<Boolean>(isNull));
}

void NJSEthereumLikeTransactionBuilder::Initialize(Local<Object> target) {
    Nan::HandleScope scope;

    Local<FunctionTemplate> func_template = Nan::New<FunctionTemplate>(NJSEthereumLikeTransactionBuilder::New);
    Local<ObjectTemplate> objectTemplate = func_template->InstanceTemplate();
    objectTemplate->SetInternalFieldCount(1);

    func_template->SetClassName(Nan::New<String>("NJSEthereumLikeTransactionBuilder").ToLocalChecked());

    //SetPrototypeMethod all methods
    Nan::SetPrototypeMethod(func_template,"sendToAddress", sendToAddress);
    Nan::SetPrototypeMethod(func_template,"wipeToAddress", wipeToAddress);
    Nan::SetPrototypeMethod(func_template,"setGasPrice", setGasPrice);
    Nan::SetPrototypeMethod(func_template,"setGasLimit", setGasLimit);
    Nan::SetPrototypeMethod(func_template,"setInputData", setInputData);
    Nan::SetPrototypeMethod(func_template,"build", build);
    Nan::SetPrototypeMethod(func_template,"clone", clone);
    Nan::SetPrototypeMethod(func_template,"reset", reset);
    Nan::SetPrototypeMethod(func_template,"parseRawUnsignedTransaction", parseRawUnsignedTransaction);
    Nan::SetPrototypeMethod(func_template,"parseRawSignedTransaction", parseRawSignedTransaction);
    Nan::SetPrototypeMethod(func_template,"isNull", isNull);
    //Set object prototype
    EthereumLikeTransactionBuilder_prototype.Reset(objectTemplate);

    //Add template to target
    target->Set(Nan::New<String>("NJSEthereumLikeTransactionBuilder").ToLocalChecked(), func_template->GetFunction());
}
