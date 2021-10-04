#include <stdio.h>
#include <locale.h>

int ind_sort(int *b, int *e) {
    int *m = b;
    for (int *i = b + 1; i < e; i++) 
        if(*i < *m) m = i;
    return m;
}

void sel_sort(int *b, int *e) {
    for (;b < e - 1; ++b){
        int *m = ind_sort(b, e);
        int tmp = *b; *b = *m; *m = tmp;

    }
}

void main() {
    int v[] = {2, 5, 7, 8, 1, 6, 3, 4, 9, 10};

    sel_sort(v, v + 10);

    for(int i = 0; i < 10; i++) {
        printf("v[%d] = %d\n", i, v[i]);
    }
}