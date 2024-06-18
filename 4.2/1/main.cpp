#include <iostream>

class samp{
    int _a, _b;
public:
    samp(int a, int b) { _a = a; _b = b; }
    int get_a() { return _a; }
    int get_b() { return _b; }
};

int main() {
    samp ob[4] = {samp(1, 2), samp(3, 4),
                  samp(5, 6), samp(7, 8)};
    samp *p;
    p = &ob[3];

    for(int i = 0; i < 4; i++){
        std::cout << p->get_a() << ' ' << p->get_b() << std::endl;
        p--;
    }
    return 0;
}
