#include <iostream>

class tree_d {
    int x, y, z;
public:
    tree_d(int i = 0, int j = 0, int k = 0) { x = i; y = j; z = k; }
    void get(int &i, int &j, int &k) { i = x, j = y; k = z; }
    int operator==(tree_d ob2);
    int operator!=(tree_d ob2);
    int operator||(tree_d ob2);
};

int tree_d::operator==(tree_d ob2) {
    return (x == ob2.x) && (y == ob2.y) && (z == ob2.z);
}

int tree_d::operator!=(tree_d ob2) {
    return (x != ob2.x) || (y != ob2.y) || (z != ob2.z);
}

int tree_d::operator||(tree_d ob2) {
    return (x || ob2.x) && (y || ob2.y) && (z || ob2.z);
}

int main() {
    int i;
    tree_d o1(1, 2, 3), o2(4, 5, 6), o3(1, 2, 3);

    i = o1 == o2;
    std::cout << i << std::endl;
    i = o1 == o3;
    std::cout << i << std::endl;

    i = o1 != o2;
    std::cout << i << std::endl;
    i = o1 != o3;
    std::cout << i << std::endl;

    i = o1 || o2;
    std::cout << i << std::endl;
    i = o1 || o3;
    std::cout << i << std::endl;

    return 0;
}
