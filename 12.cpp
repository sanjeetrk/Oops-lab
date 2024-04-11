#include <iostream>

// Base class
class Animal {
public:
    void eat() {
        std::cout << "Animal eats" << std::endl;
    }
};

// Derived class (inherits Animal)
class Dog : public Animal {
public:
    void bark() {
        std::cout << "Dog barks" << std::endl;
    }
};

// Derived class (inherits Dog)
class Labrador : public Dog {
public:
    void display() {
        std::cout << "Labrador displays" << std::endl;
    }
};

int main() {
    Labrador myLab;
    myLab.eat();   // Inherited from Animal
    myLab.bark();  // Inherited from Dog
    myLab.display();// Inherited from Labrador

    return 0;
}
