#include <iostream>
#include "Vector.h"
#include "Time.h"

int main() {
    // Prompt user to enter current time
    Time currentTime;
    std::cout << "Enter current time (minutes seconds): ";
    std::cin >> currentTime;
    std::cout << "Current time: " << currentTime << std::endl;

    // Create a vector of Time objects with 3 elements initialized to current time
    Vector timeVector(3, currentTime);
    std::cout << "Enter values for time vector (3 elements): ";
    std::cin >> timeVector;
    std::cout << "Time vector: " << timeVector << std::endl;

    // Create another vector of Time objects with 5 elements initialized to current time
    Vector timeVector2(5, currentTime);
    std::cout << "Time vector 2 (size 5): " << timeVector2 << std::endl;

    // Assign timeVector's values to timeVector2
    timeVector2 = timeVector;
    std::cout << "Time vector 2 after assignment: " << timeVector2 << std::endl;

    // Demonstrate adding 30 seconds to each element of timeVector
    std::cout << "Adding 30 seconds to time vector:" << std::endl;
    timeVector += 30;
    std::cout << "Time vector after addition: " << timeVector << std::endl;

    return 0;
}
