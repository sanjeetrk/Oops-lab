#include <iostream>

void* operator new(size_t size) {
    std::cout << "Overloaded new operator called with size: " << size << std::endl;
    return malloc(size);
}

void operator delete(void* ptr) noexcept {
    std::cout << "Overloaded delete operator called" << std::endl;
    free(ptr);
}

int main() {
    int* p = new int(42);
    std::cout << "Value: " << *p << std::endl;
    delete p;

    return 0;
}
