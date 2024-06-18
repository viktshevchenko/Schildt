#include <iostream>

int main() {
    std::string str;
    std::cout << "Enter string" << std::endl;
    getline(std::cin, str);
    std::cout << str.length() << std::endl;
    return 0;
}
