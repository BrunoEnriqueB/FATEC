#include <stdio.h>

struct ponto{
    double x, y;
};

double norma_quadrado(struct ponto e) {
    return e.x * e.x + e.y * e.y; //soma o quadrado dos pontos x e y
}

// obrigatoriamente b < e
struct ponto *norma_maxima(struct ponto *b, struct ponto *e) {
    if (e - b == 1) return b; //se o inicio e o final tiverem o mesmo tamanho, ja para
    struct ponto *maior = b + 1; // define um ponto maior inicial como o segundo elemento do vetor
    for (;b + 1 < e; ++b) { //começa a verificar no elemento 2 do vetor, já que o maior é ele
        if(norma_quadrado(*b) > norma_quadrado(*maior)) maior = b; // se: x² + y² do B for maior que x² + y² do M, o maior vira o B
    }
    return maior;
}

struct ponto *norma_maxima_rec(struct ponto *b, struct ponto *e) {
    if (e - b == 1) return b; // se for do mesmo tamanho, return o próprio b
    struct ponto *m = norma_maxima_rec(b + 1, e); // recursividade pra testar todos os pontos do vetor
    return norma_quadrado(*b) >= norma_quadrado(*m) ? b : m;    
    
}

void main() {
    struct ponto vetor[] = {{3, 4}, {1, 2}, {3, 2}, {4, 5}, {2, 1}}; //cria o vetor com a estrutura ponto
    int n = sizeof(vetor)/sizeof(struct ponto); //define o tamanho do vetor
    struct ponto *value = norma_maxima_rec(vetor, vetor + n); //cria um ponteiro que vai receber os valores da maior norma
    printf("%f %f", value->x, value->y); //printa os valores
}