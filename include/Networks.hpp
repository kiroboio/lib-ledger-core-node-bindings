// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from networks.djinni

#ifndef DJINNI_GENERATED_NETWORKS_HPP
#define DJINNI_GENERATED_NETWORKS_HPP
#ifndef LIBCORE_EXPORT
    #if defined(_MSC_VER) && _MSC_VER <= 1900
       #include <libcore_export.h>
    #else
       #define LIBCORE_EXPORT
    #endif
#endif

namespace ledger { namespace core { namespace api {

struct BitcoinLikeNetworkParameters;
struct EthereumLikeNetworkParameters;

class LIBCORE_EXPORT Networks {
public:
    virtual ~Networks() {}

    static BitcoinLikeNetworkParameters bitcoin();

    static EthereumLikeNetworkParameters ethereum();
};

} } }  // namespace ledger::core::api
#endif //DJINNI_GENERATED_NETWORKS_HPP
