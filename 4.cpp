#include <iostream>

class Circle {
private:
    const double pi = 3.14159; // const data member
    const double radius;

public:
    // Constructor with initializer list to initialize const data member
    Circle(double r) : radius(r) {}

    // Function to calculate and return the area of the circle
    double calculateArea() const {
        return pi * radius * radius;
    }

    // Function to display circle details
    void displayDetails() const {
        std::cout << "Circle Radius: " << radius << std::endl;
        std::cout << "Circle Area: " << calculateArea() << std::endl;
        std::cout << "Value of pi: " << pi << std::endl;
    }
};

int main() {
    // Create a Circle object with radius 5.0
    Circle myCircle(5.0);

    // Display details of the circle
    myCircle.displayDetails();

    // Attempt to modify const data member (will result in a compilation error)
    // myCircle.pi = 3.14;  // This line will cause a compilation error

    return 0;
}
