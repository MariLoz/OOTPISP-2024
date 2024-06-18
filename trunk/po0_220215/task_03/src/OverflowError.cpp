#include "OverflowError.h"

OverflowError::OverflowError()
    : MathError("Overflow error") {}

bool OverflowError::operator==(const OverflowError& other) const {
    return this->message == other.message;
}

bool OverflowError::operator!=(const OverflowError& other) const {
    return !(*this == other);
}
