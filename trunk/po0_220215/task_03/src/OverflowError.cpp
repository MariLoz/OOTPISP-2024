#include "OverflowError.h"

OverflowError::OverflowError()
    : MathError("Overflow error") {}

bool OverflowError::operator==(const OverflowError& other) const {
    return this->message == other.message;
}

bool OverflowError::operator!=(const OverflowError& other) const {
    return !(*this == other);
}

OverflowError& OverflowError::operator=(const OverflowError& other) {
    if (this != &other) {
        message = other.message;
    }
    return *this;
}
