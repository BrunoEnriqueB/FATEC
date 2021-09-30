#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");

    int x = 10;
    int *p = &x;

    printf("p: %p       p+1 = %p\n", p, p+1);
    double y = 10;
    double *t = &y;

    printf("t: %p       t+1 = %p", t, t+1);
}  