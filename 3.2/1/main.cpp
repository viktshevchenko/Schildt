#include <iostream>

#define SIZE 10

class stack {
    char stck[SIZE];
    int tos;
public:
    stack() { tos = 0; }
    void push(char ch);
    char pop();
};

void stack::push(char ch) {
    if(tos == SIZE){
        std::cout << "Stack is full" << std::endl;
        return;
    }
    stck[tos++] = ch;
}

char stack::pop() {
    if(tos == 0){
        std::cout << "Nothing in stack" << std::endl;
        return 0;
    }
    return stck[--tos];
}

void showstack(stack obj) {
    char c;
    while((c = obj.pop()))
        std::cout << c << " ";
    std::cout << std::endl;
}

int main() {
    stack s;
    s.push('h');
    s.push('l');
    s.push('w');
    showstack(s);
    return 0;
}
