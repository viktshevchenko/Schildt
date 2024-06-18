#include <iostream>
#include <iomanip>

int main() {
    std::cout << std::hex << std::setiosflags(std::ios::showbase) << 100 << std::endl;
    return 0;
}
