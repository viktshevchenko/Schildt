#include <iostream>
#include <cstring>

class strtype {
    char *_p;
    int _len;
public:
    strtype();
    strtype(char* str, int len);
    ~strtype() { delete [] _p; }
    char* getstring() { return _p; }
    int length() { return _len; }
};

strtype::strtype() {
    _p = new char[255];
    if (_p == nullptr) {
        std::cout << "Memory error" << std::endl;
        exit(1);
    }
    *_p = '\0';
    _len = 255;
}

strtype::strtype(char *str, int len) {
    _p = new char[len + 1];
    if(strlen(str) <= len){
        strcpy(_p, str);
        _len = strlen(str);
    }
    else{
        std::cout << "Length is not right" <<std::endl;
        delete [] _p;
    }
}

int main() {
    strtype ob1;
    char a[] = "Hello";
    strtype ob2(a, 7);
    std::cout << ob1.getstring() << ' ' << ob1.length() << std::endl;
    std::cout << ob2.getstring() << ' ' << ob2.length() << std::endl;
    std::cout  << std::endl;
    return 0;
}
