#pragma once

#include <vector>
#include <cstddef>
#include <cstdint>

namespace crypto {

    using Byte = uint8_t;
    using ByteArray = std::vector<Byte>;
    using PermutationTable = std::vector<size_t>;

    enum class BitIndexing { // правила индексирования битов
        LSB_to_MSB,
        MSB_to_LSB
    };

    enum class StartBit { // стартовы бит
        Zero,
        One
    };

    enum class CipherMode { // режимы шифрофания
        ECB,
        CBC,
        PCBC,
        CFB,
        OFB,
        CTR,
        RandomDelta
    };

    enum class PaddingMode { // режимы набивки
        Zeros,
        ANSI_X923,
        PKCS7,
        ISO_10126
    };

}