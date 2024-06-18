#include <iostream>

void recip(double &num) {
    num = 1/num;
}

int main() {
    double num = 100.0;
    std::cout << num << std::endl;
    recip(num);
    std::cout << num << std::endl;
    return 0;
}
