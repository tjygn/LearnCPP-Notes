#include <iostream>

int main() {
    int width;
    width = 5;

    std::cout << width;

    width = 7;

    std::cout << width;

    int height {6}; //Looks weird but it is more correct cuz provokes an error if wrong value is passed

    int volume = 8.5; //Doesnt provoke an error on float value

    std::cout << volume;
    std::cout << height;

    //the program works even though I deleted the return 0
}