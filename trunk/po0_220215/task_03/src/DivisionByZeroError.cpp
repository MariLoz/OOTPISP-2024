#include "DivisionByZeroError.h"

DivisionByZeroError::DivisionByZeroError()
    : MathError("Division by zero") {}

bool DivisionByZeroError::operator==(const DivisionByZeroError& other) const {
    return this->message == other.message;
}

bool DivisionByZeroError::operator!=(const DivisionByZeroError& other) const {
    return !(*this == other);
}

DivisionByZeroError& DivisionByZeroError::operator=(const DivisionByZeroError& other) {
    if (this != &other) {
        message = other.message;
    }
    return *this;
}
