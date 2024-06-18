#include <iostream>

class coord {
    int x, y;
public:
    coord() { x = 0; y = 0; }
    coord(int i, int j) { x = i; y = j; }
    void get_xy(int &i, int &j) { i = x; j = y; }
    friend coord operator--(coord &ob1);
    friend coord operator--(coord &ob1, int notused);
};

coord operator--(coord &ob1) {
    ob1.x--;
    ob1.y--;
    return ob1;
}

coord operator--(coord &ob1, int notused) {
    ob1.x--;
    ob1.y--;
    return ob1;
}

int main() {
    coord ob1(10, 10);
    int x, y;

    ob1--;
    ob1.get_xy(x, y);
    std::cout << x << ' ' << y << std::endl;

    --ob1;
    ob1.get_xy(x, y);
    std::cout << x << ' ' << y << std::endl;

    return 0;
}
