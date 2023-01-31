#include <iostream>
#include <bitset>
#include <vector>
#include <string>
#include <sstream>
#include <fmt/core.h>
#include <iomanip>

auto converNumberToDec(std::vector<int> numbers) -> void
{
    for (const auto &el : numbers)
    {
        std::bitset<8> binary(el);
        std::cout << el << " binary: " << binary << '\n';
    }
}

// auto printBinaryIps(const std::vector<std::string>& ip_addresses) -> void {
//     std::vector<std::bitset<8>> binary_ips;

//     for (const std::string& ip : ip_addresses) {
//         std::stringstream ss(ip);
//         std::string item;
//         while (std::getline(ss, item, '.')) {
//             int decimal = std::stoi(item);
//             binary_ips.push_back(std::bitset<8>(decimal));
//         }
//     }

//     std::cout << "Adresy IP w formacie binarnym:" << std::endl;
//    for (std::vector<std::bitset<8>>::iterator it = binary_ips.begin(); it != binary_ips.end(); ++it) {
//         std::cout << std::setfill('0') << std::setw(8) << *it;
//         if (std::distance(it, binary_ips.end()) != 1) {
//             std::cout << ".";
//         }
//         if (std::distance(it, binary_ips.end()) == 1) {
//             std::cout << std::endl;
//         }
//     }
// }

auto printBinaryIps(const std::vector<std::string> &ip_addresses) -> void
{
    for (const std::string &ip : ip_addresses)
    {
        std::stringstream ss(ip);
        std::string item{};
        std::cout << ip << " : ";
        bool is_first = true;
        while (std::getline(ss, item, '.'))
        {
            if (!is_first)
                std::cout << '.';
            is_first = false;
            std::cout << fmt::format("{:b}", std::stoi(item));
        }
        std::cout << std::endl;
    }
}

int main()
{
    std::vector<std::string> ip_addresses = {"172.16.0.0", "192.168.10.10 ",
                                             "255.255.255.0",
                                             "192.168.10.0",
                                             "192.168.68.210 ",
                                             "255.255.255.128",
                                             "192.168.68.128",
                                             "172.16.188.15 ",
                                             "255.255.240.0",
                                             "172.16.176.0",
                                             "10.172.2.8 ",
                                             "255.224.0.0 ",
                                             "10.160.0.0",
                                             "27"

    };

    printBinaryIps(ip_addresses);
    // std::vector<int> input{168, 10, 255, 2};
    // converNumberToDec(input);
    return 0;
}

/*
Todo: Make this app in qt :)
*/