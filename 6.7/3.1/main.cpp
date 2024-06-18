
#include <iostream>

class tree_d {
    int x, y, z;
public:
    tree_d(int i = 0, int j = 0, int k = 0) { x = i; y = j; z = k; }
    void get(int &i,  int &j, int &k) { i = x; j = y; k = z; }
    tree_d operator+(tree_d &ob2);
    tree_d operator-(tree_d &ob2);
    friend tree_d operator++(tree_d &ob);
    friend tree_d operator--(tree_d &ob);
};

tree_d tree_d::operator+(tree_d &ob2) {
    tree_d temp;
    temp.x = x + ob2.x;
    temp.y = y + ob2.y;
    temp.z = z + ob2.z;
    return temp;
}

tree_d tree_d::operator-(tree_d &ob2) {
    tree_d temp;
    temp.x = x - ob2.x;
    temp.y = y - ob2.y;
    temp.z = z - ob2.z;
    return temp;
}

tree_d operator++(tree_d &ob) {
    ob.x++;
    ob.y++;
    ob.z++;
    return ob;
}

tree_d operator--(tree_d &ob) {
    ob.x--;
    ob.y--;
    ob.z--;
    return ob;
}

int main() {
    int x, y, z;
    tree_d o1(10, 8, 6), o2(1, 2, 3), o3;

    o3 = o1 + o2;
    o3.get(x,y,z);
    std::cout << x << ' ' << y << ' ' << z << std::endl;

    o3 = o1 - o2;
    o3.get(x,y,z);
    std::cout << x << ' ' << y << ' ' << z << std::endl;

    ++o1;
    o1.get(x,y,z);
    std::cout << x << ' ' << y << ' ' << z << std::endl;

    --o2;
    o2.get(x,y,z);
    std::cout << x << ' ' << y << ' ' << z << std::endl;

    return 0;
}
