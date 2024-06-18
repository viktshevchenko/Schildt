#include <iostream>

#define SIZE 10

class stack {
    char stck[SIZE];
    int tos;
public:
    void init();
    void push (char ch);
    char pop();
};

void stack::init() {
    tos=0;
}

void stack::push(char ch) {
    if (tos==SIZE) {
        std::cout << "Stack full" << std::endl;
        return;
    }
    stck[tos] = ch;
    tos++;
}

char stack::pop(){
    if (tos==0) {
        std::cout << "Nothing in stack" << std::endl;
        return 0;
    }
    tos--;
    return stck[tos];
}
int main() {

    stack s1{}, s2{}; // спросить про инициальзацию
    int i;

    s1.init();
    s2.init();

    s1.push('a');
    s2.push('x');
    s1.push('b');
    s2.push('y');
    s1.push('c');
    s2.push('z');

    for(i=0; i<3; i++) std::cout << "symbol from s1: " << s1.pop() << std::endl;
    for(i=0; i<3; i++) std::cout << "symbol from s2: " << s2.pop() << std::endl;

    return 0;
}
