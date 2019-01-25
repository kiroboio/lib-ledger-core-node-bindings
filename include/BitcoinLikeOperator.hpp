// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from bitcoin_script.djinni

#ifndef DJINNI_GENERATED_BITCOINLIKEOPERATOR_HPP
#define DJINNI_GENERATED_BITCOINLIKEOPERATOR_HPP

#include <cstdint>
#include <iostream>
#include <string>
#include <utility>
#ifndef LIBCORE_EXPORT
    #if defined(_MSC_VER) && _MSC_VER <= 1900
       #include <libcore_export.h>
    #else
       #define LIBCORE_EXPORT
    #endif
#endif

namespace ledger { namespace core { namespace api {

struct BitcoinLikeOperator final {
    std::string operatorName;
    int8_t value;

    BitcoinLikeOperator(std::string operatorName_,
                        int8_t value_)
    : operatorName(std::move(operatorName_))
    , value(std::move(value_))
    {}

    BitcoinLikeOperator(const BitcoinLikeOperator& cpy) {
       this->operatorName = cpy.operatorName;
       this->value = cpy.value;
    }

    BitcoinLikeOperator() = default;


    BitcoinLikeOperator& operator=(const BitcoinLikeOperator& cpy) {
       this->operatorName = cpy.operatorName;
       this->value = cpy.value;
       return *this;
    }

    template <class Archive>
    void load(Archive& archive) {
        archive(operatorName, value);
    }

    template <class Archive>
    void save(Archive& archive) const {
        archive(operatorName, value);
    }
};

} } }  // namespace ledger::core::api
#endif //DJINNI_GENERATED_BITCOINLIKEOPERATOR_HPP
