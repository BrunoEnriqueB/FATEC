#include <stdio.h>
#include <locale.h>


/**
 * ? b < e && v[b:e) � valido
 * ? devolve m em [b:e) tal que v[m] <= v[i] para cada i em [b:e)
 * * ou seja, m � a posi��o de um menor elemento de v[b:e)
*/
int ind_min(int *v, int b, int n) {
    int m = b;
    for(int i = b + 1; i < n; ++i) 
        if (v[i] < v[m]) m = i;
    return m;
}

/**
 * ? n >= 0 && v[0:n) � valida
 * ? produz um rearranjo ordenado de v[0:n), ou seja,
 * * ap�s a chamada, v[0] <= v[1] <= ... <= v[n-1]
*/
void sel_sort(int *v, int n) {
    for (int b = 0; b < n; b++) {
        int m = ind_min(v, b, n);
        int tmp = v[b];v[b] = v[m]; v[m] = tmp;
    }
}

void main() {
    int v[] = {2, 5, 7, 8, 1, 6, 3, 4, 9, 10};

    sel_sort(v, sizeof(v)/4);

    for(int i = 0; i < sizeof(v)/4; i++) {
        printf("v[%d] = %d\n", i, v[i]);
    }
    
}