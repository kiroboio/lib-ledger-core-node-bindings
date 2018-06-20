module.exports = Object.assign({}, require('bindings')('ledger-core-node'), {
  METHODS: {
    '0': 'GET',
    '1': 'POST',
    '2': 'PUT',
    '3': 'DELETE',
  },
  EVENT_CODE: {
    UNDEFINED: 0,
    NEW_OPERATION: 1,
    NEW_BLOCK: 2,
    SYNCHRONIZATION_STARTED: 3,
    SYNCHRONIZATION_FAILED: 4,
    SYNCHRONIZATION_SUCCEED: 5,
    SYNCHRONIZATION_SUCCEED_ON_PREVIOUSLY_EMPTY_ACCOUNT: 6,
  },
  ERROR_CODE: {
    /**
     * Pool errors
     *unknown_network_parameters;
     * Crypto errors
     */
    EC_PRIV_KEY_INVALID_FORMAT: 0,
    EC_PUB_KEY_INVALID: 1,
    EC_DER_SIGNATURE_INVALID: 2,
    EC_SIGN_FAILED: 3,
    /**
     * Device errors
     * Wallet errors
     */
    WALLET_NOT_FOUND: 4,
    WALLET_ALREADY_EXISTS: 5,
    RAW_TRANSACTION_NOT_FOUND: 6,
    /** Account errors */
    ACCOUNT_ALREADY_EXISTS: 7,
    ACCOUNT_NOT_FOUND: 8,
    MISSING_DERIVATION: 9,
    /** Block error */
    BLOCK_NOT_FOUND: 10,
    /** User land errors */
    CANCELLED_BY_USER: 11,
    UNSUPPORTED_CURRENCY: 12,
    CURRENCY_ALREADY_EXISTS: 13,
    CURRENCY_NOT_FOUND: 14,
    CURRENCY_UNIT_NOT_FOUND: 15,
    /** Others */
    INVALID_BASE58_FORMAT: 16,
    INVALID_CHECKSUM: 17,
    INVALID_VERSION: 18,
    /** DeterministicPublicKey */
    PRIVATE_DERIVATION_NOT_SUPPORTED: 19,
    /** Bitcoin error */
    INVALID_NETWORK_ADDRESS_VERSION: 20,
    INCOMPLETE_TRANSACTION: 21,
    /** Generic */
    RUNTIME_ERROR: 22,
    OUT_OF_RANGE: 23,
    ILLEGAL_ARGUMENT: 24,
    INVALID_ARGUMENT: 25,
    ILLEGAL_STATE: 26,
    NULL_POINTER: 27,
    UNSUPPORTED_OPERATION: 28,
    UNKNOWN: 29,
    IMPLEMENTATION_IS_MISSING: 30,
    FUTURE_WAS_SUCCESSFULL: 31,
    ALREADY_COMPLETED: 32,
    NO_SUCH_ELEMENT: 33,
    /** Preferences Error */
    UNABLE_TO_OPEN_LEVELDB: 34,
    /** Network errors */
    NO_INTERNET_CONNECTIVITY: 35,
    UNABLE_TO_RESOLVE_HOST: 36,
    UNABLE_TO_CONNECT_TO_HOST: 37,
    HTTP_ERROR: 38,
    SSL_ERROR: 39,
    TOO_MANY_REDIRECT: 40,
    AUTHENTICATION_REQUIRED: 41,
    HTTP_TIMEOUT: 42,
    PROXY_ERROR: 43,
    /** API errors */
    API_ERROR: 44,
    TRANSACTION_NOT_FOUND: 45,
    /** Format */
    INVALID_DATE_FORMAT: 46,
    INVALID_DERIVATION_SCHEME: 47,
    /** Wallet building errors */
    UNKNOWN_KEYCHAIN_ENGINE: 48,
    UNKNOWN_BLOCKCHAIN_EXPLORER_ENGINE: 49,
    UNKNOWN_BLOCKCHAIN_OBSERVER_ENGINE: 50,
    UNKNOWN_SYNCHRONIZATION_ENGINE: 51,
    /** Wallet transaction */
    NOT_ENOUGH_FUNDS: 52,
    /** Bad cast */
    BAD_CAST: 53,
    /** Query build */
    LINK_NON_TAIL_FILTER: 54,
  },
  SIGHASH_TYPES: {
    SIGHASH_ALL: 1,
    SIGHASH_NONE: 2,
    SIGHASH_SINGLE: 3,
    SIGHASH_FORKID: 0x40,
    SIGHASH_ANYONECANPAY: 0x80,
  },

  TIME_PERIODS: {
    DAY: 0,
    WEEK: 1,
    MONTH: 2,
  },
  OPERATION_TYPES: {
    SEND: 0,
    RECEIVE: 1,
  },
})
