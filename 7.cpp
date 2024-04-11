#include <iostream>

class ExplicitConstructorDemo {
private:
    int value;

public:
    // Explicit constructor
    explicit ExplicitConstructorDemo(int v) : value(v) {
        std::cout << "ExplicitConstructorDemo object constructed with value: " << value << std::endl;
    }

    // Function to display the value
    void displayValue() const {
        std::cout << "Stored value: " << value << std::endl;
    }
};

int main() {
    // Error: Implicit conversion is not allowed due to explicit constructor
    // ExplicitConstructorDemo obj = 42; 

    // Correct: Use explicit constructor directly
    ExplicitConstructorDemo obj(42);
    obj.displayValue();

    return 0;
}
