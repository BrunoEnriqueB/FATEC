#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

bool prefixo(int *v, int *n, int *w, int *m) {
    for(int *i = v; i < n; ++i, ++w) {
        if (*i != *w) {
            return false;
        }
    }
    return true;
}

void main() {   
    setlocale(LC_ALL, "Portuguese");

    int v[] = {2, 5, 7, 8};
    int p[] = {2, 5, 7, 9, 8, 12};

    if(prefixo(v, v + 4, p, v + 6) == true) {
        printf("É prefixo!");
    } else {
        printf("Não é prefixo!");
    }
}
