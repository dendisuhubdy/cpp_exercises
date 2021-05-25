#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <list>
#include <map>
#include <unordered_map>

class map {
    class iterator {
    
    
    };
};

auto foo() -> void {
    // <k, v>
    auto customComp = [](const std::string& lhs, const std::string& rhs){
        return lhs.size() < rhs.size();
    };
    //std::map<std::string, int, std::less<>> qtyMultiplier;
    std::map<std::string, int, customComp> qtyMultiplier;

    qtyMultiplier.insert(std::make_pair<std::string, int>("BTC_USD", 10'000'000));

    // another way
    qtyMultiplier["BTC_USDT"] = 1'000'000;

    for(auto& [k, v]: qtyMultiplier) {
        std::cout << k << " = " << v << "\n";
    }
}

auto main() -> int {
    foo();
}
