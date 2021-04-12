#include <iostream>

auto foo(float a, float b) -> float {
    // Trailing return type
    float c = a + b;
    // The compiler will deduce the type of c
    // to be integer
    return c;
}

auto main(int argc, char** argv) -> int {
    // narrowing conversion
    auto b = 3.2f;
    // without suffix literal f, the default type would be double
    // but with the suffix literal f, it would be defined as float
    // during compile time this is changed to 3 instead of 3.2
    auto a = 2.0f;
    std::clog << foo(a, b) << std::endl;
    return 0;
}
