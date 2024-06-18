#include <iostream>


class dynarray {
    int *p;
    int size;
public:
    dynarray(int s);
    ~dynarray() { delete []p; }
    int &put(int i);
    int get(int i);
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

int &dynarray::put(int i) {
    if(i < 0 || i >= size) {
        std::cout << "The boundaries of array have been violated" << std::endl;
        exit(1);
    }
    return p[i];
}

int dynarray::get(int i) {
    if(i < 0 || i >= size) {
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
    int i;
    dynarray ob1(10), ob2(10), ob3(100);
    ob1.put(3) = 10;
    i = ob1.get(3);
    std::cout << i << std::endl;

    ob2 = ob1;
    i = ob2.get(3);
    std::cout << i << std::endl;

    ob1 = ob3;

    return 0;
}
