#include <iostream>

class summation {
    int _num;
    long _sum;
public:
    void set_num(int num);
    void show_num() { std::cout << "The sum of the numbers that make up " << _num
        << " is " << _sum << std::endl; }
};

void summation::set_num(int num) {
    _num = num;
    _sum = 0;
    for(int i = 1; i <= num; i++)
        _sum += i;
}

summation make_sum() {
    summation temp{};
    int num;
    std::cout << "Enter the number:" << std::endl;
    std::cin >> num;
    temp.set_num(num);
    return temp;
}

int main() {
    summation obj1 = make_sum();
    obj1.show_num();
    return 0;
}
