#include <iostream>

// Class declaration
class MyClass {
public:
    // Constructor
    MyClass(int value) : data(value) {}

    // Member function definitions
    void setValue(int value);
    int getValue() const;
    void display() const;

private:
    int data;
};

// Definition of member function setValue
void MyClass::setValue(int value) {
    data = value;
}

// Definition of member function getValue
int MyClass::getValue() const {
    return data;
}

// Definition of member function display
void MyClass::display() const {
    std::cout << "Value: " << data << std::endl;
}

int main() {
    // Create an instance of MyClass
    MyClass obj(42);

    // Display the initial value
    obj.display();

    // Set a new value
    obj.setValue(100);

    // Display the updated value
    obj.display();

    return 0;
}
