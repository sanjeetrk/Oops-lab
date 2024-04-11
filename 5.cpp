#include <iostream>

class Rectangle {
private:
    double length;
    double width;

public:
    // Zero-argument constructor (default constructor)
    Rectangle() {
        length = 0.0;
        width = 0.0;
    }

    // Parameterized constructor
    Rectangle(double len, double wid) {
        length = len;
        width = wid;
    }

    // Member function to calculate and return the area of the rectangle
    double calculateArea() const {
        return length * width;
    }

    // Member function to display the dimensions of the rectangle
    void display() const {
        std::cout << "Length: " << length << ", Width: " << width << std::endl;
    }
};

int main() {
    // Creating objects using zero-argument constructor
    Rectangle rect1; // Default constructor is called

    // Displaying details of rect1
    std::cout << "Rectangle 1:" << std::endl;
    rect1.display();
    std::cout << "Area: " << rect1.calculateArea() << std::endl;

    // Creating objects using parameterized constructor
    Rectangle rect2(5.0, 3.0); // Parameterized constructor is called with arguments

    // Displaying details of rect2
    std::cout << "\nRectangle 2:" << std::endl;
    rect2.display();
    std::cout << "Area: " << rect2.calculateArea() << std::endl;

    return 0;
}
