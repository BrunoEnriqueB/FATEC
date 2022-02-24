#include <stdio.h>

int stlen(char *string) {
  for(int n = 0; n >= 0; n++) {
    if(*(string + n) == '\0') return n - 1;
  }
}

void stringWihtoutSpace(char *string) {
  int n = stlen(string);
  for(int i = 0; i < n; i++) {
    if(*(string + i) == ' ') {
      for(int a=i; a <= n; a++) {
        *(string + a) = *(string + (a + 1)); 
      }
    }
  }
}

void check(char *string) {
  stringWihtoutSpace(string);
  int n = stlen(string);
  for(int i = 0; i <= n ; i++) {
    if(*(string + n) != *(string + i)) {
      printf("Não são palindromos!");
      return;
    }
    n--;
  }
  printf("São palindromos!");
}

int main() {
  char string[] = "palavra";
  check(string);
}