#include <iostream>

#define SIZE 10

class stack {
    char stck[SIZE]{};
    int tos;
public:
    stack() {tos = 0;};
    void push(char ch) {
        if(tos == SIZE){
            std::cout << "Stack is full" <<std::endl;
            return;
        }
        stck[tos++] = ch;
    }
    char pop() {
        if(tos == 0){
            std::cout << "Nothing in stack" << std::endl;
            return 0;
        }
        return stck[--tos];
    }
};

int main() {
    stack s1;
    s1.push('d');
    s1.push('l');
    std::cout << s1.pop() << std::endl;
    std::cout << s1.pop() << std::endl;
    return 0;
}
