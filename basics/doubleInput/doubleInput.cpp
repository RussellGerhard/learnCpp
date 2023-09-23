#include <iostream>

int main() {
    int x{0};
    std::cout << "Enter an integer: ";

    std::cin >> x;
    std::cout << "Double that number is: " << 2 * x << '\n';

    return 0;
}
