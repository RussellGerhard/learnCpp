#include <iostream>

#include "add.h"
// use header instead of forward declaration
// int add(int x, int y);

int main() {
    std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n';

    return 0;
}
