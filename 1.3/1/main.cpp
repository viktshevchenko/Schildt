#include <iostream>

int main() {
    float number, pay;

    std::cout << "Enter the number of hours worked by the staff and the amount of hourly pay: " << std::endl;
    std::cin >> number >> pay;
    std::cout << "Total salary: " << number*pay;

    return 0;
}
