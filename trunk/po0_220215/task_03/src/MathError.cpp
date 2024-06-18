#include "MathError.h"

MathError::MathError(const std::string& msg)
    : Error("Math Error: " + msg) {}

bool MathError::operator==(const MathError& other) const {
    return this->message == other.message;
}

bool MathError::operator!=(const MathError& other) const {
    return !(*this == other);
}


