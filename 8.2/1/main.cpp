#include <iostream>

void showflags() {
    std::ios::fmtflags f;
    f = std::cout.flags(); // получение установок флагов формата

    if (f & std::ios::skipws) std::cout << "skipws установлен\n";
    else std::cout << "skipws сброшен\n";

    if (f & std::ios::left) std::cout << "left установлен\n";
    else std::cout << "left сброшен\n";

    if (f & std::ios::right) std::cout << "right установлен\n";
    else std::cout << "right сброшен\n";

    if (f & std::ios::internal) std::cout << "internal установлен\n";
    else std::cout << "internal сброшен\n";

    if (f & std::ios::dec) std::cout << "dec установлен\n";
    else std::cout << "dec сброшен\n";

    if (f & std::ios::oct) std::cout << "oct установлен\n";
    else std::cout << "oct сброшен\n";

    if (f & std::ios::hex) std::cout << "hex установлен\n";
    else std::cout << "hex сброшен\n";

    if (f & std::ios::showbase) std::cout << "showbase установлен\n";
    else std::cout << "showbase сброшен\n";

    if (f & std::ios::showpoint) std::cout << "showpoint установлен\n";
    else std::cout << "showpoint сброшен\n";

    if (f & std::ios::showpos) std::cout << "showpos установлен\n";
    else std::cout << "showpos сброшен\n";

    if (f & std::ios::uppercase) std::cout << "uppercase установлен\n";
    else std::cout << "uppercase сброшен\n";

    if (f & std::ios::scientific) std::cout << "scientific установлен\n";
    else std::cout << "scientific сброшен\n";

    if (f & std::ios::fixed) std::cout << "fixed установлен\n";
    else std::cout << "fixed сброшен\n";

    if (f & std::ios::unitbuf) std::cout << "unitbuf установлен\n";
    else std::cout << "unitbuf сброшен\n";

    if (f & std::ios::boolalpha) std::cout << "boolalpha установлен\n";
    else std::cout << "boolalpha сброшен\n";
    std::cout << "\n";
}

int main() {
    system("chcp 65001");

    std::cout.setf(std::ios::showpos);

    std::cout << 100 << std::endl;

    showflags();
    return 0;
}
