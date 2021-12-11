#include <stdio.h>

int hexadecimal(const char c) {
    char *z = "123456789ABCDEF";
    while (*z != '\0'){
        if (*z == c) return 1;++z;
    }
    return 0;
}   

void main() {
    char *c = 'C';
    printf("%d", hexadecimal(c));   
}