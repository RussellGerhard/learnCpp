#include <iostream>

int add(int x, int y);

int main() {
    int a{3};
    int b{5};
    std::cout << "a + b is " << add(a, b) << '\n';
    return 0;
}

int add(int x, int y) { return x + y; }
