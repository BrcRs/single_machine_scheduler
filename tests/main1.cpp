#include <iostream>
#include "../lib/JsonReader.hpp"

// using namespace std;

int main(int argc, char *argv[]) {

    if (argc != 2) {
        throw std::invalid_argument("Only 1 parameter needed: filename.");
    }

    // std::vector<std::string> msg{"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    
    // for (const std::string &word : msg) {
    //     std::cout << word << " ";
    // }
    // std::cout << std::endl;

    // std::cout << "Hello world!" << std::endl;

    JsonReader jason{};

    // std::string s = "filename";
    std::string s = argv[1];

    jason.read(s);

    return 0;
}

// g++ -Wall -Wextra -std=c++23 *.cpp -o app