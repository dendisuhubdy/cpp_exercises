#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <list>
#include <map>
#include <unordered_map>

auto foo() -> void {
    // Capacity
    // Size
    std::vector<int> value{1, 3, 4};
    value.reserve(10);

    std::cout << value.size() << "\n";
    std::cout << value.capacity() << "\n";
}

auto main() -> int {
    foo();
}
