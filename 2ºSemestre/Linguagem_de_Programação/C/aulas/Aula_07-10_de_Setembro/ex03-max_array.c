#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int max_array(int *p, int x) {
    int m = p[0];
    for(int i = 0; i < x; i++) {
        if(p[i] > m ) {
            m = p[i];
        }
    }
    return m;
}

void main() {
    setlocale(LC_ALL, "Portuguese");

    int v[] = {4, 9, 5, 8, 1, 11, 6};
    
    printf("max_array: %d", max_array(v, sizeof(v)/sizeof(int)));

}