#include <iostream>
#include <cmath>

class coord {
    int x, y;
public:
    coord() { x = 0; y = 0; }
    coord(int i, int j) { x = i; y = j; }
    void get_xy(int &i, int &j) { i = x; j = y; }
    coord operator+ (coord ob2);
    coord operator+ (int i);
    coord operator- (coord ob2);
    coord operator= (coord ob2);
    coord operator* (coord ob2);
    coord operator* (int i);
    coord operator/ (coord ob2);
    coord operator/ (int i);
};

coord coord::operator+(coord ob2) {
    coord temp;
    temp.x = x + ob2.x;
    temp.y = y + ob2.y;
    return temp;
}

coord coord::operator+(int i) {
    coord temp;
    temp.x = x + i;
    temp.y = y + i;
    return temp;
}

coord coord::operator-(coord ob2) {
    coord temp;
    temp.x = x - ob2.x;
    temp.y = y - ob2.y;
    return temp;
}

coord coord::operator=(coord ob2) {
    x = ob2.x;
    y = ob2.y;
    return *this;
}

coord coord::operator*(coord ob2) {
    coord temp;
    temp.x = x * ob2.x;
    temp.y = y * ob2.y;
    return temp;
}

coord coord::operator*(int i) {
    coord temp;
    temp.x = x * i;
    temp.y = y * i;
    return temp;
}

coord coord::operator/(coord ob2) {
    if(ob2.x == 0 || ob2.y == 0) {
        std::cout << "Division by zero" << std::endl;
        exit(1);
    }
    coord temp;
    temp.x = x / ob2.x;
    temp.y = y / ob2.y;
    return temp;
}

coord coord::operator/(int i) {
    if(i == 0) {
        std::cout << "Division by zero" << std::endl;
        exit(1);
    }
    coord temp;
    temp.x = x / i;
    temp.y = y / i;
    return temp;
}

int main() {
    coord o1(10, 10), o2(5, 3), o3;
    int x, y;

    o3 = o1 + o2;
    o3.get_xy(x, y);
    std::cout << x << ' ' << y << std::endl;

    o3 = o1 + 100;
    o3.get_xy(x, y);
    std::cout << x << ' ' << y << std::endl;

    o3 = o1 - o2;
    o3.get_xy(x, y);
    std::cout << x << ' ' << y << std::endl;

    o3 = o1;
    o3.get_xy(x, y);
    std::cout << x << ' ' << y << std::endl;

    o3 = o1 * o2;
    o3.get_xy(x, y);
    std::cout << x << ' ' << y << std::endl;

    o3 = o1 * 10;
    o3.get_xy(x, y);
    std::cout << x << ' ' << y << std::endl;

    o3 = o1 / o2;
    o3.get_xy(x, y);
    std::cout << x << ' ' << y << std::endl;

    o3 = o1 / 3;
    o3.get_xy(x, y);
    std::cout << x << ' ' << y << std::endl;

    //o3 = o2 / 0;
    //o3.get_xy(x, y);
    //std::cout << x << ' ' << y << std::endl;

    return 0;
}
