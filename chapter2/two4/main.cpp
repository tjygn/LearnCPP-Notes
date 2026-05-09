#include <iostream>

int doubleNumber(int num) {
    return num * 2;
}

int main() {
    std::cout << "Enter an integer: \n";
    int x{};
    std::cin >> x;
    std::cout << doubleNumber(x) << "\n";
    return 0;
}