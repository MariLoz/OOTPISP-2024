#include "MemoryAccessError.h"

MemoryAccessError::MemoryAccessError(const std::string& msg)
    : Error("Memory Access Error: " + msg) {}

bool MemoryAccessError::operator==(const MemoryAccessError& other) const {
    return this->message == other.message;
}

bool MemoryAccessError::operator!=(const MemoryAccessError& other) const {
    return !(*this == other);
}

MemoryAccessError& MemoryAccessError::operator=(const MemoryAccessError& other) {
    if (this != &other) {
        message = other.message;
    }
    return *this;
}
