#include <iostream>
#include <cstring>

char* rev_str(char* s1);
char* rev_str(char* s1, char* s2);

int main() {
    char s2[80];
    char s1[] = "Hello, World!";
    std::cout << rev_str(s1) << std::endl;
    std::cout << rev_str(s1, s2) << std::endl;
    return 0;
}

char* rev_str(char *s1){
    int i, j = strlen(s1) - 1;
    char temp;
    for(i = 0; i <=(strlen(s1)/2); i++)
    {
        temp=s1[i];
        s1[i]=s1[j];
        s1[j--]=temp;
    }
    return s1;
}

char* rev_str(char* s1, char* s2){
    int i = strlen(s1) - 1, j = 0;
    while (i >= 0)
        s2[j++] = s1[i--];
    s2[j] = '\0';
    return s2;
}