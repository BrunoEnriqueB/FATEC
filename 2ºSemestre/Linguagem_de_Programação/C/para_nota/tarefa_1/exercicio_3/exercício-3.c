#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL,"Portuguese");

    printf("Digite um int n >= 0: ");
    int resposta;
    scanf("%d", &resposta);

    int array[resposta];
    int contagem=0;

    for(int cont=0; cont < resposta; cont++) {
        printf("Digite um int: ");
        scanf("%d", &array[cont]);
        if ((array[cont] % 3) == 0) {
            contagem ++;
        }
    }

    printf("%d número(s) são divisiveis por 3.", contagem);

}