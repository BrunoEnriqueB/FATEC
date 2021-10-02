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

    printf("Digite o K: ");
    int k;
    scanf("%d", &k);

    int soma = 0;
    for(cont=0; cont < quantidade; cont++) {
        if (vetor[cont] > k){

            soma += vetor[cont];
        } 
    }

    printf("O seu resultado é: %d", soma);

    return 0;
}
