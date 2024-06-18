#include <iostream>

int main() {
    int a = 100;
    std::cout.unsetf(std::ios::dec);
    std::cout.setf(std::ios::showbase | std::ios::hex);
    std::cout << a << std::endl;
    std::cout.unsetf(std::ios::showbase | std::ios::hex);
    std::cout << a << std::endl;
    return 0;
}
