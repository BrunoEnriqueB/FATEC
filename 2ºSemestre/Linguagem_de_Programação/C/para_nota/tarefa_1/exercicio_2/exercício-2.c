#include <stdio.h>
#include <locale.h>

int programa(contagem) {

    printf("Escreva um int >= 1: ");
    int number;
    scanf("%d", &number);

    int array[number];
    for(int cont=0; cont < number; cont++) {
        printf("Escreva um inteiro: ");
        scanf("%d", &array[cont]);
    }
    int maior = array[0];

    contagem = 0;
    for(int cont=0; cont < number; cont++) {
        if (array[cont] > maior) {
            maior = array[cont];
            contagem = 0;
        }

        if (array[cont] == maior) {
            contagem++;
        }
    }

    return contagem;
}

void main() {
    setlocale(LC_ALL,"Portuguese");

    int resultado = programa(resultado);
    printf("O número de ocorrências foi: %d", resultado);

}