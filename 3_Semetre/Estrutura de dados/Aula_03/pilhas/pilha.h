#include <stdio.h>
#include <stdlib.h>

#define N 5
typedef struct {
  float vet[N];
  int n;
} Pilha;

Pilha *pilha_cria() {
  Pilha *p = (Pilha*)malloc(sizeof(Pilha));
  p->n = 0;
  return p;
}

int pilha_vazia(Pilha *p) {
  return p->n == 0 ? 1 : 0;
} 

void pilha_push(Pilha *p, float value) {
  if(p->n == N) {
    printf("Pilha cheia!\n");
    return;
  }

  p->vet[p->n] = value;
  p->n++;
}

float pilha_pop(Pilha *p) {
  p->n--;
  return p->vet[p->n];
}

void pilha_libera(Pilha *p) {
  free(p);
}

void pilha_mostra(Pilha *p) {
  printf("Conteudo da pilha:\n");
  for(int i = p->n-1; i >= 0; i--) {
    printf("%.2f\n", p->vet[i]);
  } 
}
