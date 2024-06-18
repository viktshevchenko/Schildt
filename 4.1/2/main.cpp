#include <iostream>

class squares {
    int _num, _sqr;
public:
    squares(int num) { _num = num; _sqr = num*num; }
    void show() { std::cout << _num << ' ' << _sqr << std::endl; }
};

int main() {
    squares sq[10] = {1, 2, 3, 4, 5,
                      6, 7, 8, 9, 10};
    for(int i = 0; i < 10; i++) sq[i].show();
    return 0;
}
