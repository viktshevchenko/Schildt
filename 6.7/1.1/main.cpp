#include <iostream>

class coord {
    int x, y;
public:
    coord() { x = 0; y = 0; }
    coord(int i, int j) { x = i; y = j; }
    void get_xy(int &i, int &j) { i = x; j = y; }
    coord operator>>(int i);
    coord operator<<(int i);
};

coord coord::operator>>(int i) {
    coord temp;
    temp.x = x >> i;
    temp.y = y >> i;
    return temp;
}

coord coord::operator<<(int i) {
    coord temp;
    temp.x = x << i;
    temp.y = y << i;
    return temp;
}

int main() {
    int x, y;
    coord o1(10, 7), o2;

    o2 = o1 << 1;
    o2.get_xy(x, y);
    std::cout << x << ' ' << y << std::endl;

    o2 = o1 >> 2;
    o2.get_xy(x, y);
    std::cout << x << ' ' << y << std::endl;

    return 0;
}
