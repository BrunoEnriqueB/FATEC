#include <stdio.h>
#include <stdlib.h>
#include "./pilha.h"

void intercalate_stack(Pilha *p1, Pilha *p2) {
  Pilha *auxiliar1 = pilha_cria();
  int size = 0;
  while(!pilha_vazia(p1)) {
    pilha_push(auxiliar1, pilha_pop(p1));
    size++;
  }
  Pilha *auxiliar2 = pilha_cria();
  while(!pilha_vazia(p2)) {
    pilha_push(auxiliar2, pilha_pop(p2));
    size++;
  }
  float valor;
  while(size > 0) {
    if(size % 2 == 0) {
      valor = pilha_pop(auxiliar1);
      pilha_push(p1, valor);
      size--;
    } else {
      valor = pilha_pop(auxiliar2);
      pilha_push(p1, valor);
      pilha_push(p2, valor);
      size--;
    }
  }
}

void main() {
  Pilha *pilha1 = pilha_cria(); Pilha *pilha2 = pilha_cria();

  for (int i = 1; i <= 5; i++)
   {
      pilha_push(pilha1, i);
   }

   for (int i = 1; i <= 5; i++)
   {
      pilha_push(pilha2, i+10);
   }
  intercalate_stack(pilha1, pilha2);
  pilha_mostra(pilha1);
  pilha_mostra(pilha2);


}