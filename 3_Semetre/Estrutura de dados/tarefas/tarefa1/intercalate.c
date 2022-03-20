#include <stdio.h>
#include <stdlib.h>
#include "./pilha.h"

Pilha *intercala_pilha(Pilha *p1, Pilha *p2)
{
  Pilha *auxiliar1 = pilha_cria();
  int size1 = 0, size2 = 0;
  while (!pilha_vazia(p1))
  {
    pilha_push(auxiliar1, pilha_pop(p1));
    size1++;
  }
  Pilha *auxiliar2 = pilha_cria();
  while (!pilha_vazia(p2))
  {
    pilha_push(auxiliar2, pilha_pop(p2));
    size2++;
  }

  float valor;
  Pilha *p3 = pilha_cria();

  for (int i = 0; i <= size1 + size2; i++)
  {
    if (i < size1 && i < size2)
    {
      valor = pilha_pop(auxiliar1);
      pilha_push(p3, valor);
      pilha_push(p1, valor);
      valor = pilha_pop(auxiliar2);
      pilha_push(p3, valor);
      pilha_push(p2, valor);
    }
    else if (i <= size1 && i > size2)
    {
      valor = pilha_pop(auxiliar1);
      pilha_push(p3, valor);
      pilha_push(p1, valor);
    }
    else if (i > size1 && i <= size2)
    {
      valor = pilha_pop(auxiliar2);
      pilha_push(p3, valor);
      pilha_push(p2, valor);
    }
  }
  pilha_libera(auxiliar1);
  pilha_libera(auxiliar2);
  return p3;
}

void main()
{
  Pilha *pilha1 = pilha_cria();
  Pilha *pilha2 = pilha_cria();

  for (int i = 1; i <= 5; i++)
  {
    pilha_push(pilha1, i);
  }

  for (int i = 1; i <= 3; i++)
  {
    pilha_push(pilha2, i + 10);
  }

  Pilha *pilhaNova = intercala_pilha(pilha1, pilha2);
  pilha_mostra(pilha1);
  pilha_mostra(pilha2);
  pilha_mostra(pilhaNova);
}