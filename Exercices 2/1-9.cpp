// Make a hand program that retrieves a string of characters and transforms them all into lower case and then all into upper case

#include <iostream>
#include <ctype.h>


int main() {
    std::string tmp, lower, upper;


    std::cout << "Enter string: ";
    getline(std::cin, tmp);

    lower = tmp;
    upper = tmp;

    for (int i = 0; i < lower.length(); ++i) {
        lower[i] = tolower(lower[i]);
    }

    for (int i = 0; i < upper.length(); ++i) {
        upper[i] = toupper(upper[i]);
    }
    std::cout << "Normal: " << tmp << std::endl;
    std::cout << "To lower: " << lower << std::endl;
    std::cout << "To upper: " << upper << std::endl;

    return 0;
}
