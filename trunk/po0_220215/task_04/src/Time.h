#ifndef TIME_H
#define TIME_H

#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>

class Time {
private:
    int minutes;
    int seconds;

    void normalize() {
        if (seconds >= 60) {
            minutes += seconds / 60;
            seconds %= 60;
        }
    }

public:
    Time(int m = 0, int s = 0) : minutes(m), seconds(s) {
        normalize();
    }

    friend std::istream& operator>>(std::istream& is, Time& time) {
        std::string input;
        is >> input;

        size_t pos = input.find(':');
        if (pos != std::string::npos) {
            try {
                int m = std::stoi(input.substr(0, pos));
                int s = std::stoi(input.substr(pos + 1));
                time.minutes = m;
                time.seconds = s;
                time.normalize();
                return is;
            }
            catch (const std::invalid_argument& e) {
            }
        }

        std::istringstream ss(input);
        ss >> time.minutes >> time.seconds;
        time.normalize();
        return is;
    }

    friend std::ostream& operator<<(std::ostream& os, const Time& time) {
        os << std::setw(2) << std::setfill('0') << time.minutes << ":"
            << std::setw(2) << std::setfill('0') << time.seconds;
        return os;
    }

    Time& operator+=(int value) {
        int totalSeconds = minutes * 60 + seconds + value;
        minutes = totalSeconds / 60;
        seconds = totalSeconds % 60;
        return *this;
    }

    void operator+=(const Time& other) {
        int totalSeconds = (minutes + other.minutes) * 60 + seconds + other.seconds;
        minutes = totalSeconds / 60;
        seconds = totalSeconds % 60;
    }
};

#endif
