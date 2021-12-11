    #include <stdio.h>
//Faça uma função que devolve o tamanho da string

int slentgh(const char s[]) {
    int c =0;
    while (s[c] != '\0') {
        c++;
    }
    return c;
}

int slentgh_rec(const char *s) {
    return *s == '\0' ? 0 : 1 + slentgh_rec(s + 1);
}

void main() {
    char *s = "Ola";
    printf("A string '%s' tem um tamanho de: %ld\n", s, slentgh(s));
    printf("A string '%s' tem um tamanho de: %ld", s, slentgh_rec(s));
}