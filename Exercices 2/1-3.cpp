// Make a program by declaring a #define, a string const and an int const then try to modify the variables, what happens

#include <iostream>

#define FIRST 1;

const std::string SECOND = "two";

const int THIRD = 3;

int main() {
    FIRST = 2;
    SECOND = 3;
    THIRD = 4;

    std::cout << SECOND << THIRD << std::endl;

    return 0;
}
