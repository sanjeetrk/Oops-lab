#include <iostream>

// Base class
class Shape {
public:
    // Virtual function for area calculation
    virtual double calculateArea() const = 0; // Pure virtual function

    // Virtual destructor
    virtual ~Shape() {}
};

// Derived class (Circle)
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    // Implementation of calculateArea for Circle
    double calculateArea() const override {
        return 3.14159 * radius * radius;
    }
};

// Derived class (Rectangle)
class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    // Implementation of calculateArea for Rectangle
    double calculateArea() const override {
        return length * width;
    }
};

int main() {
    // Pointer to base class (Shape) used for polymorphism
    Shape* shape1 = new Circle(5.0);
    Shape* shape2 = new Rectangle(4.0, 6.0);

    // Call calculateArea using base class pointer (polymorphism)
    std::cout << "Area of Circle: " << shape1->calculateArea() << std::endl;
    std::cout << "Area of Rectangle: " << shape2->calculateArea() << std::endl;

    // Clean up - delete dynamically allocated objects
    delete shape1;
    delete shape2;

    return 0;
}
