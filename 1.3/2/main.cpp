#include <iostream>

int main() {
    int num;
    do {
        std::cout << "Enter feet (or 0 to finish): " << std::endl;
        std::cin >> num;
        if(num != 0)
            std::cout << num << " feet = " << num*12 << " inches" << std::endl;
    } while(num != 0);

    return 0;
}
