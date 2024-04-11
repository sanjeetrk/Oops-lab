#include <iostream>

using namespace std;

// Define a class called Calculator
class Calculator {
public:
    // Constructor
    Calculator() {
        cout << "Calculator object created" << endl;
    }

    // Destructor
    ~Calculator() {
        cout << "Calculator object destroyed" << endl;
    }

    // Member function to add two numbers
    int add(int a, int b) {
        return a + b;
    }

    // Member function to subtract two numbers
    int subtract(int a, int b) {
        return a - b;
    }

    // Member function to multiply two numbers
    int multiply(int a, int b) {
        return a * b;
    }

    // Member function to divide two numbers
    float divide(float a, float b) {
        if (b != 0)
            return a / b;
        else {
            cout << "Error: Cannot divide by zero" << endl;
            return 0;
        }
    }
};

// Main function to test the Calculator class
int main() {
    // Create an object of Calculator class
    Calculator calc;

    // Use the Calculator object to perform calculations
    int num1 = 20, num2 = 5;
    cout << "Addition: " << calc.add(num1, num2) << endl;
    cout << "Subtraction: " << calc.subtract(num1, num2) << endl;
    cout << "Multiplication: " << calc.multiply(num1, num2) << endl;
    
    float num3 = 20.0, num4 = 4.0;
    cout << "Division: " << calc.divide(num3, num4) << endl;
    
    // Attempt to divide by zero
    cout << "Division by zero test: ";
    cout << calc.divide(num3, 0) << endl;

    return 0;
}
