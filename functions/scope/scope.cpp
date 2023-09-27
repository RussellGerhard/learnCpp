#include <iostream>

int inner(int x, int y) {
    std::cout << "x is " << x << '\n';
    std::cout << "y is " << y << '\n';
    return 0;
}

int main() {
    int a{5};
    int b{7};
    inner(a, b);
    return 0;
}
