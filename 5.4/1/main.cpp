#include <iostream>
#include <cstdlib>

long mystrtol(const char *start, char **end, int base = 10) {
    return strtol(start, end, base);
}
int main() {
    char start[] = "100234";
    char *end;
    std::cout << mystrtol(start, &end) << std::endl;
    std::cout << mystrtol(start, &end, 16) << std::endl;
    return 0;
}
