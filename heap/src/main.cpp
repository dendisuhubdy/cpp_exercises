#include <iostream>
#include <vector>


int square(int num) {
    return num * num;
}

// Stack and heap allocation
// Object lifetime
// Prefer nullptr to 0 or NULL
// Distinguish between () (Parent Init) and {} (Braced Init, Uniform Init) for initialization

auto foo() -> int {
    // Stack object are automatically destroyed
    int a = 100;
    int *aheap = new int(400); // maloc(sizeof(int))

    std::cout << "\nHeap allocated var:" << *aheap << "\n";
    {
        int a = 102;
        // a is allocated on the stack
        std::cout << a << "\n";
        // a is then called to print, then destoyed
        std::cout << "\nHeap allocated var:" << *aheap << "\n";
        *aheap = 500;
    }
    std::cout << "\nHeap allocated var:" << *aheap << "\n";
    // The closing parenthesis marks the completion of the scope
    std::cout << a << "\n";
    delete aheap;
    return 0;
}

void print(const std::vector<int>& v) {
    for(auto e: v) {
        std::cout << e << "\n";
    }
}

auto initialization() -> int {
    // this is called parentheses initialization
    std::vector<int> parentheses_initialization(2, 10);
    print(parentheses_initialization);
    std::vector<int> uniform_initialization{2, 10};
    print(uniform_initialization);
    // this is called uniform initialization
    // { } most vexing parser safe
    // { } prevents narrowing conversion
    // what it means is that if you do
    int getName(3.4); // this is ok
    // int getName{3.4}; // this is not ok
    // { } also defaults the vaues, call the constructor for user defined types 
    int vold;
    std::cout << vold << "\n";
    int test = 0; // copy assignment initialization
    std::cout << test << "\n";
}

auto main(int argc, char** argv) -> int {
    int* height = new int;
    if (height == nullptr){
        std::cout << "Memory full \n";
    }
    return 0;
}
