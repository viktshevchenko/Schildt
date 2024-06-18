#include <iostream>

class letters {
    char _ch;
public:
    letters(char ch) { _ch = ch; }
    char get_ch() { return _ch; }
};

int main() {
    letters let[10] = {letters('A'), letters('B'), letters('C'),
                       letters('D'), letters('E'),letters('F'),
                       letters('G'), letters('H'), letters('I'),
                       letters('J')};
    for(int i = 0; i < 10; i++) std::cout << let[i].get_ch() << std::endl;
    return 0;
}
