#include <iostream>

class tree_d {
    int x, y, z;
public:
    tree_d() { x = 0; y = 0; z = 0; }
    tree_d(int i, int j, int k) { x = i, y = j, z = k; }
    void get(int &i, int &j, int &k) { i = x, j = y,  k = z; }
    friend tree_d operator+(tree_d ob1, tree_d ob2);
    friend tree_d operator+(tree_d ob1, int i);
    friend tree_d operator+(int i, tree_d ob1);
};

tree_d operator+(tree_d ob1, tree_d ob2) {
    tree_d temp;
    temp.x = ob1.x + ob2.x;
    temp.y = ob1.y + ob2.y;
    temp.z = ob1.z + ob2.z;
    return temp;
}

tree_d operator+(tree_d ob1, int i) {
    tree_d temp;
    temp.x = ob1.x + i;
    temp.y = ob1.y + i;
    temp.z = ob1.z + i;
    return temp;
}

tree_d operator+(int i, tree_d ob1) {
    tree_d temp;
    temp.x = ob1.x + i;
    temp.y = ob1.y + i;
    temp.z = ob1.z + i;
    return temp;
}

int main() {
    int x, y, z;
    tree_d o1(1, 2, 3), o2(4, 5, 6), o3;

    o3 = o1 + o2;
    o3.get(x, y, z);
    std::cout << x << ' ' << y << ' ' << z << std::endl;

    o3 = o1 + 100;
    o3.get(x, y, z);
    std::cout << x << ' ' << y << ' ' << z << std::endl;

    o3 = 40 + o2;
    o3.get(x, y, z);
    std::cout << x << ' ' << y << ' ' << z << std::endl;

    return 0;
}
