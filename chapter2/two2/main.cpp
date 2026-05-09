#include <iostream>

int getValue() {
    std::cout << "Enter an integer: " ;
    int x{};
    std::cin >> x;
    return x;
}

int main() {
    int x{getValue()};
    int y{getValue()};

    std::cout << x << " + " << y << " = " << x + y << "\n";
    return 0;
}