#include <iostream>

class a_type {
    double _a, _b;
public:
    a_type(double a,double b) { _a = a; _b = b; }
    void show() { std::cout << _a << ' ' << _b << std::endl; }
};

int main() {
    a_type arr[2][5] = {a_type(0, 1), a_type(2, 3),
                        a_type(4, 5), a_type(6, 7),
                        a_type(8, 9), a_type(10, 11),
                        a_type(12, 13), a_type(14, 15),
                        a_type(16, 17), a_type(18, 19)};
    a_type *p;
    p = (a_type*) arr;
    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 5; j++){
            p->show();
            p++;
        }
    return 0;
}
