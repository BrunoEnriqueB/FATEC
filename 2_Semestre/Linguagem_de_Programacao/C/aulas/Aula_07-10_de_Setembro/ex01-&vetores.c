#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");

    int v[100];

    /**
     * * Formas de criar um endere�o de mem�ria para um vetor 
     * ? Forma 1 e 2 s�o as mais usadas 
     * ! Forma 3 raramente usada, n�o � uma boa pr�tica
     * */
    
    int *p; p = &v[0];
    int *r; r = v;
    int *t; t = &v;

    printf("p: %p\nr: %p\nt: %p", p, r, t);

}