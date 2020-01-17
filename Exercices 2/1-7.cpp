// Make a hand program that uses the functions cout, cin and cerr. For example the program asks you to enter a value and indicates (using cerr) that it is positive or displays it

#include <iostream>

int main(int argc, char* argv[]) {
    int val;

    std::cout << "Enter a value: ";
    std::cin >> val;

    std::cout << "Entered value: " << val;

    if (val > 0)
        std::cerr << " Value is positive" << std::endl;

    return 0;
}
