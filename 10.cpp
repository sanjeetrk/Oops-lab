#include <iostream>

class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

    // Overloading binary addition operator
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    // Overloading binary subtraction operator
    Complex operator-(const Complex& other) const {
        return Complex(real - other.real, imag - other.imag);
    }

    // Overloading binary multiplication operator
    Complex operator*(const Complex& other) const {
        return Complex(real * other.real - imag * other.imag, real * other.imag + imag * other.real);
    }

    // Overloading binary division operator
    Complex operator/(const Complex& other) const {
        double denominator = other.real * other.real + other.imag * other.imag;
        return Complex((real * other.real + imag * other.imag) / denominator,
                       (imag * other.real - real * other.imag) / denominator);
    }

    // Function to display the complex number
    void display() const {
        std::cout << "(" << real << " + " << imag << "i)" << std::endl;
    }
};

int main() {
    Complex c1(2.0, 3.0);
    Complex c2(1.0, -1.0);

    Complex sum = c1 + c2;
    Complex diff = c1 - c2;
    Complex prod = c1 * c2;
    Complex quot = c1 / c2;

    std::cout << "Sum: ";
    sum.display();

    std::cout << "Difference: ";
    diff.display();

    std::cout << "Product: ";
    prod.display();

    std::cout << "Quotient: ";
    quot.display();

    return 0;
}
