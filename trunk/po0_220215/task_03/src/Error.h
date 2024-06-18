#pragma once
#include <string>
#include <iostream>

class Error {
public:
    explicit Error(const std::string& message);
    virtual ~Error() = default;
    virtual void print() const;

protected:
    std::string message;
};
