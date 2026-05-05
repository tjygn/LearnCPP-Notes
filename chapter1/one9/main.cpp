#include <iostream>

int main() {
    int x {9};
    std::cout << (x = 5) << "\n"; //Write only this as it is the only thing that was not intuitive
}