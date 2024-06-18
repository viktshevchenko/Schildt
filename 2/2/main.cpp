#include <iostream>
#define SIZE 128

class info {
    char name[SIZE], address[SIZE];
public:
    void store(char* n,char* a);
    void display();
} num1;

void info::store(char* n, char* a){
    int i = 0;
    while(n != nullptr && i < SIZE)
        name[i++] = *n++;
    i = 0;
    while(a != nullptr && i < SIZE)
        address[i++] = *a++;
}

void info::display(){
    std::cout << "name: " << name << std::endl;
    std::cout << "address: " << address << std::endl;
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    char n[] = "name", a[] = "address";
    num1.store(n, a);
    num1.display();
    return 0;
}
