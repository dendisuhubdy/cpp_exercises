#include <algorithm>
#include <iostream>
#include <string>

auto main() -> int
{
    auto i{0x01B99644};
    std::string x{"DFaeeillnor"};
    while (i--) {
        std::next_permutation(x.begin(), x.end());
    }
    std::cout << x << "\n";
    return 0;
}
