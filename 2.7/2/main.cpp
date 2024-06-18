#include <iostream>
#include <cstring>
#include <cstdlib>

class strtype {
    char *p;
    int len;
public:
    strtype(char *ptr) {
        len = strlen(ptr);
        p = (char*)malloc(len + 1);
        if(p == nullptr){
            std::cout << "Memory error" << std::endl;
            exit(1);
        }
        strcpy(p, ptr);
    }

    ~strtype() { free(p); }
    void show() { std::cout << p << " len: " << len << std::endl; }
};

int main() {
    strtype s1("Test");
    s1.show();

    return 0;
}
