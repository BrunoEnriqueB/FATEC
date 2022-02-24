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
      printf("N�o s�o palindromos!");
      return;
    }
    n--;
  }
  printf("S�o palindromos!");
}

int main() {
  char string[] = "palavra";
  check(string);
}