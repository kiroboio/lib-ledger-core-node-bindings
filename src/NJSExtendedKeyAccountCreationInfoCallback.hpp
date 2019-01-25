// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#ifndef DJINNI_GENERATED_NJSEXTENDEDKEYACCOUNTCREATIONINFOCALLBACK_HPP
#define DJINNI_GENERATED_NJSEXTENDEDKEYACCOUNTCREATIONINFOCALLBACK_HPP


#include "../include/../utils/optional.hpp"
#include "../include/Error.hpp"
#include "../include/ExtendedKeyAccountCreationInfo.hpp"
#include <string>

#include <nan.h>
#include <node.h>
#include "../include/ExtendedKeyAccountCreationInfoCallback.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSExtendedKeyAccountCreationInfoCallback: public ledger::core::api::ExtendedKeyAccountCreationInfoCallback {
public:

    static void Initialize(Local<Object> target);

    static Local<Object> wrap(const std::shared_ptr<ledger::core::api::ExtendedKeyAccountCreationInfoCallback> &object);
    static Nan::Persistent<ObjectTemplate> ExtendedKeyAccountCreationInfoCallback_prototype;
    ~NJSExtendedKeyAccountCreationInfoCallback()
    {
        pers_resolver.Reset();
    };
    NJSExtendedKeyAccountCreationInfoCallback(Local<Promise::Resolver> resolver){pers_resolver.Reset(resolver);};

    /**
     * Method triggered when main task complete
     * @params result optional of type T, non null if main task failed
     * @params error optional of type Error, non null if main task succeeded
     */
    void onCallback(const std::experimental::optional<ExtendedKeyAccountCreationInfo> & result, const std::experimental::optional<Error> & error);

private:
    /**
     * Method triggered when main task complete
     * @params result optional of type T, non null if main task failed
     * @params error optional of type Error, non null if main task succeeded
     */
    static NAN_METHOD(onCallback);

    static NAN_METHOD(New);

    Nan::Persistent<Promise::Resolver> pers_resolver;
};
#endif //DJINNI_GENERATED_NJSEXTENDEDKEYACCOUNTCREATIONINFOCALLBACK_HPP
