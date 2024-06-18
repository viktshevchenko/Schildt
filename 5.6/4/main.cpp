#include <iostream>
#define SIZE 10

class samp {
    int _a;
public:
    samp(int a) { _a = a; }
    int get_a() { return _a; }
};

int main() {
    samp ob(88);
    samp obarray[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << ob.get_a() << std::endl;
    for(int i = 0; i < SIZE; i ++)
        std::cout << obarray[i].get_a() << std::endl;
    return 0;
}
