#include <stdio.h>

int trocaCarac(char *f, char m, char p) {
  char *index = f; int c = 0;
  for(int i = 0; index[i] != '\0'; i++ ) {
    if(index[i] == m) {
      index[i] = p;
    }
  }
  return c;
}

void main() {
  char string[10] = "palavra";

  printf("%d", trocaCarac(&string, 'a', 'p'));
}