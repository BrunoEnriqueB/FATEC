#include <stdio.h>
#include <locale.h>

struct ponto {
    double x, y;
};

void main() {
    setlocale(LC_ALL, "Portuguese");

    struct ponto vetor[] = {{3, 2}, {4, 5}, {7, 9}, {8, 10}};
    for (int cont = 0; cont < 4; cont++) printf("%0.2f %0.2f\n", vetor[cont].x, vetor[cont].y);
}