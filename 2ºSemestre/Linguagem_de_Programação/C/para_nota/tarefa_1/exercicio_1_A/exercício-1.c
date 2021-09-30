#include <stdio.h>
#include <locale.h>

int programa(int k) {

    printf("Digite um N > 0:  ");
    int number;
    scanf("%d", &number);

    int cont = -1;
    int cont2 = 0;

    while (cont > -2) {
        int contador;
        int contador2;

        contador = cont * cont;
        contador2 = cont2 * cont2;

        if (contador < number && contador2 > number || contador==number) {
            k = cont;
            break;
        }
        cont++;
        cont2++;
    }
    return k;
}

void main() {
    setlocale(LC_ALL,"Portuguese");
    
    int resultado = programa(resultado);
    printf("A raiz inteira é: %d", resultado);
}