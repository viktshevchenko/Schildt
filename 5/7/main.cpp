#include <iostream>
#include <cmath>

void mag(long &num, long order){
    num = num * pow(10, order);
}

int main() {
    long num = 4, order = 2;
    std::cout << num << std::endl;
    mag(num, order);
    std::cout << num << std::endl;
    return 0;
}
