#include <iostream>
#include <cstring>

class strtype {
    char *_p;
    int len;
public:
    strtype(char *p);
    ~strtype() { delete [] _p; }
    void show() { std::cout << _p << " len: " << len << std::endl; }
};

strtype::strtype(char *p) {
    len = strlen(p);
    _p = new char (len + 1);
    if(!p) {
        std::cout << "Memory error" << std::endl;
        exit(1);
    }
    strcpy(_p, p);
}

int main() {
    strtype s1("Hello"), s2("World!");
    s1.show();
    s2.show();
    return 0;
}
