// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#ifndef DJINNI_GENERATED_STRINGCALLBACK_HPP
#define DJINNI_GENERATED_STRINGCALLBACK_HPP

#include "../utils/optional.hpp"
#include <string>
#ifndef LIBCORE_EXPORT
    #if defined(_MSC_VER) && _MSC_VER <= 1900
       #include <libcore_export.h>
    #else
       #define LIBCORE_EXPORT
    #endif
#endif

namespace ledger { namespace core { namespace api {

struct Error;

/**
 *Callback triggered by main completed task,
 *returns optional result of template type T
 */
class StringCallback {
public:
    virtual ~StringCallback() {}

    /**
     * Method triggered when main task complete
     * @params result optional of type T, non null if main task failed
     * @params error optional of type Error, non null if main task succeeded
     */
    virtual void onCallback(const std::experimental::optional<std::string> & result, const std::experimental::optional<Error> & error) = 0;
};

} } }  // namespace ledger::core::api
#endif //DJINNI_GENERATED_STRINGCALLBACK_HPP
