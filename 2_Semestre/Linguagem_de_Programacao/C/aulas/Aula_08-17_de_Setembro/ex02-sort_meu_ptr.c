#include <stdio.h>
#include <locale.h>

int ind_min(int *b, int *e) {
    int *menor = b;
    for(int *cont = b + 1; cont < e; cont++) {
        if (*cont < *menor) menor = cont;
    }
    return menor;


}

int sort(int *b, int *e) {
    for(; *b < *e - 1; b++) {
        int *menor = ind_min(b, e);
        int tmp = *b; *b = *menor; *menor = tmp;
    }

}

void main() {
    setlocale(LC_ALL, "Portuguese");

    int v[] = {4, -2, 1, 5, 7, 1, 10, 6, 3, -9};

    sort(v, v + sizeof(v)/4);

    for(int i = 0; i < sizeof(v)/4; i++) {
        printf("v[%d] = %d\n", i, v[i]);
    }
}

