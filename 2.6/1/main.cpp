#include <iostream>

inline int abs(int num){
    return (num > 0) ? num : -num;
}

inline long abs(long num){
    return (num > 0) ? num : -num;
}
inline double abs(double num){
    return (num > 0) ? num : -num;
}

int main() {
    std::cout << abs(-22) << std::endl;
    std::cout << abs(-244L) << std::endl;
    std::cout << abs(-22.45635347) << std::endl;
    return 0;
}
