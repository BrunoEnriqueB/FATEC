/**
 *  * Neste exerc�cio voc� vai escrever uma fun��o que decide se
 *  * um vetor de inteiros est� em ordem CRESCENTE. Por exemplo, o vetor
 *  * (2, 5, 7, 9, 9, 12) est� em ordem CRESCENTE enquanto que o vetor
 *  * (2, 5, 6, 3, 10) n�o est�. Mais precisamente, escreva uma fun��o que recebe
 *  * v : int* e n : int com n > 0 e devolve true se, e s� se, v[0 : n) est� em
 *  * ordem CRESCENTE, ou seja, se v[0] 6 v[1] 6 � � � 6 v[n ? 1].
 * 
*/

#include <stdio.h>
#include <locale.h>

int ind_min(int *v, int b, int e) {
    int menor = v[b];
    for(int cont = b; cont < e; cont++) {
        if (v[cont] < menor) {
            return 0;
        }
    }
    return 1;
}

int sort(int *v, int n) {
    for(int cont = 0; cont < n; cont++) {
        int boolean = ind_min(v, cont, n);
        if (boolean == 0) {
            return 0;
        }
    }
    return 1;
}

void main() {
    setlocale(LC_ALL, "Portuguese");

    int p[] = {2, 5, 7, 9, 9, 12};
    int v[] = {2, 5, 6, 3, 10};

    printf("%d\n", sort(p, sizeof(p)/4));
    printf("%d", sort(v, sizeof(v)/4));
}