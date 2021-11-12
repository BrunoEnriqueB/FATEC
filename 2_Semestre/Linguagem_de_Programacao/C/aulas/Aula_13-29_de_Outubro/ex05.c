#include <stdio.h>

struct aluno {
    int id;
    int notas[2];
};

double media(struct aluno *b) {
    return (b->notas[0] + b->notas[1])/2.0;
}

struct aluno *media_max(struct aluno *b, struct aluno *e) {
    if (e - b == 1) return b;
    struct aluno *m = media_max(b + 1, e);
    return media(b) < media(b + 1) ? b + 1 : b;
}

void main() {
    struct aluno bielzao[] = {{1, {7, 8}}, {2, {9, 10}}, {3, {4, 7}}, {4, {2, 9}}};
    int n = sizeof(bielzao)/sizeof(struct aluno);
    struct aluno *media = media_max(bielzao, bielzao + n);
    printf("%d %d", media->notas[0], media->notas[1]);
}