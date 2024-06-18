#include <iostream>

class planet {
protected:
    double distance;
    int revolve;
public:
    planet(double d, int r) { distance = d; revolve = r; }
};

class earth: public planet {
    double circumference;
public:
    earth(double d, int r): planet(d, r) { circumference = 2 * r * 3.1416; }
    void show() { std::cout << distance << ' ' << revolve << ' ' << circumference; }
};

int main() {
    earth ob(93000000, 365);
    ob.show();
    return 0;
}
