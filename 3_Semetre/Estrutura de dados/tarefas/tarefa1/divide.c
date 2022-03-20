#include <stdio.h>
#include <stdlib.h>
#include "./pilha.h"

Pilha *divide(Pilha *p)
{

  Pilha *auxiliar = pilha_cria();
  while (!pilha_vazia(p))
  {
    pilha_push(auxiliar, pilha_pop(p));
  }
  Pilha *nova_pilha = pilha_cria();
  float valor;
  while (!pilha_vazia(auxiliar))
  {
    valor = pilha_pop(auxiliar);
    pilha_push(p, valor);
    pilha_push(nova_pilha, valor / 2);
  }
  free(auxiliar);
  return nova_pilha;
}

void main()
{
  Pilha *pilha = pilha_cria();

  for (int i = 0; i <= 20; i++)
  {

    pilha_push(pilha, i);
  }

  Pilha *nova_pilha = divide(pilha);
  pilha_mostra(pilha);
  pilha_mostra(nova_pilha);
}
