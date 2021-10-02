#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL,"Portuguese");
    
    int contagem=0;
    for(int cont=0; cont >= 0; cont++) {
        printf("Digite um int: ");
        int resposta;
        scanf("%d", &resposta);

        if (resposta == 0) {
            break;
        }else {
            contagem += resposta;
        }
    }
    printf("Soma dos elementos: %d", contagem);
}