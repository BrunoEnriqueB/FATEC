#include <stdio.h>

void main() {

    printf("Digite um inteiro: ");

    int contador;
    scanf("%d", &contador);

    int cont;
    int maior = 0, menor = 0, igual = 0;
    for (cont=0; cont < contador; cont++) {


        printf("Digite o numero: ");

        int resp;
        scanf("%d", &resp);


        if (resp < 0) {
            menor += 1;
        }else if (resp == 0){
            igual += 1;
        } else {
            maior += 1;
        }
    }
    
    printf("Você digitou %d numeros menores que 0, %d numeros iguais a zero e %d numeros maiores que 0", menor, igual, maior);

}
