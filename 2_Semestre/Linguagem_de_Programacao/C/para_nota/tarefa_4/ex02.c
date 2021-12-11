#include <stdio.h>

int hexadecimal(const char *s) {
    char *z = "123456789ABCDEF";
    int curr = 0;
    while (*s != '\0') {
        while (*z != '\0') {
            if (*s == *z) curr = 1;
            ++z;
        }
        if (curr == 0) return 0;
        ++s;
    }
    return curr;
}   

void main() {
    char *s = '14ACD';
    printf("%d", hexadecimal(&s));   
}