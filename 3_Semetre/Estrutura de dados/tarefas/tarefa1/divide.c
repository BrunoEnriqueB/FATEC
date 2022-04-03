#include <stdio.h>
#include <stdlib.h>
#include "./pilha.h"

Pilha *divide(Pilha *p)
{

  Pilha *auxiliar = pilha_cria(); // cria a pilha
  while (!pilha_vazia(p))         // passa a pilha pra auxiliar
  {
    pilha_push(auxiliar, pilha_pop(p));
  }
  Pilha *nova_pilha = pilha_cria(); // pilha que conter� a pilha principal dividida
  float valor;
  while (!pilha_vazia(auxiliar))
  {
    valor = pilha_pop(auxiliar);       // pega os valores da pilha auxiliar
    pilha_push(p, valor);              // adiciona o valor de volta para a pilha principal
    pilha_push(nova_pilha, valor / 2); // adiciona o valor na nova pilha j� dividido
  }
  free(auxiliar);    // libera a pilha
  return nova_pilha; // retorna a pilha dividida
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
