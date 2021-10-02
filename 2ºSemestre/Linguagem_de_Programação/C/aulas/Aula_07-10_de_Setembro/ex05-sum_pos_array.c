#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// pre-condição: n >= 0 && v[0:n) valido
// devolve: a soma dos elementos positivos de v[0,n)
int sum_pos_array(int *v, int n) {
    int s = 0;
    for (int *p = v; p < v + n; p++) {
        if(*p > 0) {
            s += *p;
        }
    }
    return s;
}

void main() {
    setlocale(LC_ALL, "Portuguese");

    int v[] = {4, -2, 5, 8, -1, 11, -6};
    
    printf("sum_pos_array: %d", sum_pos_array(v, sizeof(v)/sizeof(int)));

}