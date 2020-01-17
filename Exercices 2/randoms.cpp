// Random number generator
// http://www.math.uaa.alaska.edu/~afkjm/csce211/fall2018/handouts/RandomFunctions.pdf

#include <iostream>
#include <ctime>

// Get a random integer between min and max
int get_rand_int(int min, int max);


int main() {
    srand(time(NULL));

    int min, max, iters;

    std::cout << "Minimum value: ";
    std::cin >> min;

    std::cout << "Maximum value: ";
    std::cin >> max;

    std::cout << "Number of iterations: ";
    std::cin >> iters;

    std::cout 
        << "\n-------- Status --------"
        << "\nIterations: " << iters
        << "\nMinimum value: " << min
        << "\nMaximum value: " << max
        << "\n------------------------\n"
        << std::endl;

    for (int i = 0; i < iters; i++) {
        std::cout << "Iteration " << i << ": " << get_rand_int(min, max) << std::endl;
    }

    return 0;
}

int get_rand_int(int min, int max) {
    return rand() % (max - min + 1) + min;
}
