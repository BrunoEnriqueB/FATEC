#include <stdio.h>
#include <locale.h>

void sum_vec_meu(int *b, int *e) {
    if (b == e) return;
    for (int *cont = b; cont < e; ++cont) {
        if (cont != b) {
            *cont = *cont + *b;
            ++b;
        }
    }
}


void sum_vec_prof(int *b, int *e) {
    if (b == e) return;
    int soma = *b; ++b;
    while (b != e){
        soma += *b;
        *b = soma;
        ++b;
    }
}

int print_vec(int *b, int *e) {
    for (; b < e; ++b) {
        printf("%d ", *b);
    }
}

void main() {
    setlocale(LC_ALL, "Portuguese");

     int v[] = {2, 7, 3, 5, 8};
     sum_vec_meu(v, v + 5);
     print_vec(v, v+5);
}