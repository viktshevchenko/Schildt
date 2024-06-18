#include <iostream>
#include <cmath>

int sroot(int num);
long sroot(long num);
double sroot(double num);

int main() {
    std::cout << "int 36 " << sroot(36) << std::endl;
    std::cout << "long 36L " << sroot(36L) << std::endl;
    std::cout << "double 36.128 " << sroot(36.128) << std::endl;
    return 0;
}

int sroot(int num) {
    return sqrt(num);
}

long sroot(long num) {
    return sqrtl(num);
}

double sroot(double num) {
    return sqrtf(num);
}
