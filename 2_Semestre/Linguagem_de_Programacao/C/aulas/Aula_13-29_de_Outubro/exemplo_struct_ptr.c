#include <stdio.h>
#include <locale.h>

struct ponto {
    double x, y;
};

struct ponto soma(struct ponto *p, struct ponto *r) { // cria uma fun��o soma que devolve a soma dos x's e y's
    struct ponto s = {.x = p->x + r->x, .y = p->y + r->y};
    //struct ponto s = {.x = (*p).x + (*r).x, .y = (*p).y + (*r).y}; Pode ser escrito assim tamb�m
    return s;
}

void main () {
    setlocale(LC_ALL, "Portuguese");

    struct ponto p = {10, 5}; //cria ponto p
    struct ponto r = p; r.x++; r.y++; // cria ponto r que � igual a p e incrementa 1 a mais no x e y
    struct ponto s = soma(&p, &r);
    printf("%f %f \n", s.x, s.y);
    
}