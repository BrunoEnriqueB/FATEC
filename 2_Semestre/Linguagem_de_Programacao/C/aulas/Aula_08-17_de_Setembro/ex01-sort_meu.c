#include <stdio.h>
#include <locale.h>

int ind_min(int *v, int b, int e) {
    int menor = v[b];
    int i = b;
    for(int cont = b; cont < e; cont++) {
        if (v[cont] < menor) {
            menor = v[cont];
            i = cont;
        }
    }
    return i;
}

int sort(int *v, int n) {
    for(int cont = 0; cont < n; cont++) {
        int menor_id = ind_min(v, cont, n);
        int troca = v[cont];
        v[cont] = v[menor_id];
        v[menor_id] = troca;

    }
}

void main() {
    setlocale(LC_ALL, "Portuguese");

    int v[] = {4, -2, 1, 5, 7, 1, 10, 6, 3, -9};

    sort(v, sizeof(v)/4);

    for(int i = 0; i < sizeof(v)/4; i++) {
        printf("v[%d] = %d\n", i, v[i]);
    }
}