#include <iostream>

int main() {
    double *p;
    p = new double(-123.0987);
    std::cout << *p << std::endl;
    delete p;
    return 0;
}
