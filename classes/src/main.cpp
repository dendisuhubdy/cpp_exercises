#include <iostream>

// OOP
struct Person {
    std::string name_;
    // std::string m_name;
    int age_;
    // Special member function
    // there is a default. the compiler generates it
    // sometimes the compiler does not generate it
    // and you need to define it yourself
    // Person() {} -> this is fine
    Person() = default;
    Person(std::string name, int age): name_{name}, age_{age}{
        // list initialization
    }
    // Overloading the constructor
    Person(std::string name): name_{name}, age_{100}{}

    // - Copy Constructor
    Person(const Person& copy) {
        name_ = copy.name_;
        age_ = copy.age_ * 10;
    }
    // - Copy Assignment
    Person& operator=(const Person& copy){
        name_ = copy.name_;
        age_ = copy.age_ / 5;
        return *this;
    }
    // - Move constructor // Introduced in C++11 with move semantics
    Person(Person&& movedPerson){
        name_ = std::move(movedPerson.name_);
        age_ = movedPerson.age_;
    }
    // - Move Assignment // Introduced in C++11 with move semantics
    // - Destructor
    ~Person() {
    }
};

class Animal {
    std::string name_;
    int height_;
};

auto main(int argc, char** argv) -> int {
    //Person p("bob"); // alocating the struct on 
    //Person p2(p); // Calls the copy constructor
    //p2 = p; // Calls the copy assignment
    //std::cout << p2.age_ << "\n";
    std::string name = "this is my name";
    std::cout << &name << "\n";
    std::string movedName = std::move(name);
    std::cout << &movedName << "\n";
    std::cout << movedName << "\n";
    // moved from state it's still in a valid but unspecified state
}
