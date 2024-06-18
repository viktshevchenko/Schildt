#include <iostream>

class dynarray {
    int *p;
    int size;
public:
    dynarray(int s);
    ~dynarray() { delete []p; }
    int &operator[](int i);
    dynarray &operator=(dynarray &ob);
};

dynarray::dynarray(int s) {
    size = s;
    p = new int [size + 1];
    if(p == nullptr){
        std::cout << "Memory error" << std::endl;
        exit(1);
    }
}

int &dynarray::operator[](int i){
    if(i < 0 || i >= size){
        std::cout << "The boundaries of array have been violated" << std::endl;
        exit(1);
    }
    return p[i];
}

dynarray &dynarray::operator=(dynarray &ob) {
    if(size != ob.size){
        std::cout << "Different sizes of arrays" << std::endl;
        exit(1);
    }
    for(int i = 0; i < size; i++)
        p[i] = ob.p[i];
    return *this;
}

int main() {
    dynarray ob1(10), ob2(10), ob3(100);

    ob1[3] = 7;
    ob3[0] = 10;

    ob2 = ob1;

    std::cout << ob2[3] << std::endl;
    std::cout << ob3[0] << std::endl;

    return 0;
}
