#include <iostream>
#include <unordered_map>
#include <array>
#include <string>
#include <set>

// Type aliasing
using Emails = std::string;
using Price = std::uint64_t;

// ADL argument Deduction lookup

class ComplexNumber {
    private:
        int real_;
        int imaginary_;

    public:
    //ComplexNumber& operator+(ComplexNumber& rhs){
        //real_ += rhs.real_;
        //return *this;
    //}
    
    ComplexNumber(int real, int imag): real_{real}, imaginary_{imag}{}
    friend ComplexNumber operator+(ComplexNumber& lhs, ComplexNumber & rhs);
};

// There are two places where we can implement operator overloading
// - Inside the class: when it's modifying the lhs
// - Outside the class: when it does not modify the lhs
ComplexNumber operator+(ComplexNumber& lhs, ComplexNumber &rhs) {
    return ComplexNumber(lhs.real_ + rhs.real_, lhs.imaginary_ + rhs.imaginary_);
}


auto goo() -> void {
    ComplexNumber c1(1, 2);
    ComplexNumber c2(3, 4);

    ComplexNumber r = c1 + c2;
    // ComplexNumber r = operator+(c1, c2);
}


auto main() -> int {
    goo();
}
