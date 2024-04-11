#include <iostream>

class Counter {
private:
    int count;

public:
    Counter(int initial = 0) : count(initial) {}

    // Overloading prefix increment operator (++counter)
    Counter& operator++() {
        ++count;
        return *this;
    }

    // Overloading postfix increment operator (counter++)
    Counter operator++(int) {
        Counter temp = *this;
        ++(*this);
        return temp;
    }

    // Overloading prefix decrement operator (--counter)
    Counter& operator--() {
        --count;
        return *this;
    }

    // Overloading postfix decrement operator (counter--)
    Counter operator--(int) {
        Counter temp = *this;
        --(*this);
        return temp;
    }

    // Function to display the count value
    void display() const {
        std::cout << "Count: " << count << std::endl;
    }
};

int main() {
    Counter c;
    c.display();

    ++c;
    c.display();

    c++;
    c.display();

    --c;
    c.display();

    c--;
    c.display();

    return 0;
}
