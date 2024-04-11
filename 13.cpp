#include <iostream>

// Base class 1
class Base1 {
public:
    void greet1() {
        std::cout << "Hello from Base1" << std::endl;
    }
};

// Base class 2
class Base2 {
public:
    void greet2() {
        std::cout << "Hello from Base2" << std::endl;
    }
};

// Derived class (inherits from Base1 and Base2)
class Derived : public Base1, public Base2 {
public:
    void greetDerived() {
        std::cout << "Hello from Derived" << std::endl;
    }
};

int main() {
    Derived d;
    d.greet1();        // Inherited from Base1
    d.greet2();        // Inherited from Base2
    d.greetDerived();  // Inherited from Derived

    return 0;
}
