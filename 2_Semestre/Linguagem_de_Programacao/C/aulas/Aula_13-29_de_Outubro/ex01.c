#include <stdio.h>

struct ponto {
    double x, y;
};

int primeiro_quadrante(struct ponto *p, int n) {
    int cont = 0;
    for (int i = 0; i < n; ++i) if (p[i].x >= 0 && p[i].y >= 0) cont++;
    return cont;
}

int primeiro_quadrante_ptr(struct ponto *b, struct ponto *e) {
    int c = 0;
    for(; b < e; ++b) if (b->x >= 0 && b->y >= 0) c++; 
    return c;
}

void main() {

    struct ponto vetor[] = {{3, 4}, {-1, 2}, {3, -2}, {4, 5}, {2, 1}};
    int n = sizeof(vetor)/sizeof(struct ponto);
    printf("Voce tem %d pontos no primeiro quadrante\n", primeiro_quadrante(vetor, n));
    printf("Voce tem %d pontos no primeiro quadrante", primeiro_quadrante_ptr(vetor, vetor + n));
}