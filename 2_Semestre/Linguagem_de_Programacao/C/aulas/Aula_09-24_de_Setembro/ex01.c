#include <stdio.h>
#include <locale.h>
// Esreva uma fun��p que recebe b, e : int * tal que b ? e e [b:e) 
// � valido e devolve o tamanho do maior prefixo crescente de *[b:e)
int maior_pref(int *b, int *e) {
	if (b == e) return 0;
    int *a = b; ++b;
	int n = 1;
	while (b != e && *a < *b){
		++n; ++b; ++a;
	}
	return n;
}

void main() {
	setlocale(LC_ALL, "Portuguese");

    int v[] = {2, 7, 10, 6, 4, 1, 7, 6};
    printf("Prefixos: %d", maior_pref(v, v + 7));

}