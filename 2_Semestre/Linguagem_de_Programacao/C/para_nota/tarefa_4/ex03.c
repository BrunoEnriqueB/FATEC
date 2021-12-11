#include <stdio.h>

struct task {
    int start;
    int finish;
};

int horarios(struct task *v, int n, int h) {
    int cont = 0;
    int *tamanho = v + n;
    while (v != tamanho) {
        if (v->start == h) cont++;
        ++v;
    }
    return cont;
}

int main() {
    struct task v[] = {{1, 3}, {2, 6}, {4, 7}, {1, 6}, {6, 12}, {10, 20}};
    printf("%d", horarios(v, sizeof(v)/sizeof(struct task), 1));
}

