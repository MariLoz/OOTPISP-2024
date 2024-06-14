#pragma once
#include "MathError.h"

class DivisionByZeroError : public MathError {
public:
    DivisionByZeroError();
    bool operator==(const DivisionByZeroError& other) const;
    bool operator!=(const DivisionByZeroError& other) const;
    DivisionByZeroError& operator=(const DivisionByZeroError& other);
};
