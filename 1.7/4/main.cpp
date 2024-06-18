/*
#include <iostream>
#include <windows.h>

void sleep(const char* time);
void sleep(int time);

int main() {
    std::cout << "Hello, World!" << std::endl;
    sleep("30");
    sleep(3);
    std::cout << "End" << std::endl;
    return 0;
}

void sleep(const char* time) {
    Sleep(atoi(time));
}

void sleep(int time){
    Sleep(time);
}*/ //Почему так не работает?

#include <iostream>

#define DELAY 100000000

void sleep(const char* time);
void sleep(int time);

int main() {
    std::cout << "Hello, World!" << std::endl;
    sleep("10");
    sleep(3);
    std::cout << "End" << std::endl;
    return 0;
}

void sleep(const char* time) {
    int t = atoi(time);
    for (; t; t--)
        for(long i = 0; i < DELAY; i++);
}

void sleep(int time){
    for (; time; time--)
        for(long i = 0; i < DELAY; i++);
}
