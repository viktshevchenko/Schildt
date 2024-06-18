//программа с ошибкой неоднозначности

#include <iostream>

int f(int a) { return a*a; }
int f(int a, int b = 0) { return a*b; }

int main() {
    std::cout << f(10, 2) << std::endl;
    std::cout << f(10) << std::endl;
    return 0;
}
