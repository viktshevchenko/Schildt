#include <iostream>

class pr2;

class pr1 {
    int _status;
public:
    pr1() { _status = 0; }
    void set_print(int status) { _status = status; }
    friend int inuse(pr1 o1, pr2 o2);
};

class pr2 {
    int _status;
public:
    pr2() { _status = 0; }
    void set_print(int status) { _status = status; }
    friend int inuse(pr1 o1, pr2 o2);
};

int inuse(pr1 o1, pr2 o2) {
    if(o1._status || o2._status) return 1;
    return 0;
}

int main() {
    pr1 o1;
    pr2 o2;

    if(!inuse(o1, o2)) std::cout << "Printer free" << std::endl;

    o1.set_print(1);
    if(inuse(o1, o2)) std::cout << "Printer is working now" << std::endl;

    o1.set_print(0);
    if(!inuse(o1, o2)) std::cout << "Printer free" << std::endl;

    return 0;
}
