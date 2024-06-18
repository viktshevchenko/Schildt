#include <iostream>

class box {
    double _a, _b, _h, _v;
public:
    box(double a, double b, double h);
    void vox();
};

box::box(double a, double b, double h) {
    _a = a;
    _b = b;
    _h = h;
    _v = a * b * h;
}

void box::vox() {
    std::cout << "Volume: " << _v << std::endl;
}

int main() {
    box b1(2, 5, 8);
    box b2(6.33, 4.7, 6.1);

    b1.vox();
    b2.vox();

    return 0;
}
