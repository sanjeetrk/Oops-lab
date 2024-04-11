#include <iostream>

class InitializerListDemo {
private:
    int x;
    double y;

public:
    // Constructor with initializer list
    InitializerListDemo(int a, double b) : x(a), y(b) {
        // Constructor body
    }

    // Function to display values
    void displayValues() const {
        std::cout << "x: " << x << ", y: " << y << std::endl;
    }
};

int main() {
    // Create an object and initialize using initializer list
    InitializerListDemo obj(10, 3.14);
    obj.displayValues();

    return 0;
}
