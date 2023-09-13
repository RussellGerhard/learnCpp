#include <iostream>

int getAndPrintOneNumber() {
    std::cout << "Entering getAndPrintOneNumber\n";
    int x{};
    std::cout << "Input a number: ";
    std::cin >> x;
    std::cout << "You entered: " << x << '\n';
    return 0;
}

int getAndPrintTwoNumbers() {
    std::cout << "Entering getAndPrintTwoNumbers\n";
    int x{};
    int y{};
    std::cout << "Input two numbers separated by a space: ";
    std::cin >> x;
    std::cin >> y;
    std::cout << "You entered: " << x << " and " << y << '\n';
    return 0;
}

int unspecifiedBehavior() {
    std::cout << "Int size on this machine is: " << sizeof(int) << '\n';
    return 0;
}

int main() {
    getAndPrintOneNumber();
    unspecifiedBehavior();
    // getAndPrintTwoNumbers();
    return 0;
}
