#include <iostream>

class array {
    int nums[10];
public:
    array();
    void set(int n[10]);
    void show();
    array operator++();
    friend void operator--(array &ob);
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

array array::operator++() {
    for(int i = 0; i < 10; i++)
        nums[i]++;
    return *this;
}

void operator--(array &ob) {
    for(int i = 0; i < 10; i++)
        ob.nums[i]--;
}

int main() {
    array o1, o2;
    int i[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    o1.set(i);
    o2.set(i);

    ++o1;
    o1.show();

    --o2;
    o2.show();

    return 0;
}
