/**
 * * Escreva uma fun��o que recebe um vetor de doubles v, e um
 * * int n > 1, e devolve a m�dia aritm�tica dos elementos de v[0 : n).
 * * 
*/

#include <stdio.h>
#include <locale.h>

double array_media(double *v, int n) {
    double med = 0;
    for(int i = 0; i < n; ++i) {
        med += *(v + i);
    }
    return med/n;
}

void main() {
    setlocale(LC_ALL, "Portuguese");

    double v[] = {8, 4, 3};

    printf("M�dia aritm�tica do vetor: %.2lf", array_media(v, sizeof(v)/8));
}
