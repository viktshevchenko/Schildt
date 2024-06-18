#include <iostream>

class A {
    int i;
public:
    A(int a) { i = a; }
};

class B {
    int j;
public:
    B(int a) { j = a; }
};

class C: public A, public B {
    int k;
public:
    C(int a, int b, int c) : A(a), B(b) { k = c;}
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
