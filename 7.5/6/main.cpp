#include <iostream>

class vehicle {
    int num_wheels, range;
public:
    vehicle(int w, int r) { num_wheels = w; range = r; }
    void showv() { std::cout << "Num wheels: " << num_wheels << " Range: " << range << std::endl; }
};

enum motor {
    gas, electric, diesel
};

class motorized: virtual public vehicle {
    enum motor mtr;
public:
    motorized(enum motor m, int w, int r): vehicle(w, r) { mtr = m; }
    void showm(){
        switch(mtr){
            case gas:
                std::cout << "on gas" << std::endl;
                break;
            case electric:
                std::cout << "electric" << std::endl;
                break;
            case diesel:
                std::cout << "disel" << std::endl;
                break;
        }
    }
};

class road_use: virtual public vehicle {
    int passengers;
public:
    road_use(int p, int w, int r): vehicle(w, r) { passengers = p; }
    void showr() { std::cout << "Passengers: " << passengers << std::endl; }
};

enum steering {
    power, rack_pinion, manual
};

class car: public motorized, public road_use {
    enum steering strng;
public:
    car(enum steering s, enum motor m, int w, int r, int p):
            road_use(p, w, r), motorized(m, w, r), vehicle(w, r) { strng = s; }
    void show() {
        showv(); showr(); showm();
        switch(strng) {
            case power:
                std::cout << "Power" << std::endl;
                break;
            case rack_pinion:
                std::cout << "Rack pinion" << std::endl;
                break;
            case manual:
                std::cout << "Manual" << std::endl;
                break;
        }
    }
};

int main() {
    car c(power, gas, 4, 500, 5);
    c.show();
    return 0;
}
