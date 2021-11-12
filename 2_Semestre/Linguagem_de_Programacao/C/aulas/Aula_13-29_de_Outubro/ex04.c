#include <stdio.h>

struct aluno {
    int id;
    int notas[2];
};

double media(struct aluno *r) {
    return (r->notas[0] + r->notas[1])/2.0;
}

void main() {
    struct aluno bielzao = {1, {7, 8}};
    printf("media: %0.2f", media(&bielzao));
}