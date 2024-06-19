#ifndef SVECTOR_H
#define SVECTOR_H

#include <vector>
#include <algorithm> // for std::max_element

template<typename T>
class SVector {
private:
    std::stack<T> stack;
    std::stack<T> temp;

public:
    void Add(const T& element) {
        stack.push(element);
    }

    void findMaxAndAddToBeginning() {
        if (!stack.empty()) {
            T maxElement = stack.top();
            temp.push(maxElement);
            stack.pop();

            while (!stack.empty()) {
                T current = stack.top();
                stack.pop();
                temp.push(current);
                if (maxElement < current) {
                    maxElement = current;
                }
            }

            stack.push(maxElement);

            while (!temp.empty()) {
                stack.push(temp.top());
                temp.pop();
            }
        }
    }

    void removeMinElement() {
        if (!stack.empty()) {
            T min = stack.top();
            stack.pop();
            temp.push(min);

            while (!stack.empty()) {
                T current = stack.top();
                stack.pop();
                if (current < min) {
                    min = current;
                }
                temp.push(current);
            }

            while (!temp.empty()) {
                if (!(temp.top() == min)) {
                    stack.push(temp.top());
                }
                temp.pop();
            }
        }
    }
    
    void addAverageToElements() {
        if (!stack.empty()) {
            T sum = T();
            int count = 0;
            temp = stack;

            while (!temp.empty()) {
                sum += temp.top();
                temp.pop();
                ++count;
            }

            T average = sum / count;

            temp = stack;
            while (!stack.empty()) {
                stack.pop();
            }
            while (!temp.empty()) {
                T& elem = temp.top();
                elem += average;
                temp.pop();
                stack.push(elem);
            }
        }
    }

    void show() const {
        std::cout << "Elements:\n";
        std::stack<T> temp = stack;

        while (!temp.empty()) {
            std::cout << temp.top() << " ";
            temp.pop();
        }
        std::cout << std::endl;
    }
};

#endif
