#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int zera_vetor(int *p, int n) {
    for (int i = 0; i < n; i++) {
        p[i] = 0;
    }
}

void main() {
    setlocale(LC_ALL, "Portuguese");

    int v[100];
    zera_vetor(v, 100);

    for (int i = 0; i < 100; i++) {
        printf("%d\n", v[i]);
    }
}