#include <iostream>
#include <cstring>

void reverse(char *str, int count = 0) {
    char temp;
    if(!count)
        count = strlen(str) - 1;
    else
        count--;
    for(int i = 0; i < count; i++){
        temp = str[i];
        str[i] = str[count];
        str[count--] = temp;
    }
}

int main() {
    char s1[] = "Hello!";
    char s2[] = "abcdefghijk";
    reverse(s1);
    reverse(s2, 3);
    std::cout << s1 << std::endl;
    std::cout << s2 << std::endl;
    return 0;
}
