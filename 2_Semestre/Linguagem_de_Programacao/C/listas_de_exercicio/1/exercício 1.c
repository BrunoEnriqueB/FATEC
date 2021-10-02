#include <stdio.h>

void main() {

    printf("Digite a quantidade de inputs que você deseja fazer: ");

    int contador;
    scanf("%d", &contador);

    int cont, soma = 0;
    
    for(cont=0; cont < contador; cont++) {

        printf("Digite o numero: ");

        int resp;
        scanf("%d", &resp);

        soma += valida(resp);
    }
    printf("A soma dos valores e %d", soma);
    return 0;
}

int valida(int x) {

    if (x < 0) {
        x *= -1;

    }
    return x;

}