#pragma once
#include "Error.h"

class MathError : public Error {
public:
    MathError(const std::string& msg);
    bool operator==(const MathError& other) const;
    bool operator!=(const MathError& other) const;
    MathError& operator=(const MathError& other);
};