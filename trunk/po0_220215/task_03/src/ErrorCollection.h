#pragma once
#include "Error.h"
#include <vector>
#include <stdexcept>

class ErrorCollection {
private:
    std::vector<Error*> errors;
public:
    void addError(Error* err);
    Error* operator[](size_t index);
    size_t size() const;
    ~ErrorCollection();
};
