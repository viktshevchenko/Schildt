#include <iostream>
#include <cstring>

class strtype {
    char *p;
    int len;
public:
    strtype(char* s);
    ~strtype() { delete []p; }
    char* get() { return p; }
    strtype &operator=(strtype &ob);
    char &operator[](int i);
};

strtype::strtype(char *s) {
    len = strlen(s) + 1;
    p = new char [len];
    if(p == nullptr){
        std::cout << "Memory error" << std::endl;
        exit(1);
    }
    strcpy(p, s);
}

strtype &strtype::operator=(strtype &ob) {
    if(len < ob.len){
        delete []p;
        p = new char [ob.len];
        if(p == nullptr){
            std::cout << "Memory error" << std::endl;
            exit(1);
        }
    }
    len = ob.len;
    strcpy(p, ob.p);
    return *this;
}

char &strtype::operator[](int i) {
    if(i < 0 || i >= len){
        std::cout << "The boundaries of the array have been violated" << std::endl;
        exit(2);
    }
    return p[i];
}

int main() {
    strtype a("Hello"), b("apple");

    std::cout << a.get() << std::endl;
    std::cout << b.get() << std::endl;

    a = b;
    std::cout << a.get() << std::endl;
    std::cout << b.get() << std::endl;

    a[2] = 'f';

    std::cout << a[2] << std::endl;
    std::cout << b[0] << std::endl;

    return 0;
}
