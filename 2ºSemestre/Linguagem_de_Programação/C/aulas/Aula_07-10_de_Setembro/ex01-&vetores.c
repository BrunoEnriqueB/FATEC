#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");

    int v[100];

    /**
     * * Formas de criar um endereço de memória para um vetor 
     * ? Forma 1 e 2 são as mais usadas 
     * ! Forma 3 raramente usada, não é uma boa prática
     * */
    
    int *p; p = &v[0];
    int *r; r = v;
    int *t; t = &v;

    printf("p: %p\nr: %p\nt: %p", p, r, t);

}