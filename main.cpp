//
// Program main definition
//

#include "hello.h"

int main () {

    Hello::helloWorld();
    std::cout << std::endl;
    Hello::personalHello("Tim");

    return 0;
}
