/**
 * Agora, você vai escrever uma versão similar a do Exercício 4
 * usando ponteiros. Escreva uma função que recebe b, e : int* tais que b 6 e
 * e devolve true se, e só se, b 6 (b + 1) 6 · · · 6 (e ? 1).
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
        printf("Está em ordem não-descrescente!");
    } else {
        printf("Não está em ordem não-descrecente!");
    }
}