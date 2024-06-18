#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>
#include <vector>
#include "Time.h"

class Vector {
private:
    std::vector<Time> data;

public:
    Vector() {}

    Vector(size_t size, const Time& initialValue) : data(size, initialValue) {}

    Time& operator[](size_t index) {
        return data[index];
    }

    const Time& operator[](size_t index) const {
        return data[index];
    }

    size_t operator()() const {
        return data.size();
    }

    void operator+(int value) {
        for (auto& elem : data) {
            elem += value;
        }
    }

    Vector& operator=(const Vector& other) {
        if (this != &other) {
            data = other.data;
        }
        return *this;
    }

    friend std::istream& operator>>(std::istream& is, Vector& vec) {
        for (auto& elem : vec.data) {
            is >> elem;
        }
        return is;
    }

    friend std::ostream& operator<<(std::ostream& os, const Vector& vec) {
        for (const auto& elem : vec.data) {
            os << elem << " ";
        }
        return os;
    }
};

#endif 
