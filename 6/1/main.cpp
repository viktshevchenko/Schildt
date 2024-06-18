#include <iostream>

class myclass {
    int x, y;
public:
    myclass(int i, int j) { x = i; y =j; }
    myclass() { x = y = 0; }
    void show();
};

void myclass::show() {
    std::cout << x << ' ' << y << std::endl;
}

int main() {
    myclass ob1(3, 4);
    myclass ob2;
    ob1.show();
    ob2.show();
    return 0;
}
