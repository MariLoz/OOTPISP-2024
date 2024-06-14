#pragma once
#include "Error.h"

class MemoryAccessError : public Error {
public:
    MemoryAccessError(const std::string& msg);
    bool operator==(const MemoryAccessError& other) const;
    bool operator!=(const MemoryAccessError& other) const;
    MemoryAccessError& operator=(const MemoryAccessError& other);
};
