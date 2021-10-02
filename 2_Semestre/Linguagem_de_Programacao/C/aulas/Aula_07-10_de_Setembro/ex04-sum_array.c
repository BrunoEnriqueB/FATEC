#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// pre-condição: n >= 0 && v[0:n) válido
// devolve: a soma dos elementos de v[0:n)
int sum_array(int *v, int n) {
    int s = 0;
    for(int i = 0; i < n; i++) {
        s = s + v[i];
    }
    return s;
}

void main() {
    setlocale(LC_ALL, "Portuguese");

    int v[] = {4, -2, 5, 8, -1, 11, -6};
    
    printf("sum_array: %d\n", sum_array(v, sizeof(v)/sizeof(int)));

}