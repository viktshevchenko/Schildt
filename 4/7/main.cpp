#include <iostream>

class myclass {
    int _num;
public:
    myclass(int num) { _num = num; }
    friend bool isneg(myclass obj);
};

bool isneg(myclass obj){
    if(obj._num < 0) return true;
    return false;
}

int main() {
    myclass obj(-1);
    std::cout << isneg(obj) << std::endl;
    return 0;
}
