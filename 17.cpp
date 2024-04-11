#include <iostream>

// Function template to find the maximum of two values
template <typename T>
T max(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    int maxInt = max(10, 5);
    double maxDouble = max(3.14, 2.71);

    std::cout << "Maximum of 10 and 5: " << maxInt << std::endl;
    std::cout << "Maximum of 3.14 and 2.71: " << maxDouble << std::endl;

    return 0;
}
