#include <stdio.h>

void main() {

    printf("Digite um inteiro: ");

    int contador;
    scanf("%d", &contador);

    int cont, soma=0;
    for (cont=0; cont < contador; cont++) {


        printf("Digite o numero: ");

        int resp;
        scanf("%d", &resp);

        soma += quadrado(valida(resp));
    }

    printf("O resultado e %d", soma);
}

int valida(int x) {

    if (x < 0) {
        x *= -1;

    }
    return x;

}

int quadrado(int p) {
    return p * p;
}