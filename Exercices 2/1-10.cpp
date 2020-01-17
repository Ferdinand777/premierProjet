// Make a hand program allowing the input of 10 integers which will be memorized in an array, then display the maximum and minimum of these 10 values

#include <iostream>

int main() {
    int vals[10] = {};
    int min, max;

    for (int i = 0; i < 10; ++i) {
        std::cout << "Enter " << i << ": ";
        std::cin >> vals[i];
    }

    min = max = vals[0];

    for (int i = 1; i < 10; ++i) {
        if (vals[i] > max)
            max = vals[i];
        else if (vals[i] < min)
            min = vals[i];
    }

    std::cout << "min = " << min << " max = " << max << std::endl;

    return 0;
}

