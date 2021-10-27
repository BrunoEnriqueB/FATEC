#include <stdio.h>

// Recebe n>=0 e escreve os número de 1 até n
void escreve(int n){
    if (n == 0) return;
    // n > 0
    escreve(n - 1);
    // escreve 1, 2, 3 ..., n-1;
    printf("%d ", n);
}

// Recebe n>=0 e escreve os número de 1 até n
void escreve_alt(int n)
{
    if (n == 0) return;
    if (n == 1) printf("1 ");
    else {
        escreve_alt(n - 2);
        printf("%d %d ", n - 1, n);
    }
}

void main()
{
    escreve(10);
    printf("\n");
    escreve_alt(10);
}
