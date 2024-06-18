#include <iostream>

int dif(int a, int b) { return a - b; }
float dif(float a, float b) { return a - b; }

int main() {
    int (*fp1) (int, int);
    float (*fp2) (float, float);

    fp1 = dif;
    fp2 = dif;

    std::cout << fp1(10, 2) << std::endl;
    std::cout << fp2(11.0, 1.0) << std::endl;
    return 0;
}
