#include <stdio.h>

void main () {

    printf("Digite um inteiro >= 0: ");
    int quantidade;
    scanf("%d", &quantidade);

    int cont, vetor[quantidade];
    for(cont=0; cont < quantidade; cont++) {
        printf("Digite o int: ");

        scanf("%d", &vetor[cont]);
    }
    
    int soma=0, verdadeiro;
    for(cont=0; cont < quantidade; cont++) {
        if (vetor[cont] > soma) {
            verdadeiro = 0;
        } else {
            verdadeiro = 1;
            break;
        }
        soma += vetor[cont];
    }
    if (verdadeiro == 0) {
        printf("É uma soma consistente");
    } else {
        printf("Não é uma soma consistente");
    }
}