#include <iostream>

class stack {
    int* a;
    int i, _len;
public:
    stack(int len);
    ~stack();
    void push(int data);
    int pop();
};

stack::stack(int len) {
    i = 0;
    _len = len;
    a = (int*)malloc(len);
    if (a == nullptr) {
        std::cout << "Memory error" <<std::endl;
        exit(1); // как обойтись без exit()?
    }
}

stack::~stack() {
    std::cout << "Free memory..." << std::endl;
    free(a);
}

void stack::push(int data) {
    if (i < _len){
        a[i] = data;
        i++;
        std::cout << data << " was added in stack" << std::endl;
    }

    else
        std::cout << "Stack is full" << std::endl;
}

int stack::pop() {
    if (i > 0) {
        int data = a[--i];
        std::cout << data << " was extracted" << std::endl;
        return data;
    }
    else {
        std::cout << "Nothing in stack" << std::endl;
    }
    return -1;
}

int main() {
    stack stk(3);
    stk.push(1);
    stk.push(10);
    stk.push(33);
    stk.push(178787);
    stk.push(2);
    stk.push(22);
    stk.push(222);
    stk.push(2222);
    stk.pop();
    stk.pop();
    stk.pop();
    stk.pop();
    stk.pop();
    return 0;
}
