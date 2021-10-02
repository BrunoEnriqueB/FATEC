#include <stdio.h>

void main() {

    printf("Digite um inteiro: ");

    int contador;
    scanf("%d", &contador);

    int cont;
    int maior = 0, menor = 0, igual = 0, aresp = 0, ordem1 = 0, ordem2 = 0;
    
    for (cont=0; cont < contador; cont++) {


        printf("Digite o numero: ");

        int resp;
        scanf("%d", &resp);

        if (cont == 0) {
            int aresp = resp;
        } else {
            if (resp > aresp) {
                ordem2 += 1;
            } else {
                if (ordem2 > ordem1) {
                    ordem1 = ordem2;
                    ordem2 = 0;
                }
            }
            aresp = resp;
        }
        
    }
    
    printf("O maior prefixo e feito de %d numero",ordem1);

}
