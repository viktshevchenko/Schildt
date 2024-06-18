 #include <iostream>

void neg(int &num){
    num = -num;
}

void neg(int *num){
    *num = -(*num);
}

int main() {
    int num1 = -1, num2 = -2;
    neg(num1);
    neg(&num2);
    std::cout << num1 << ' ' << num2 << std::endl;
    return 0;
}
