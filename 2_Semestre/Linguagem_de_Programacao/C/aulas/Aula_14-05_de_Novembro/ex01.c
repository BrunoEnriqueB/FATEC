#include <stdio.h>
#include <locale.h>

struct task {
    int start, finish;
};

int task_sort (struct task *ts, int n) {
    for (; n > 1; --n) {
        int m = ind_max(ts, n);
        struct task tmp = ts[n-1];
        ts[n-1] = ts[m];
        ts[m] = tmp;
    }
}

int int_max (struct task *ts, int n) {
    int m = 0;
    for (int i = 1; i < n; ++i) {
        if (ts[i].finish > ts[m].finish) m = 1;
    }
    return m;
}

void print_vec(struct horario *b, struct horario *e) {
    for (; b != e; ++b) printf("inicio: %d, final: %d\n", b->start, b->finish);
}

void main() {
    setlocale(LC_ALL, "Portuguese");

    struct task vet [] = {{1,2}, {6,7}, {3,4}, {5,9}, {2,6}, {7,8}, {10,12}, {2,4}, {1,3}};

    task_sort(vet, sizeof(vet)/sizeof(struct task));
    print_vec(vet, sizeof(vet)/sizeof(struct task));
}
