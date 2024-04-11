#include <iostream>

// Base class
class Animal {
public:
    void eat() {
        std::cout << "Animal eats" << std::endl;
    }
};

// Intermediate virtual base class
class Pet : virtual public Animal {
public:
    void play() {
        std::cout << "Pet plays" << std::endl;
    }
};

// Derived class using virtual inheritance
class Dog : public Pet {
public:
    void bark() {
        std::cout << "Dog barks" << std::endl;
    }
};

int main() {
    Dog myDog;
    myDog.eat();   // Inherited from Animal
    myDog.play();  // Inherited from Pet
    myDog.bark();  // Inherited from Dog

    return 0;
}
