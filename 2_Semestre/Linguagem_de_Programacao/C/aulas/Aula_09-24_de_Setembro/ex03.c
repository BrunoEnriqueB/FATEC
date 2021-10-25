#include <stdio.h>
#include <locale.h>

// Recebe b : e, [b:e) válido e x : int. 
//Devolve ou p: int* tal que *p == x ou e, caso contrário

int *busca_meu(int *b, int *e, int x) {
    for (int *i = b; i != e;++i) {
        if (*i == x) return i;
    }
    return e;
}

int *busca_prof(int *b, int *e, int x) {
    while (b != e && *b != x) b++;
    return b;
}

void main() {
    setlocale(LC_ALL, "Portuguese");

    int v[] = {10, 6, 8, 3, 5, 4, 7};
    int *p = busca_prof(v, v+7, 1);
    if (p == v+7) printf("elemento não encontrado");
    else printf("elemento: %d", *p);
}