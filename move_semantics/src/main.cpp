#include <iostream>
#include <vector>
#include <string>
#include <utility>

auto foo2() -> void {
    std::string something = "hello";
        
    // rvalue casting
    // the object myString is no longer needed please steal its memory
    std::cout << something << "\n";
    std::string new_something = std::move(something);
    std::cout << something << "\n" << new_something << "\n";
}

auto foo() -> void {
    std::string myString = "Hello this is a long string so SSO cannot optimize it"; // SSO
    std::printf("%p \n", myString.c_str());
    std::string newStr = std::move(myString);
    std::printf("%p \n", newStr.c_str());
    std::cout << myString << "\n" << newStr << "\n";
}

auto main() -> int {
    foo2();
    foo();
}
