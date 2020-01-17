// Make a hand program that enters a string of words and displays it word by word. The initial string contains spaces between the words. Example: Hello I like C++

#include <iostream>

int main() {
    std::string words;
    std::string delim = " ";

    std::cout << "Enter words: ";
    std::getline(std::cin, words);

    std::cout << words << std::endl;

    int start = 0;
    int end = words.find(delim);

    while (end != std::string::npos) {
        std::cout << words.substr(start, end-start) << std::endl;
        
        start = end + delim.length();
        end = words.find(delim, start);
    }
    
    std::cout << words.substr(start, end) << std::endl;

    return 0;
}
