#pragma once
#include "MathError.h"

class OverflowError : public MathError {
public:
    OverflowError();
    bool operator==(const OverflowError& other) const;
    bool operator!=(const OverflowError& other) const;
    OverflowError& operator=(const OverflowError& other);
};
