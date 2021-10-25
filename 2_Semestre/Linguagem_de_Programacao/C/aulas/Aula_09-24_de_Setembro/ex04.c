#include <stdio.h>
#include <locale.h>

// Receba b, e : ptr [b, e) válido e transforme todos os numeros
// pares do vetor em 0, e o contrário em 1

int binary_vector(int *b, int *e) {
    for (;b < e; ++b) {
        *b = *b%2 == 0 ? 0 : 1;
    }
}

int print_vec(int *b, int *e) {
    for (; b < e; ++b) {
        printf("%d ", *b);
    }
}

void main() {
    setlocale(LC_ALL, "Portuguese");

    int v[] = {10, 8, 3, 1, 6, 8};

    binary_vector(v, v+6);
    print_vec(v, v+6);
}