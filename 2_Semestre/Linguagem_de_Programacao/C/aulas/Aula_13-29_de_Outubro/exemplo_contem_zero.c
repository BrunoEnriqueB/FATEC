#include <stdio.h>
#include <locale.h>
#include <stdbool.h>

struct ponto
{
    double x, y;
};

bool contem_zero(struct ponto *p, int n)
{
    for (int i = 0; i < n; i++)
        if (p[i].x == 0 && p[i].y == 0)
            return true;
    return false;
}

void main()
{
    setlocale(LC_ALL, "Portuguese");

    struct ponto vetor[] = {{3, 6}, {1, 2}, {0, 0}, {9, 11}, {5, 7}};
    int n = sizeof(vetor) / sizeof(struct ponto);
    printf("%s", contem_zero(vetor, n) ? "true" : "false");
}