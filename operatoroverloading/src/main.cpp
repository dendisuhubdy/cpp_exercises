#include <iostream>
#include <unordered_map>
#include <array>
#include <string>
#include <set>
#include <vector>

// Create a matrix class
// - Overload the operator *
// - Overload the operator +
// - Overload the operator -

class Matrix {
    public:
        std::vector<std::vector<float>> matrixElements_;

    //public:
        // hidden friend

    // Constructor
    Matrix(std::vector<std::vector<float>> initializedMatrixElements): matrixElements_{initializedMatrixElements}{}
    friend Matrix& operator+(Matrix& lhs, Matrix rhs);
    friend Matrix& operator-(Matrix& lhs, Matrix& rhs);
    friend Matrix& operator*(Matrix& lhs, Matrix& rhs);
};

Matrix& operator+(Matrix& lhs, Matrix rhs){
    // matrixElements_ is a vector of a vector
    // here we need to access the elements 
    // so better to use the C-styled loops
    for (int x = 0; x < rhs.matrixElements_.size(); ++x) {
        for (int y = 0; y < rhs.matrixElements_[x].size(); ++y) {
            lhs.matrixElements_[x][y] += rhs.matrixElements_[x][y];
        }
    }
    return lhs;
}

Matrix& operator-(Matrix& lhs, Matrix& rhs){
    for (int x = 0; x < rhs.matrixElements_.size(); ++x) {
        for (int y = 0; y < rhs.matrixElements_[x].size(); ++y) {
            lhs.matrixElements_[x][y] -= rhs.matrixElements_[x][y];
        }
    } 
    return lhs;
}

Matrix& operator*(Matrix& lhs, Matrix& rhs){

}

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

auto foo() -> void {
    std::vector<std::vector<float>> m1Elements{{1, 2}, {1, 2}};
    std::vector<std::vector<float>> m2Elements{{1, 2}, {1, 2}};

    Matrix m1(m1Elements);
    Matrix m2(m2Elements);

    auto m3 = m1 + m2;

    for (auto& x: m3.matrixElements_){
        for (auto& y: x) {
            std::cout << y << "\n";
        }
    }

}


auto main() -> int {
    foo();
    //goo();
}
