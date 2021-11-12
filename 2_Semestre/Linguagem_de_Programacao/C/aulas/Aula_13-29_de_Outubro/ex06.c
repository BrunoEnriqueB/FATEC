#include <stdio.h>

struct aluno {
    int id;
    int notas[2];
};

double media_primeira_nota(struct aluno *b, struct aluno*e) {
    if (e - b == 0) return 0;
    double media = 0; int cont = 0;
    for (; b != e; ++b, cont++) {
        media += b->notas[0];
    }
    return media/cont;
}

void main() {
    struct aluno bielzao[] = {{1, {7, 8}}, {2, {9, 10}}, {3, {4, 7}}, {4, {2, 9}}};
    int n = sizeof(bielzao)/sizeof(struct aluno);
    double media = media_primeira_nota(bielzao, bielzao + 4);
    printf("media da primeira nota: %f", media);
}