#include <iostream>

int rotate(int a);
long rotate(long a);

int main() {
    int a = 0x800;
    long b = 8;

    std::cout << rotate(a) << std::endl;
    std::cout << rotate(b) << std::endl;

    return 0;
}

int rotate(int a){
    int x;
    (a & 0x8000) ? (x = 1) : (x = 0); // что такое (a & 0x8000)?
    a = a << 1;
    a += x;
    return a;
}

long rotate(long a){
    int x;
    (a & 0x80000000) ? (x = 1) : (x = 0);
    a = a << 1;
    a += x;
    return a;
}