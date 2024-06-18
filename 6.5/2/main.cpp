#include <iostream>

class coord {
    int x, y;
public:
    coord() { x = 0; y = 0; }
    coord(int i, int j) { x = i; y = j; }
    void get_xy(int &i, int &j) { i = x; j = y; }
    friend coord operator*(coord ob1, coord ob2);
    friend coord operator*(coord ob1, int i);
    friend coord operator*(int i, coord ob1);
};

coord operator*(coord ob1, coord ob2) {
    coord temp;
    temp.x = ob1.x * ob2.x;
    temp.y = ob1.y * ob2.y;
    return temp;
}

coord operator*(coord ob1, int i) {
    coord temp;
    temp.x = ob1.x * i;
    temp.y = ob1.y * i;
    return temp;
}

coord operator*(int i, coord ob1) {
    coord temp;
    temp.x = ob1.x * i;
    temp.y = ob1.y * i;
    return temp;
}

int main() {
    coord o1(10, 10), o2(5, 3), o3;
    int x, y;
    o3 = o1 * o2;
    o3.get_xy(x, y);
    std::cout << x << ' ' << y << std::endl;

    o1 = o1 * 10;
    o1.get_xy(x, y);
    std::cout << x << ' ' << y << std::endl;

    o2 = 3 * o2;
    o2.get_xy(x, y);
    std::cout << x << ' ' << y << std::endl;

    return 0;
}
