#pragma once

#include "types.h"
#include <vector>

namespace crypto {

    class BitOperations {

    public:

        BitOperations() = delete;
         
        ~BitOperations() = delete;

        static ByteArray permutateBits(
            const ByteArray& array,
            const PermutationTable& table,
            BitIndexing indexing = BitIndexing::LSB_to_MSB,
            StartBit start = StartBit::Zero
        ); // Перестановка битов в массиве байтов (P-блок)

        static Byte setBit(Byte value, size_t bitPosition, bool bitValue, BitIndexing indexing = BitIndexing::LSB_to_MSB); // Установление значения бита в байте

        static bool getBit(Byte value, size_t bitPosition, BitIndexing indexing = BitIndexing::LSB_to_MSB); // Получение бита из байта

        static Byte rotateLeft(Byte value, size_t shift); // Циклический сдвиг влево

        static Byte rotateRight(Byte value, size_t shift); // Циклический сдвиг вправо

    private:

        static size_t normalizeBitPosition(size_t position, size_t total_bits, BitIndexing indexing, StartBit start); // Преобразование внешнего индекса бита во внутреннее представление

    };

}