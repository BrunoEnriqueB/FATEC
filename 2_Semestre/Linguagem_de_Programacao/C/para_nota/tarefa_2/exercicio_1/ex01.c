/**
 * * Escreva uma função que recebe um vetor de ints v, um int
 * * n > 0, e um int x, e devolve o número de elementos de v[0 : n) que são
*  * maiores que x.
*/

#include <stdio.h>
#include <locale.h>

int max_element(int *v, int n, int x) {
    int m = 0;
    for(int i = 0; i < n; ++i) {
        if (*(v + i) > x) {
            m += 1;
        }
    }
    return m;
}

void main() {
    setlocale(LC_ALL, "Portuguese");

    int v[] = {3, 6, 8, 1, 2, 10, 9, 5, 4};

    printf("O número de elementos de v[0:n) maiores que x são: %d", max_element(v, sizeof(v)/4, 4));
}