#include <stdio.h>
#include <locale.h>

// Recebe b ? e tal que [b: e) é valido e recebe um x : int 
//que será o número que irá zerar no vetor.

int tam_vetor(int *b, int *e, int x) {
    int cont = 0; int tam = (e - b);
    while (b != e){
        if (*b == x) cont++;  
        ++b;
    } 
    return tam - cont;    
}

int *tam_vetor_ptr(int *b, int *e, int x) {
    int cont = 0;
    while (b != e){
        if (*b == x) cont++;  
        ++b;
    } 
    return e - cont;    
}

void main() {
    setlocale(LC_ALL, "Portuguese");
    int p[] = {10, 8, 3, 1, 6, 8};
    int *tam = p; int *tam_ptr = tam_vetor_ptr(p, p+6, 8);
    printf("endereço do vetor: %p\nendereço do vetor: %p", tam, tam_ptr);
}