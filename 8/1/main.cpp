#include <iostream>

class airship {
    int passengers;
    float cargo;
public:
    airship(int p, float c) { passengers = p; cargo = c; }
    void get(int &p, float &c) { p = passengers; c = cargo; }
};

enum type {vint, react};

class airplan: public airship {
    enum type _type;
    float range;
public:
    airplan(enum type t, float r, int p, float c): airship(p, c) { _type = t; range = r; }
    void get_airplan(enum type &t, float &r) { t = _type; r = range; }
};

enum gas {hydrogen, helium};

class balloon: public airship {
    enum gas _gas;
    float ceiling;
public:
    balloon(enum gas g, float cei, int p, float c): airship(p, c) { _gas = g; ceiling = cei; }
    void get_ballon(enum gas &g, float &cei) { g = _gas; cei = ceiling; }
};

int main() {
    airplan a(vint, 100, 30, 200);
    balloon b(helium, 8.9, 0, 40);

    enum type t;
    enum gas g;
    float r, cei, c;
    int p;

    a.get(p, c);
    a.get_airplan(t, r);
    std::cout << "airplan: " << t << ' ' << r << ' '  << p << ' ' << c << std::endl;

    b.get(p, c);
    b.get_ballon(g, cei);
    std::cout << "balloon: " << g << ' ' << cei << ' ' << p << ' ' << c << std::endl;

    return 0;
}
