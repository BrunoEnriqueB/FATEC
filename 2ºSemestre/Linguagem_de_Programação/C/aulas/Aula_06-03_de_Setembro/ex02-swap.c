#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int swap(int *x, int *y) {
    int t = *x;

    *x = *y;
    *y = t;

}

int swap_wrong(int x, int y) {
    int t = x;

    x = y;
    y = t;

}

void main() {
    setlocale(LC_ALL, "Portuguese");

    int x = 10;
    int y = 20;

    swap(&x, &y);
    printf("x: %d           y: %d\n", x, y);
    swap_wrong(x, y);
    printf("x: %d           y: %d", x, y);

}