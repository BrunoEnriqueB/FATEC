#include <stdio.h>

void main() {

    printf("Entre com um inteiro nao negativo: ");

    int x;
    scanf("%d", &x);

    int i = 0;

    while (i <= x) {
        
        printf("%d\n", i);
        i += 1;
    }
    return 0;
    
}