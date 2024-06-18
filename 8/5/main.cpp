#include <iostream>

class base {
    int _i, _j;
public:
    base(int i, int j) { _i = i; _j = j; }
    void showij() { std::cout << _i << ' ' << _j << std::endl; }
};

class derived: public base {
    int _k;
public:
    derived(int k, int i, int j): base(i, j) { _k = k; }
    void show() { std::cout << _k << ' '; showij(); }
};

int main() {
    derived ob1(1, 2, 3);
    ob1.show();
    return 0;
}
