#include <iostream>

class myclass {
    int _x, _y;
public:
    myclass(int x = 0, int y = 0) { _x = x; _y = y; }
    void show() { std::cout << _x << ' ' << _y << std::endl; }
};

int main() {
    myclass ob1(1, 2);
    myclass ob2;
    ob1.show();
    ob2.show();
    return 0;
}
