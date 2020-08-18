#include <iostream>
#include <vector>
#include <limits>


using quantity_t = unsigned int;
using length_t = unsigned int;
using table_lengths_t = std::vector<length_t>;
using table_quantity_t = std::vector<quantity_t>;

const quantity_t INFINITE = std::numeric_limits<quantity_t>::max();


quantity_t blocks_used(length_t statueLength, table_lengths_t tableBlocksLengths) {
    table_quantity_t tableBlocksUsed(statueLength + 1, INFINITE);
    tableBlocksUsed[0] = 0;

    for(length_t length = 1; length <= statueLength; ++length) {
        for(auto itBlockLength = tableBlocksLengths.begin();
            itBlockLength != tableBlocksUsed.end() && *itBlockLength <= length;
            ++itBlockLength) {
                auto lengthRemainder = length - *itBlockLength;
                auto blocksUsedCandidate = tableBlocksUsed[lengthRemainder] + 1;
                if(blocksUsedCandidate < tableBlocksUsed[length])
                    tableBlocksUsed[length] = blocksUsedCandidate;
            }
        }

    return *tableBlocksUsed.rbegin();
}

int main() {
    size_t casesQuantity;
    std::cin >> casesQuantity;
    for(size_t c = 0; c < casesQuantity; ++c) {
        quantity_t blocksQuantity;
        length_t statueLength;
        std::cin >> blocksQuantity >> statueLength;

        table_lengths_t tableBlocksLengths;
        tableBlocksLengths.reserve(blocksQuantity);
        for(quantity_t b = 0; b < blocksQuantity; ++b) {
            length_t blockLength;
            std::cin >> blockLength;
            tableBlocksLengths.push_back(blockLength);
        }

        std::cout << blocks_used(statueLength, tableBlocksLengths)
                  << std::endl;
    }

    return 0;
}
