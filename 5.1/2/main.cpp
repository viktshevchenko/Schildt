#include <iostream>
#include <ctime>

class stopwatch {
    double begin, end;
public:
    stopwatch();
    stopwatch(clock_t t);
    ~stopwatch();
    void start();
    void stop();
    void show();
};

stopwatch::stopwatch() {
    begin = end = 0.0;
}

stopwatch::stopwatch(clock_t t) {
    begin = (double) t / CLOCKS_PER_SEC;
    end = 0.0;
}

stopwatch::~stopwatch(){
    std::cout << "Delete object" << std::endl;
    show();
}

void stopwatch::start() {
    begin = (double) clock() / CLOCKS_PER_SEC;
}

void stopwatch::stop() {
    end = (double) clock() / CLOCKS_PER_SEC;
};

void stopwatch::show() {
    std::cout << "Time: " << end-begin << std::endl;
}

int main() {
    stopwatch watch;
    watch.start();
    for(long i = 0; i < 32000000; i++);
    watch.stop();

    stopwatch watch2(clock());
    for(long i = 0; i < 2500000; i++);
    watch2.stop();
    return 0;
}
