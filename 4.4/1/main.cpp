#include <iostream>

int main() {
    float *pf;
    long *pl;
    char *pc;

    pf = new float;
    pl = new long;
    pc = new char;

    if(!pf || !pl || !pc){
        std::cout << "Memory error" <<std::endl;
        exit(1);
    }

    *pf = 10.8;
    *pl = 10L;
    *pc = 'a';

    std::cout << *pf << ' ' << *pl << ' ' << *pc << std::endl;

    delete pf;
    delete pl;
    delete pc;

    return 0;
}
