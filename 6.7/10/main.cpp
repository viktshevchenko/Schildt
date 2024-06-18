#include <iostream>
#include <cstring>

#define SIZE 10;

class strtype {
    char *p;
    int len;
public:
    strtype();
    strtype(char *s);
    ~strtype() { delete [] p; }
    char *get() { return p; }
    strtype operator+(strtype &str2) const;
    strtype& operator=(strtype str);
    int operator<(strtype &str2) { return (len < str2.len); }
    int operator>(strtype &str2) { return (len > str2.len); }
    int operator==(strtype &str2) { return (len - str2.len == 0); }
};

strtype::strtype() {
    len = SIZE;
    p = new char [len];
    if(!p){
        std::cout << "Memory error" << std::endl;
        exit(1);
    }
}

strtype::strtype(char *s) {
    len = strlen(s) + 1;
    p = new char [len];
    if(!p){
        std::cout << "Memory error" << std::endl;
        exit(1);
    }
    strcpy(p, s);
}

strtype strtype::operator+(strtype &str2) const {
    char *str = new char [ len + str2.len + 1 ];
    if(!str){
        std::cout << "Memory error" << std::endl;
        exit(1);
    }
    strcpy(str, p);
    strcat(str, str2.p);
    strtype temp(str);
    delete [] str;
    return temp;
}

strtype& strtype::operator=(strtype str2) {
    if(len < str2.len) {
        delete [] p;
        p = new char [str2.len];
    }
    len = str2.len;
    strcpy(p, str2.p);
    return *this;
}

int main() {
    int i;
    char a[] = "Hello", b[] = "World", c[] = "Good";
    strtype s1(a), s2(b), s3(c),  s4;


    s3 = s1 + s2;
    std::cout << s3.get() << std::endl;

    std::cout << (s1 < s2) << std::endl;

    std::cout << (s1 < s3) << std::endl;

    std::cout << (s3 < s2) << std::endl;

    std::cout << (s1 == s2) << std::endl;

    std::cout << (s1 == s3) << std::endl;

    return 0;
}
