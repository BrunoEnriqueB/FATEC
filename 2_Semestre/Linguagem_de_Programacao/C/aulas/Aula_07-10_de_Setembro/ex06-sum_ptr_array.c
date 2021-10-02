#include <stdio.h>
#include <locale.h>

int sum_prt_array(int *i, int *f) {
    int s = 0;
    for(int *c = i; c < f; c++) {
        s += *c;
    }
    return s;
}

void main () {
    setlocale(LC_ALL, "Portuguese");

    int v[] = {4, -2, 1, 5, 7, 1, 10, 6, 3, -9};

    printf("sum_prt_array: %d", sum_prt_array(v + 2, v + 7));
}