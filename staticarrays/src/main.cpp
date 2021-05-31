#include <iostream>
#include <unordered_map>
#include <array>
#include <string>
#include <set>

// Type aliasing
using Emails = std::string;
using Price = std::uint64_t;

// ADL argument Deduction lookup

auto foo() -> void {
    // R, G, B
    std::array<int, 3> staticArr { 1, 0, 1 };
    // transitive include
    std::array<std::string, 3> colors{"RED", "GREEN", "BLUE"};

    std::cout << colors[0] << "\n";

    std::set<Emails> emails;
    auto i = emails.insert("sdmg15@bitwyre.com");
    auto v = emails.insert("sdmg15@bitwyre.com");

    std::set<int> intSet;
    intSet.insert(1);
    intSet.insert(1);
    intSet.insert(1);

    std::cout << intSet.size() << "\n";

    std::cout << (i.first == v.first) << "\n";
}

auto main() -> int {
    foo();
}
