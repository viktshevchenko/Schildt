#include <iostream>

class vehicle {
    int num_wheels;
    int range;
public:
    vehicle(int w, int r) { num_wheels = w; range = r; }
    void showv() { std::cout << "num_wheels: " << num_wheels << ' ' << "range: " << range << std::endl; }
};

class car: public vehicle {
    int passengers;
public:
    car(int p, int w, int r): vehicle(w, r) { passengers = p; }
    void show() { showv(); std::cout << "passengers: " << passengers << std::endl; }
};

class truck: public vehicle {
    int loadlimit;
public:
    truck(int l, int w, int r): vehicle(w, r) { loadlimit = l; }
    void show() { showv(); std::cout << "Loadlimit: " << loadlimit << std::endl; }
};

int main() {
    car c(5, 4, 500);
    truck t(30000, 12, 1200);

    std::cout << "Car:" << std::endl;
    c.show();

    std::cout << "-----------------------------" << std::endl;

    std::cout << "Truck:" << std::endl;
    t.show();

    std::cout << "-----------------------------" << std::endl;

    return 0;
}
