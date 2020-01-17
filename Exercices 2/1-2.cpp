// Make a hand program that asks a user for 4 integers and displays their average. The program uses only 2 variables.

#include <iostream>

int main() {
    double res, tmp;

    std::cout << "Enter value: ";
    std::cin >> tmp;
    res += tmp;

    std::cout << "Enter value: ";
    std::cin >> tmp;
    res += tmp;

    std::cout << "Enter value: ";
    std::cin >> tmp;
    res += tmp;

    std::cout << "Enter value: ";
    std::cin >> tmp;
    res += tmp;

    std::cout << "Avarage: " << res / 4 << std::endl;

    return 0;
}
