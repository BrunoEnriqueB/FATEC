#include <stdio.h>

struct task {
    int start;
    int finish;
};

struct task *indice(struct task *b, struct task *e) {
    struct task *menor = b;
    for (; b != e; ++b) {
        if (b->finish - b->start < menor->finish - menor->start) {
            menor = b;
        }
    }
    return menor;
}

int horarios(struct task *v, int n) {
    struct task *tamanho = v + n;
    for (int i = 0; i < n; ++i) {
        struct task *t = indice(v, tamanho); 
        struct task temp = *v;
        *v = *t; 
        *t = temp; 
        ++v;
    }
}

int main() {
    struct task v[] = {{1, 3}, {2, 6}, {4, 7}, {6, 12}, {10, 20}};
    horarios(v, sizeof(v)/sizeof(struct task));
    for (int i = 0; i < sizeof(v)/sizeof(struct task); i++) {
        printf("inicio: %d, final: %d\n", v[i].start, v[i].finish);
    }
}