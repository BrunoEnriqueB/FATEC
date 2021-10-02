#include <stdio.h>
#include <locale.h>

int max_ind_ptr(int *p, int i) {
    int *m = p;
    for(int *c = p; c < p + i; c++) {
        if(*c > *m) {
            m = c;
        }
    }
    return m;
}

void main() {
    setlocale(LC_ALL, "Portuguese");

     int v[] = {4, -2, 1, 23, 7, 1, 10, 30, 3, -9};

    printf("max_ind_ptr: %p", max_ind_ptr(v, sizeof(v)/4));

}