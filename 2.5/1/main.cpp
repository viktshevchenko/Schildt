#include <iostream>

#define SIZE 10

struct stack {
    stack();
    void push(char ch);
    char pop();
private:
    char stck[SIZE]{};
    int i;
};

stack::stack() {
    i = 0;
}

void stack::push(char ch) {
    if(i == SIZE){
        std::cout << "Stack is full" << std::endl;
        return;
    }
    stck[i++] = ch;
}

char stack::pop() {
    if(i == 0){
        std::cout << "Nothing in stack" << std::endl;
        return 0;
    }
    return stck[--i];
}

int main() {
    stack s1, s2;
    s1.push('d');
    s1.push('s');
    s2.push('r');
    s2.push('e');
    std::cout << s1.pop() << std::endl;
    std::cout << s1.pop() << std::endl;
    std::cout << s1.pop() << std::endl;
    std::cout << s2.pop() << std::endl;
    std::cout << s2.pop() << std::endl;
    std::cout << s2.pop() << std::endl;
    return 0;
}
