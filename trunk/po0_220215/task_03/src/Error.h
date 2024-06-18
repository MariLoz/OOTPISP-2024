#pragma once
#include <string>
#include <iostream>

class Error {
public:
    explicit Error(const std::string& message);

    virtual void print() const;
    
    bool operator==(const Error& other) const;
    bool operator!=(const Error& other) const;

protected:
    std::string message;
};
