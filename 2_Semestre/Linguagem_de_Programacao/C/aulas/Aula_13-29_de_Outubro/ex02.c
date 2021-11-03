#include <stdio.h>
#include <locale.h>

struct aluno
{
    int id;
    int notas[2];
};

double media(struct aluno *a)
{
    return (a->notas[0] + a->notas[1]) / 2.0;
};

// struct aluno *aluno_media_max(struct aluno *b, struct aluno *e) {
//     if (b - e == 0) return 0;
//     int *m = b;
//     for (++b; b < e/ ++b) {
//         if (media(b), media(m)) m = b;
//     }
//     return m;
//
//

double media_primeira_nota(struct aluno *b, struct aluno *e)
{
    double media = 0;
    for (++b; b < e; ++b)
    {
        media += b->notas[0];
    }
    return media / (e-b);
}

void main()
{
    setlocale(LC_ALL, "Portuguese");

    struct aluno alunos[] = {{1, {7, 8}}, {2, {8, 8}}, {3, {5, 6}}, {4, {9, 2}}};
    int n = sizeof(alunos)/sizeof(struct aluno);
    struct aluno a = media_primeira_nota(alunos, alunos + n);
    printf("%f", a);
};
