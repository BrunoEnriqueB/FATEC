#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");

    short v[10];

    for (int cont = 0; cont < 10; cont++) {
        short *p = &v[cont];

        printf("v[%d]: %p\n", cont, p);
    }
}