#include <iostream>

int main () {
    std::cout << "Enter the first number: ";

    int first{};
    std::cin >> first;

    std::cout << "Enter the second number: ";

    int second{};
    std::cin >> second;

    std::cout << first << " + " << second << " = " << second + first << ".\n";
    std::cout << first << " - " << second << " = " << first - second << ".\n";

    return 0;


}