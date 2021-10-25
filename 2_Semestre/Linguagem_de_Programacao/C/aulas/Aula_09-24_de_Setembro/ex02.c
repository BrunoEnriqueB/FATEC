#include <stdio.h>
#include <locale.h>

// Recebe b, e : int *, b ? e, [b:e) válido x : int. Rearranja *[b : e) de tal forma 
//que todos os elementos menores que X ocorrem antes dos elementos maiores que x;

void rearranja_meu (int *b, int*e, int x) {
    for(int *ind = b; ind < e; ++ind) {
        for(int *array = ind; array < e; ++array) {
            if (*array < x) {
                int substitui = *array; *array = *ind; *ind = substitui; break;
            }
        }
    }
}

void rearranja_prof (int *b, int*e, int x) {
    int *i = b;
    for(int *k = b; k < e; ++k) {
        if (*k < x) {
           int tmp = *k; 
           *k = *i; 
           *i = tmp; 
           ++i;
        }
    }
}

void main() {
    setlocale(LC_ALL, "Portuguese");

    int v[] = {10, 6, 8, 3, 5, 4, 7};
    rearranja_meu(v, v + 7, 6);
    for(int i = 0; i < 7; i++) printf("%d ", v[i]);
    int p[] = {10, 6, 8, 3, 5, 4, 7};
    rearranja_prof(p, p + 7, 6); printf("\n");
    for(int i = 0; i < 7; i++) printf("%d ", p[i]);


}

