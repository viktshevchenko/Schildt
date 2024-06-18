#include <iostream>
#include <cmath>

class area_c1 {
public:
    double _height, _width;
};

class rectangle: public area_c1 {
public:
    rectangle(double height, double width);
    double area();
};

class isosceles: public area_c1 {
public:
    isosceles(double height, double width);
    double area();
};

class cylinder: public area_c1 {
public:
    double _radius;
    cylinder(double height, double radius);
    double area();
};

rectangle::rectangle(double height, double width) : area_c1() {
    this->_height = height;
    this->_width = width;
}

isosceles::isosceles(double height, double width) : area_c1() {
    this->_height = height;
    this->_width = width;
}

cylinder::cylinder(double height, double radius) : area_c1() {
    this->_height = height;
    this->_radius = radius;
}

double rectangle::area() {
    return _height * _width;
}

double isosceles::area() {
    return _height * _width / 2;
}

double cylinder::area() {
    return 2 * 3.14 * pow(_radius, 2) + 3.14 * _radius * 2 * _height;
}

int main() {
    rectangle obj1 (2.4, 3.6);
    isosceles obj2 {2.4, 3.6};
    cylinder obj3 {5, 6.1};

    std::cout << obj1.area() << std::endl;
    std::cout << obj2.area() << std::endl;
    std::cout << obj3.area() << std::endl;
    return 0;
}
