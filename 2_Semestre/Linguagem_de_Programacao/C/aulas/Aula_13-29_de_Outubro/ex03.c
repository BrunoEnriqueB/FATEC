#include <stdio.h>
#include <math.h>

struct ponto {
    double x, y;
};

double norma_quadrado(struct ponto r, struct ponto e) {
    int a = e.x - r.x; int b = e.y - r.y;
    return (a * a + b * b); //soma o quadrado dos pontos x e y
}

struct ponto *mais_proximo(struct ponto r, struct ponto *b, struct ponto *e) {
    if (e - b == 1) return b;
    struct ponto *menor = b; 
    for (++b; b < e; ++b) if (norma_quadrado(r, *b) < norma_quadrado(r, *menor)) menor = b;
    return menor;
}

struct ponto *mais_proximo_rec(struct ponto r, struct ponto *b, struct ponto *e) {
    if (e - b == 1) return b;
    struct ponto *menor = mais_proximo_rec(r, b + 1, e);
    return norma_quadrado(r, *(b + 1)) < norma_quadrado(r, *(b)) ? b + 1 : b;
}


void main() {
    struct ponto vetor[] = {{3, 4}, {1, 2}, {3, 2}, {4, 5}, {2, 1}, {2, 2}}; 
    int n = sizeof(vetor)/sizeof(struct ponto);
    struct ponto r = {1, 3};
    struct ponto *value = mais_proximo_rec(r, vetor, vetor + n);

    printf("%f %f", value->x, value->y); //printa os valores
}