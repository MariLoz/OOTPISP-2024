#include "Error.h"

Error::Error(const std::string& msg) : message(msg) {}

void Error::print() const {
    std::cout << "Error: " << message << std::endl;
}

bool Error::operator==(const Error& other) const {
    return message == other.message;
}

bool Error::operator!=(const Error& other) const {
    return !(*this == other);
}

Error& Error::operator=(const Error& other) {
    if (this != &other) {
        message = other.message;
    }
    return *this;
}
