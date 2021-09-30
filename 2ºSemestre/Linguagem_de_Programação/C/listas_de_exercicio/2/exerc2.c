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

    int verdade;
    for(cont=0; cont < quantidade - 1; cont++) {
        if (vetor[cont] > 0 && vetor[cont + 1] < 0 || vetor[cont] < 0 && vetor[cont + 1] > 0) {
            verdade = 1;
        } else {
            verdade = 0;
        }
    }

    if (verdade == 0) {
        printf("Não é sinal-alternante");
    } else {
        printf("É sinal-alternante");
    }

    return 0;
    
}