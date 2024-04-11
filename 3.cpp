#include <iostream>

class MyClass {
public:
    static int count; // Declaration of static data member

    MyClass() {
        count++; // Increment count each time a new object is created
    }

    static void showCount() {
        std::cout << "Total objects created: " << count << std::endl;
    }
};

// Definition of the static data member outside the class
int MyClass::count = 0;

int main() {
    // Create several instances of MyClass
    MyClass obj1;
    MyClass obj2;
    MyClass obj3;

    // Call the static member function to display the count
    MyClass::showCount();

    // Create another instance
    MyClass obj4;

    // Display the updated count
    MyClass::showCount();

    return 0;
}
