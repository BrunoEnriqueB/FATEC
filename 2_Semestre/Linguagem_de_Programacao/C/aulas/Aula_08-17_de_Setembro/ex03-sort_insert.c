#include <stdio.h>
#include <locale.h>


/**
 * * j >= 0, v[0:j] válido,
 * * v[0] <= v[1] <= ... <= v[j-1] (v[0:1) está em ordem npa-descres)
 * ? rearranja v[0:j] de tal forma que, após a chamada, v[0:j] está em ordem nao-descrec.
*/
int ins(int *v, int j) {
    for(; j > 0 && v[j] < v[j-1]; --j) {
        int tmp = v[j];
        v[j] = v[j-1];
        v[j-1] = tmp;
    }
}
/**
 * * n >= 0 e v[0:n) válido
 * * rearranja v[0:n) de tal forma que, após a chamada,
 * ? v[0] <= v[1] <= ... <= v[n-1]
*/
int sort(int *v, int n) {
    for(int i = 0; i < n; i++) {
        ins(v, i);
    }
}

void main() {
    setlocale(LC_ALL, "Portguese");

    int v[] = {9, 6, 5, 7, 4, 8};

    sort(v, 6);

    for(int i = 0; i < sizeof(v)/4; i++) 
        printf("v[%d] = %d\n", i, v[i]);

}