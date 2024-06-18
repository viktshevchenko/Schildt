#include <iostream>
#include <cstring>

class person {
    char _name[40];
    char _tel[14];
public:
    void set(char* name, char* tel);
    void show();
};

void person::set(char* name, char* tel) {
    strcpy(_name, name);
    strcpy(_tel, tel);
}

void person::show() {
    std::cout << _name << ' ' << _tel << std::endl;
}

int main() {
    person *p;
    p = new person;
    if(p == nullptr){
        std::cout << "Memory error" << std::endl;
        exit(1);
    }
    p->set("Vika", "89624414787");
    p->show();
    delete p;
    return 0;
}
