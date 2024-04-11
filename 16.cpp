#include <iostream>

double divide(double a, double b) {
    if (b == 0.0)
        throw "Division by zero is not allowed";
    return a / b;
}

int main() {
    try {
        double result = divide(10.0, 2.0); // No exception
        std::cout << "Result: " << result << std::endl;

        result = divide(8.0, 0.0); // Throws exception
        std::cout << "Result: " << result << std::endl; // This line will not execute
    } catch (const char* msg) {
        std::cerr << "Exception caught: " << msg << std::endl;
    }

    return 0;
}
