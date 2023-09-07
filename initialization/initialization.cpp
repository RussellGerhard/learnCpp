#include <iostream>

int main(int argc, char** argv)
{
    (void) argc;        // avoid no use warning
    (void) argv;        // avoid no use warning

    // Initialization: giving a variable a value at the point when it is created
    [[maybe_unused]] int a = 4;     // copy initialization:         not preferred as it is inefficient
    [[maybe_unused]] int b(4);      // direct initialization:       preferred over copy initialization for efficiency, although direct list initialization is better
    [[maybe_unused]] int c = {4};   // copy list initialization:    not preferred as it is inefficient
    [[maybe_unused]] int d {4};     // direct list initialization:  uniform syntax (curly braces) makes it preferable to normal direct initialization
    [[maybe_unused]] int e;         // default initialization:      not preferred, leaves variable with random value
    [[maybe_unused]] int f {};      // value initialization:        used when the value will not be used
    [[maybe_unused]] int g {0};     // zero initialization:         used when the value will be used

    // Assignment: giving a variable a value at a point sometime after it was created
    a = 5;
    b = {4};

    std::cout << "a=" << a << '\n';
    return 0;
}
