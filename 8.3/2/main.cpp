#include <iostream>
#include <cstring>
#include <iomanip>

void center(char* str) {
    int len = strlen(str);
    std::cout.width((80-len)/2 + len);
    std::cout.fill('*');
    std::cout << str;
    std::cout.width((80-len)/2 + 1);
    std::cout.fill('*');
    std::cout << ' ' << std::endl;
}

void center2(char* str) {
    int len = strlen(str);
    std::cout << std::setw((80-len)/2 + len) << std::setfill('$') << str;
    std::cout << std::setw((80-len)/2 + 1) << std::setfill('$') << ' ' << std::endl;
}

int main() {
    char a[] = "Hello, World!";
    center(a);
    center2(a);
    return 0;
}
