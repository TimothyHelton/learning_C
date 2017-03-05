//
// Program main definition
//

#include <iostream>
#include "hello.h"


int CountDown (int start) {
    while (start >= 0) {
        std::cout << start << " ";
        --start;
    }
    std::cout << std::endl;
    return 0;
}


int Factorial (int max_number) {
    int factorial = 1, val = 1;

    while (val <= max_number) {
        factorial *= val;
        ++val;
    }
    std::cout << max_number << "! = " << factorial << std::endl;
    return 0;
}


int Multiply () {
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
    while (val <= end) {
        std::cout << val << " ";
        ++val;
    }
    std::cout << std::endl;
    return 0;
}


int Sum () {
    int value_1 = 0, value_2 = 0;

    std::cout << "Enter two numbers: " << std::endl;
    std::cin >> value_1 >> value_2;
    std::cout << value_1 << " + " << value_2 << " = " << value_1 + value_2
              << std::endl;
    return 0;
}


int SumRange (int start, int end) {
    int sum = 0, val = start;

    while (val <= end) {
        sum += val;
        ++val;
    }
    std::cout << "Sum of the range " << start << " to " << end << " = " << sum
              << std::endl;
    return 0;
}


int main () {

    Hello::HelloWorld();
    std::cout << std::endl;
    Hello::PersonalHello("Tim");

//    Sum();
//    Multiply();
//    Factorial(10);
//    SumRange(50, 100);
//    CountDown(10);
    PrintRange();

    return 0;
}