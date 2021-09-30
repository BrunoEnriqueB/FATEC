#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    int x = 10;
    int *p;

    p = &x;

    int **r = *p;

    printf("x: %d\n", x);
    printf("p: %p\n", p);
    printf("&p: %d\n", &p);
    printf("*p: %d\n", *p);
    printf("r: %d\n", r);
    printf("*r: %d\n", *r);
    printf("**r: %d\n", **r);


}