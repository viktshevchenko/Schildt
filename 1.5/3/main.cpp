#include <iostream>
#define SIZE 100

class Queue {
    int items[SIZE]{}, front, real; // зачем фигурные скобки?
public:
    Queue(){
        front = real = -1;
    }

    bool isFull() { // на что ругается?
        if (front == 0 && real == SIZE - 1) return true;
        if (front == real + 1) return true;
        return false;
    }

    bool isEmpty() { // на что ругается?
        if (front == -1) return true;
        else return false;
    }

    void enQueue(int element) {
        if (isFull()) std::cout << "Queue full" << std::endl;
        else{
            if (front == -1) front = 0;
            real = (real + 1) % SIZE;
            items[real] = element;
            std::cout << "Element " << element << " was added" << std::endl;
        }
    }

    int deQueue() {
        int element;
        if (isEmpty()){
            std::cout << "Nothing in queue" << std::endl;
            return -1;
        }
        else{
            element = items[front];
            if (front == real) front = real = -1;
            else front = (front + 1) % SIZE;
            return element;
        }
    }
};

int main() {
    Queue q;
    for (int i = 0; i < 102; i++) q.enQueue(i);
    for (int i = 0; i < SIZE; i++) std::cout << q.deQueue() << std::endl;

    return 0;
}
