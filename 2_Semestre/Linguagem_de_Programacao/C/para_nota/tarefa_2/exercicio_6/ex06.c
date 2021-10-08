/**
 * *  Neste exerc�cio voc� vai escrever uma fun��o que decide se um
 * *  vetor v � prefixo de um vetor w, ou seja, se v coincide com uma parte inicial
 * *  de w. Por exemplo, o vetor (2, 1, 3, 4) � um prefixo do vetor (2, 1, 3, 4, 5, 7)
 * *  mas n�o � um prefixo do vetor (2, 1, 2, 3, 4, 5). Mais precisamente, escreva
 * *  uma fun��o que recebe v : int* e n : int com n > 0, e w : int* e m : int com
 * *  m > 0, e devolve true se, e s� se, m > n e v[0] = w[0], v[1] = w[1], . . . , v[n?1] = w[n ? 1].
 * 
 */

#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

bool prefixo(int *v, int n, int *w, int m) {
    for(int i = 0; i < n; ++i) {
        if (*(v + i) != *(w + i)) {
            return false;
        }
    }
    return true;
}

void main() {   
    setlocale(LC_ALL, "Portuguese");

    int v[] = {2, 5, 7, 9};
    int p[] = {2, 5, 7, 9, 8, 12};

    if(prefixo(v, 4, p, 6) == true) {
        printf("� prefixo!");
    } else {
        printf("N�o � prefixo!");
    }
}
