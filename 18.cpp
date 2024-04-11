#include <iostream>

// Class template for a simple container
template <typename T>
class Container {
private:
    T value;

public:
    Container(T val) : value(val) {}

    T getValue() const {
        return value;
    }
};

int main() {
    Container<int> intContainer(42);
    Container<double> doubleContainer(3.14);

    std::cout << "Integer value: " << intContainer.getValue() << std::endl;
    std::cout << "Double value: " << doubleContainer.getValue() << std::endl;

    return 0;
}
