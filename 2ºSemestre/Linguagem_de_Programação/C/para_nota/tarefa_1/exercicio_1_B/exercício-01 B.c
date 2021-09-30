#include <stdio.h>
#include <locale.h>

int programa(k) {
    printf("Digite um N > 0:  ");
    int number;
    scanf("%d", &number);

    int cont=0;
    int cont2 = 1;
    int resposta[number];
    k = 0;

    for(cont=0; cont < number; cont++) {
        printf("Digite um número inteiro: ");
        scanf("%d", &resposta[cont]);
    }
     
    cont = 0;

    for(int conta=0; conta < number; conta++) {
        while (cont > -1) {
            int contador;
            int contador2;

            contador = cont * cont;
            contador2 = cont2 * cont2;

            if ((contador < resposta[conta]) && (contador2 > resposta[conta]) || (contador==resposta[conta])) {
                k = k + cont;
                break;
            }
            cont++;
            cont2++;
        }
    }
    return k;
}

void main() {
    setlocale(LC_ALL,"Portuguese");

    int resultado = programa(resultado);

    printf("Resultado: %d", resultado);
}