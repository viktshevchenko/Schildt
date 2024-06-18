#include <iostream>
#include <cstring>

int main() {
    char *p;
    p = new char [10];
    strcpy(p, "hello!");
    printf("%s", p);
    delete [] p;
    return 0;
}
