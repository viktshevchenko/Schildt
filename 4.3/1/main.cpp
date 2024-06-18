#include <iostream>

class myclass {
    int _a, _b;
public:
    myclass(int a, int b) { this->_a = a; this->_b = b; }
    int add() { return this->_a + this->_b ;}
    void show();
};

void myclass::show() {
    std::cout << this->add() << std::endl;
}

int main() {
    myclass ob(10, 4);
    ob.show();
    return 0;
}
