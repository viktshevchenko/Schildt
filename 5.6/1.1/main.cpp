#include <iostream>

void order(int &a, int &b) {
    if(a <= b)
        return;
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 3, b = 7;
    order(a, b);
    std::cout << a << ' ' << b << std::endl;
    order(b, a);
    std::cout << a << ' ' << b << std::endl;
    return 0;
}
