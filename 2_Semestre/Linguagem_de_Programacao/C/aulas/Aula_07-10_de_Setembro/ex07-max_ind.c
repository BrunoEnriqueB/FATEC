#include <stdio.h>
#include <locale.h>

int max_ind(int *p, int i) {
    int indice = *p;

    for(int *c = p; c < p + i; c++) {
        if(*c > indice) {
            indice = *c;
        }
    }
    return indice;
}

void main() {
    setlocale(LC_ALL, "Portuguese");

    int v[] = {4, -2, 1, 23, 7, 1, 10, 6, 3, -9};

    printf("max_ind: %d", max_ind(v, sizeof(v)/sizeof(int)));
}