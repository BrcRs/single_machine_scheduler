#include "JsonReader.hpp"


// JsonReader::JsonReader() {
//     std::cout << "création" << std::endl;
// }

int* JsonReader::read(std::string &filename) {

    std::cout << "just reading stuff: " << filename << std::endl;
    
    int b = 5;
    int* a = &b;

    return a;
}