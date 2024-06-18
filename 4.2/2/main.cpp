#include <iostream>

class samp {
    int _a;
public:
    samp(int a) { _a = a; }
    int get_a() { return _a; }
};

int main() {
    samp ob[4][2] ={
            1, 2,
            3,4,
            5, 6,
            7, 8
    };
    samp *p;
    p = (samp*) ob;
    for(int i = 0; i < 4; i++)
        std::cout << ob[i][0].get_a() << ' ' << ob[i][1].get_a() << std::endl;
    return 0;
}
