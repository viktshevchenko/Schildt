#include <iostream>
#include <ctime>

class t_and_d{
    time_t _systime;
public:
    t_and_d(time_t systime);
    void show();
};

t_and_d::t_and_d(time_t systime) {
    _systime = systime;
}

void t_and_d::show(){
    std::cout << ctime(&_systime) << std::endl;
}

int main() {
    time_t t = time(nullptr);
    t_and_d obj(t);
    obj.show();
    return 0;
}
