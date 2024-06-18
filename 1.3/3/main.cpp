#include <iostream>

int main() {
    int a, b, d, min;
    std::cout << "Enter 2 number:" << std::endl;
    std::cin >> a >> b;
    min = a > b ? b : a;
    for (d = 2; d < min; d++)
        if(((a%d)==0) && ((b%d)==0)) break;
    if (d==min){
        std::cout << "There is no common multiple" << std::endl;
        return 0;
    }
    std::cout << "The smallest common multiple: " << d << std::endl;
    return 0;
}
