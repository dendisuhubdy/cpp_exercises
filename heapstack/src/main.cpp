#include <iostream>


auto main(int argc, char** argv) -> int {
    // Stack object are automatically destroyed
    int a = 100;
    {
        int a = 102;
        // a is allocated on the stack
        std::cout << a << "\n";
        // a is then called to print, then destoyed
    }
    // The closing parenthesis marks the completion of the scope
    std::cout << a << "\n";
    return 0;
}
