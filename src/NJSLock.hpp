// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from thread_dispatcher.djinni

#ifndef DJINNI_GENERATED_NJSLOCK_HPP
#define DJINNI_GENERATED_NJSLOCK_HPP


#include <nan.h>
#include <node.h>
#include "../include/Lock.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSLock: public ledger::core::api::Lock {
public:

    static void Initialize(Local<Object> target);

    static Local<Object> wrap(const std::shared_ptr<ledger::core::api::Lock> &object);
    static Nan::Persistent<ObjectTemplate> Lock_prototype;
    ~NJSLock()
    {
        njs_impl.Reset();
    };
    NJSLock(Local<Object> njs_implementation){njs_impl.Reset(njs_implementation);};

    /**
     *Acquire lock by thread calling this method,
     *If Lock already acquired by another thread, execution of calling thread should be blocked
     *until the other thread call the unlock method
     */
    void lock();

    /**
     *Try to acquire lock
     *If Lock already aquired by another thread, method returns false for calling thread
     *without blocking its execution
     *@return bool, return true if Lock acquire by calling thread, false otherwise
     */
    bool tryLock();

    /**Release Lock ownership by calling thread */
    void unlock();

private:
    /**
     *Acquire lock by thread calling this method,
     *If Lock already acquired by another thread, execution of calling thread should be blocked
     *until the other thread call the unlock method
     */
    static NAN_METHOD(lock);

    /**
     *Try to acquire lock
     *If Lock already aquired by another thread, method returns false for calling thread
     *without blocking its execution
     *@return bool, return true if Lock acquire by calling thread, false otherwise
     */
    static NAN_METHOD(tryLock);

    /**Release Lock ownership by calling thread */
    static NAN_METHOD(unlock);

    static NAN_METHOD(New);

    Nan::Persistent<Object> njs_impl;
};
#endif //DJINNI_GENERATED_NJSLOCK_HPP
