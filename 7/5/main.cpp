#include <iostream>

class array {
    int nums[10];
public:
    array();
    void set(int n[10]);
    void show();
    friend array operator+(array ob1, array ob2);
    friend array operator-(array ob1, array ob2);
    friend int operator==(array ob1, array ob2);
};

array::array() {
    for(int i = 0; i < 10; i++)
        nums[i] = 0;
}

void array::set(int *n) {
    for(int i = 0; i < 10; i++)
        nums[i] = *n++;
}

void array::show() {
    for(int i = 0; i < 10; i++)
        std::cout << nums[i] << std::endl;
}

array operator+(array ob1, array ob2) {
    array temp;
    for(int i = 0; i < 10; i++)
        temp.nums[i] = ob1.nums[i] + ob2.nums[i];
    return temp;
}


array operator-(array ob1, array ob2) {
    array temp;
    for(int i = 0; i < 10; i++)
        temp.nums[i] = ob1.nums[i] - ob2.nums[i];
    return temp;
}

int operator==(array ob1, array ob2) {
    int f = 1;
    for(int i = 0; i < 10; i++)
        if(ob1.nums[i] != ob2.nums[i])
            f = 0;
    return f;
}

int main() {
    array o1, o2, o3;
    int i[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    o1.set(i);
    o2.set(i);

    o3 = o1 + o2;
    o3.show();

    o3 = o1 - o2;
    o3.show();

    if(o1==o2)
        std::cout << "o1 == o2" << std::endl;
    else
        std::cout << "o1 != o2" << std::endl;

    if(o1==o3)
        std::cout << "o1 == o3" << std::endl;
    else
        std::cout << "o1 != o3" << std::endl;

    return 0;
}
