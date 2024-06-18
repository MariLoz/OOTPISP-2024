#include "Error.h"

Error::Error(const std::string& msg) : message(msg) {}

void Error::print() const {
    std::cout << "Error: " << message << std::endl;
}



