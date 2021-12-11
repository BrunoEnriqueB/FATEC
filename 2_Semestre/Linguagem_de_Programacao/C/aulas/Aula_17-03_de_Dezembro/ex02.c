#include <stdio.h>
#include <string.h>

//recebe uma string s e um char c, e devolve o numero de ocorrencias de c em s;
//Por exemplo, se s é a string "aabba" e c é o char 'a', entao a sua funcao deve devolver 3
int count (const char *s, char c) {
    if (*s == '\0') return 0;
    int cont = count(s + 1, c);
    if (*s == c) return cont + 1;
    return cont;
}

int count_rec_mario(const char *s, char c) {
    return *s == '\0' ? 0 : (*s == c) + count_rec_mario(s+1, c);
}


void main() {
    char *s = "aabba";
    printf("O numero de ocorrencias de a é: %d\n", count(s, 'a'));
    printf("O numero de ocorrencias de a é: %d", count_rec_mario(s, 'a'));
}