#include <iostream>
#include <fstream>

const std::string IN_NAME = "./input.txt";
const std::string OUT_NAME = "./output.txt";


void read_file();
void write_file(std::string text="DEFAULT TEXT");


int main() {
    write_file();
    
    return 0;
}


void read_file() {
    std::string buffer;

    std::ifstream file;

    file.open(IN_NAME);

    if (file.fail()) {
        std::cout << "Error file does not exist" << std::endl;
        return;
    } else {
        while(file >> buffer) {
            std::cout << buffer << " ";
        }
    }

    file.close();
}

void write_file(std::string text) {
    std::ofstream file;

    file.open(OUT_NAME);

    file << text;

    file.close();
}
