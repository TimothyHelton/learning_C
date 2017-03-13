//
// Program main definition
//

#include <iostream>
#include <map>
#include <queue>
#include "hello.h"


int CountDown(int start) {
//    while (start >= 0) {
//        std::cout << start << " ";
//        --start;
//    }

    for (start; start >= 0; --start) {
        std::cout << start << " ";
    }

    std::cout << std::endl;
    return 0;
}


int CountNumbers() {
    int value;                        // input value
    std::map<int, int> all_values;    // dictionary of all inputs

    while (std::cin >> value) {
        if (all_values.count(value) == 0) {
            all_values.emplace(value, 1);
        }
        else {
            all_values[value] = ++all_values.at(value);
        }
    }

    for (const auto &p : all_values) {
        std::cout << p.first << " => " << p.second << std::endl;
    }
    return 0;
}


int DuplicateNumbers() {
    int value;                          // input value
    int idx = 0;                        // input index
    std::queue<int> all_values;         // list of all inputs
    std::map<int, int> usage;           // dictionary of inputs usages

    while (std::cin >> value) {
        all_values.push(value);
    }

    for (idx; all_values.size(); ++idx) {
        value = all_values.front();
        if (usage.count(value) == 0) {
            usage.emplace(value, 1);
        }
        else {
            usage[value] = ++usage.at(value);
        }
        all_values.pop();
    }

    for (const auto &p : usage) {
        std::cout << p.first << " occurs " << p.second << " times" << std::endl;
    }
    return 0;
}


int Factorial(int max_number) {
    int factorial = 1, val = max_number;

//    while (val > 0) {
//        factorial *= val;
//        --val;
//    }

    for (val; val > 0; --val) {
        factorial *= val;
    }

    std::cout << max_number << "! = " << factorial << std::endl;
    return 0;
}


int Multiply() {
    int value_1 = 0, value_2 = 0;

    std::cout << "Enter two numbers: " << std::endl;
    std::cin >> value_1 >> value_2;
    std::cout << value_1 << " * " << value_2 << " = " << value_1 * value_2
              << std::endl;
    return 0;
}


int PrintRange() {
    int start, end, val;

    std::cout << "Enter two numbers: " << std::endl;
    std::cin >> start >> end;

    val = start;
//    while (val <= end) {
//        std::cout << val << " ";
//        ++val;
//    }

    for (val; val <= end; ++val) {
        std::cout << val << " ";
    }

    std::cout << std::endl;
    return 0;
}


int Sum() {
    int value_1 = 0, value_2 = 0;

    std::cout << "Enter two numbers: " << std::endl;
    std::cin >> value_1 >> value_2;
    std::cout << value_1 << " + " << value_2 << " = " << value_1 + value_2
              << std::endl;
    return 0;
}

int SumRange(int start, int end) {
    int sum = 0, val = start;

//    while (val <= end) {
//        sum += val;
//        ++val;
//    }

    for (val; val <= end; ++val) {
        sum += val;
    }

    std::cout << "Sum of the range " << start << " to " << end << " = " << sum
              << std::endl;
    return 0;
}


int SumUnknown() {
    int sum = 0;
    int value = 0;
    std::queue<int> all_values; // a queue is equivalent to a list

    while(std::cin >> value) {
        sum += value;
        all_values.push(value);
    }
    std::cout << "Sum of the range " << all_values.front() << " to "
              << all_values.back() << " = " << sum << std::endl;
}

int main () {

    Hello::HelloWorld();
    std::cout << std::endl;
    Hello::PersonalHello("Tim");

//    CountDown(10);
//    CountNumbers();
    DuplicateNumbers();
//    Multiply();
//    Factorial(4);
//    PrintRange();
//    Sum();
//    SumRange(50, 100);
//    SumUnknown();

    return 0;
}