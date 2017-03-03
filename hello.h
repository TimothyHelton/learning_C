//
// Created by Timothy Helton on 3/3/17.
//

#ifndef LEARNING_C_HELLO_H
#define LEARNING_C_HELLO_H

#include <iostream>


class Hello {

public:

    // print Hello World!
    static int helloWorld () {
        std::cout << "Hello World!" << std::endl;
        return 0;
    };

    // print personalized hello
    static int personalHello (char* &name) {
        std::cout << "Hello " << &name << std::endl;
        return 0;
    };

};


#endif //LEARNING_C_HELLO_H
