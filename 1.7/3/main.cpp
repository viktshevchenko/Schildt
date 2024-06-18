#include <iostream>

char min(char a, char b);
int min(int a, int b);
double min(double a, double b);

int main() {
    std::cout << "The lesser of char 5 and char 4: " << min('5', '4') << std::endl;
    std::cout << "The lesser of int 50 and int 10: " << min(50, 10) << std::endl;
    std::cout << "The lesser of double 19.0009 and double 19.0008: "
        << min(19.0009, 19.0008) << std::endl;
    return 0;
}

char min(char a, char b){
    return (a < b) ? a : b;
}

int min(int a, int b){
    return (a < b) ? a : b;
}

double min(double a, double b){
    return (a < b) ? a : b;
}