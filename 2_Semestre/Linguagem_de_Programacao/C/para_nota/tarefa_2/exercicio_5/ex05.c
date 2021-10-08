/**
 * Agora, voc� vai escrever uma vers�o similar a do Exerc�cio 4
 * usando ponteiros. Escreva uma fun��o que recebe b, e : int* tais que b 6 e
 * e devolve true se, e s� se, b 6 (b + 1) 6 � � � 6 (e ? 1).
*/

#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

bool begin_end(int *b, int*e) {
    int menor = *b;
    for(; b < e; ++b) {
        if (*b <= *(b + 1)) {
            continue;
        } else {
            return false;
        }
    }
    return true;
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    int p[] = {2, 5, 7, 9, 8, 12};

    if (begin_end(p, p + sizeof(p)/4) == true) {
        printf("Est� em ordem n�o-descrescente!");
    } else {
        printf("N�o est� em ordem n�o-descrecente!");
    }
}