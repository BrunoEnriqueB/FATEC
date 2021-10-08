/**
 * * Escreva uma função que recebe um vetor de ints v, e um int
 * * n > 0, e devolve o produto dos elementos positivos de v[0 : n).
*/

#include <stdio.h>
#include <locale.h>

int array_pos(int *v, int n) {
    int produto = 1;
    for(int i = 0; i < n; ++i) {
        if (*(v + i) > 0) {
            produto *= *(v+i);
        }
    }
    return produto;
}

void main() {   
    setlocale(LC_ALL, "Portuguese");

    int v[] = {3, 5, -2, -6, 3};

    printf("Produto dos elementos positivos: %d", array_pos(v, sizeof(v)/4));

}