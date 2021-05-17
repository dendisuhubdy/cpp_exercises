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
    value.reserve(5);

    std::cout << "Size is " << value.size() << "\n";
    std::cout << "Capacity is " << value.capacity() << "\n";

    std::cout << "Elements of value are, by copy:" << "\n";

    for (auto e: value) {
        std::cout << e << "\n";
    }

    std::cout << "Elements of value are, by reference:" << "\n";

    // auto& e == auto & e == auto &e

    for (auto &e: value) {
        std::cout << e << "\n";
    }

    std::cout << "With iterators \n";
    std::vector<int>::iterator it = value.begin();
    for (; it != value.end(); ++it) {
        std::cout << *it << "\n";
    }

    value.push_back(10);
    value.push_back(10);
    value.push_back(10);
    value.push_back(10);
    value.push_back(10);
    value.front();
    value.back();
    
    // So erase always takes the iterator as a parameter
    value.erase( value.begin() + 1);
    
    std::cout << "Size is " << value.size() << "\n";
    std::cout << "Capacity is " << value.capacity() << "\n";
}

auto main() -> int {
    foo();
}
