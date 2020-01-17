// Make a hand program that has a loop from 0 to 99 that increments an integer variable initialized to 5 by 2. Then declare a variable of character type and make an assignment with the integer value previously calculated

#include <iostream>

int main() {
    int val = 5;
    char res;

    for (int i = 0; i < 99; ++i) {
        val += 2;

        res = val;

        std::cout << "Val = " << res << std::endl;
    }

    return 0;
}
