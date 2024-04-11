#include <iostream>

class DynamicConstructorDemo {
private:
    int* data;

public:
    // Constructor for dynamic initialization
    DynamicConstructorDemo(int value) {
        data = new int(value); // Dynamically allocate memory for 'data'
        std::cout << "DynamicConstructorDemo object constructed with value: " << *data << std::endl;
    }

    // Destructor to release dynamically allocated memory
    ~DynamicConstructorDemo() {
        delete data; // Release the allocated memory
        std::cout << "DynamicConstructorDemo object destroyed" << std::endl;
    }

    // Function to display the stored value
    void displayValue() const {
        std::cout << "Stored value: " << *data << std::endl;
    }
};

int main() {
    // Create a DynamicConstructorDemo object using dynamic initialization
    DynamicConstructorDemo* obj = new DynamicConstructorDemo(42);

    // Use the object
    obj->displayValue();

    // Clean up - delete the dynamically allocated object
    delete obj;

    return 0;
}
