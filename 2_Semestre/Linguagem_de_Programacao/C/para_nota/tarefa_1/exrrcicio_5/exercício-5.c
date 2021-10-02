#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL,"Portuguese");
    
    int contagem=1;
    for(int cont=0; cont >= 0; cont++) {
        printf("Digite um int: ");
        int resposta;
        scanf("%d", &resposta);

        if (resposta == 0) {
            break;
        }else {
            contagem++;
        }
    }
    printf("Comprimento: %d", contagem);
}