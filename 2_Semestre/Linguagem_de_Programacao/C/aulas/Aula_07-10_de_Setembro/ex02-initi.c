#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int init(int *v, int x, int y) {

    for (int i = 0; i < y; i++) {
        v[i] = x;
    }
}

void main() {
    setlocale(LC_ALL, "Portuguese");

    int v[10];
    init(v, 0, 10);
    int w[100];
    init(w, 10, 100);

    for (int i = 0; i < 10; i++) {
        printf("v[%d]: %d\n", i, v[i]);
    }

    for (int i = 0; i < 100; i++) {
        printf("w[%d]: %d\n", i, w[i]);
    }

}