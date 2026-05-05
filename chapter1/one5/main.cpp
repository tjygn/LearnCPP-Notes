#include <iostream>

int main() {
    std::cout << "Hello with endl" << std::endl;
    std::cout << "Hello with n" << "\n";

    std::cout << "Enter any number:\n";

    int x{};

    std::cin >> x;
    std::cout << x << '\n';
    std::cout << x + 2 << '\n'; //Arithmetic, as expected, works inside std::cout


    int y{};
    int z{};
    std::cin >> y;
    std::cout << y << "\n";
    std::cin >> z;
    std::cout << z << "\n";

    return 0;
}