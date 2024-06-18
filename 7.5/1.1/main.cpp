#include <iostream>

class building {
    int _floor, _room;
    float _square;
public:
    building(int floor, int room, float square) { _floor = floor; _room = room; _square = square; }
    friend void show(building &ob);
};

class house: public building {
    int _bathroom, _bedroom;
public:
    house(int floor, int room, float square, int bathroom, int bedroom): building(floor, room, square) {
        _bathroom = bathroom;
        _bedroom = bedroom;
    }
    void show_h() { show(*this); std::cout << _bathroom << ' ' << _bedroom << std::endl; }
};

class office: public building {
    int _fire_extinguisher, _telefone;
public:
    office(int floor, int room, float square, int fire_extinguisher, int telefone) : building(floor, room, square) {
        _fire_extinguisher = fire_extinguisher;
        _telefone = telefone;
    }
    void show_o() { show(*this); std::cout << _fire_extinguisher << ' ' << _telefone <<  std::endl; }
};

void show(building &ob) {
    std::cout << ob._floor << ' ' << ob._room << ' ' << ob._square << ' ';
}

int main() {
    office o1(30, 60, 1000, 100, 30);
    house h1(2,5,120,2,3);
    o1.show_o();
    h1.show_h();
    return 0;
}
