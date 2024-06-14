#pragma once
#include <iostream>
#include <string>

class Error {
protected:
    std::string message;
public:
    Error(const std::string& msg);
    virtual ~Error() = default;
    virtual void print() const;
    bool operator==(const Error& other) const;
    bool operator!=(const Error& other) const;
    Error& operator=(const Error& other);
};
