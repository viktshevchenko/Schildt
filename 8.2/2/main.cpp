#include <iostream>

int main() {
    float a = 100;
    std::cout.setf(std::ios::showpoint | std::ios::scientific | std::ios::uppercase);
    std::cout << a << std::endl;
    return 0;
}
