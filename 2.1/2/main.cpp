#include <iostream>
#include <ctime>

class stopwatch {
    double begin, end;
public:
    stopwatch();
    ~stopwatch();
    void start();
    void stop();
    void show();
} watch;

stopwatch::stopwatch() {
    begin = end = 0.0;
}

stopwatch::~stopwatch() {
    std::cout << "Delete object stopwatch" << std::endl;
    show();
}

void stopwatch::start(){
    begin = (double) clock() / CLOCKS_PER_SEC;
}

void stopwatch::stop(){
    end = (double) clock() / CLOCKS_PER_SEC;
}

void stopwatch::show() {
    std::cout << "Using time: " << end - begin << std::endl;
}

int main() {
    long i;

    watch.start();
    for(i = 0; i < 320000000; i++);
    watch.stop();

    return 0;
}
