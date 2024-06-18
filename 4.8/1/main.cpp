#include <iostream>

class array {
    int _size_i, _size_j;
    int *p;
public:
    array(int size_i, int size_j);
    int &put(int i, int j);
    int get(int i, int j);
};

array::array(int size_i, int size_j) {
    p = new int (size_i * size_j);
    if(!p){
        std::cout << "Memory error" << std::endl;
        exit(1);
    }
    _size_i = size_i;
    _size_j = size_j;
}

int &array::put(int i, int j) {
    if(i < 0 || i >= _size_i || j < 0 || j >= _size_j){
        std::cout << "Error: array boundaries are violated" <<std::endl;
        exit(1);
    }
    return p[i * _size_j + j];
}

int array::get(int i, int j) {
    if(i < 0 || i >= _size_i || j < 0 || j >= _size_j){
        std::cout << "Error: array boundaries are violated" <<std::endl;
        exit(1);
    }
    return p[i * _size_j + j];
}

int main() {
    array arr(2, 3);
    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 3; j++)
            arr.put(i, j) = i + j;
    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 3; j++)
            std::cout << arr.get(i, j) << ' ';
    arr.put(10, 10);
    return 0;
}
