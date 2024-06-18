#include <iostream>
#include <cstring>

class mybase {
    char str[80];
public:
    mybase(char *s) { strcpy(str, s); }
    char *get() { return str; }
};

class myderived:public mybase {
    int len;
public:
    myderived(char *s): mybase(s) { len = strlen(s); }
    int getlen() { return len; }
    void show() { std::cout << get() << std::endl; }
};

int main() {
    myderived ob("Hello");

    ob.show();
    std::cout << ob.getlen() << std::endl;

    return 0;
}
