#include <iostream>

union swap {
    unsigned char c[2];
    unsigned _i;
    swap(unsigned i);
    void swp();
};

swap::swap(unsigned int i) {
    _i = i;
}

void swap::swp() {
    unsigned char temp;
    temp = c[0];
    c[0] = c[1];
    c[1] = temp;
}

int main() {
    swap s(1);
    s.swp();
    std::cout << s._i << std::endl;

    return 0;
}