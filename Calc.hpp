#pragma once
#include <vector>

struct Calculator
{
    using Numbers = std::vector<int>;
    auto converDecToBin(const Numbers &) -> void;
    auto convertBinToDec(const std::vector<std::string> &);

    template <typename Binary, typename Decimals>
    static auto printBinToDec(const Binary &binary, const Decimals &decimals) -> void
    {

        for (int i = 0; i < binary.size(); i++)
        {
            std::cout << "Binary: " << binary[i] << "\t in decimal: " << decimals[i] << '\n';
        }
    }
};