#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL,"Portuguese");
    
    printf("Digite um int n >= 0: ");
    int resposta;
    scanf("%d", &resposta);

    int array[resposta];
    int contagem[3];

    contagem[0] = 0;
    contagem[1] = 0;
    contagem[2] = 0;

    for(int cont=0; cont < resposta; cont++) {
        printf("Digite um int: ");
        scanf("%d", &array[cont]);
        if ((array[cont] % 3) == 2) {
            contagem[2]++;
        }else if ((array[cont] % 3) == 1) {
            contagem[1]++;
        }else {
            contagem[0]++;
        }
    }

    printf("%d número(s) são divisiveis por 3.\n", contagem[0]);
    printf("%d número(s) divididos por 0 dão resto 1.\n", contagem[1]);
    printf("%d número(s) divididos por 0 dão resto 2.\n", contagem[2]);

}