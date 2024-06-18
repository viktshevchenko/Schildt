#include <iostream>

long pow(int a, int b);

int main() {
    int a, b;
    std::cout << "Enter two numbers:" << std::endl;
    std::cin >> a >> b;
    std::cout << a << "^" << b << " = " << pow(a, b) << std::endl;
    std::cout << b << "^" << a << " = " << pow(b, a) << std::endl;
    return 0;
}

long pow(int a, int b) {
    long result = 1;
    for (; b; b--) result *= a;
    return result;
}