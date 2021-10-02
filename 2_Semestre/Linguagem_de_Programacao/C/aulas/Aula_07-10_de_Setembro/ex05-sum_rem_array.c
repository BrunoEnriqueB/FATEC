#include <stdio.h>
#include <locale.h>

/**
 * * pre-condicao: n >= 0 && v[0:n) valido
 * ? devolve: a soma dos elementos de v[0:n)
 * ? que tem resto r quando dividido por 5
*/

int sum_rem_array(int *p, int m, int r) {
    int s = 0;
    for (int *v = p; v < p + m; v++) {
        if ((*v % 5) == r) {
            s += *v;
        }
    }
    return s;
}


void main() {
    setlocale(LC_ALL, "Portuguese");
    
    int v[] = {4, -2, 1, 5, 7, 1, 10, 6, 3, -9};
    int r = 1;

    printf("sum_rem_array: %d", sum_rem_array(v, sizeof(v)/sizeof(int), r));

}