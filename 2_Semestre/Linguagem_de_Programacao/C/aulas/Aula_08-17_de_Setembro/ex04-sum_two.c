#include <stdio.h>
#include <locale.h>

int sum_array(int *v, int *n, int x) {
    for(int *i = v; i < n; ++i) {
        for(int *j = v; j <= n; ++j) {
            if(*j + *i == x && j != i){ 
                return 1;
            }
        }
    }
    return 0;
}

void main() {
    setlocale(LC_ALL, "Portuguese");

     int v[] = {5, 9, 4};

    printf("%d", sum_array(v, v + 2, 18));
}