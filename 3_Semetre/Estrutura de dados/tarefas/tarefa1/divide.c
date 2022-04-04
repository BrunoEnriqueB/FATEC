#include <stdio.h>
#include <stdlib.h>
#include "./pilha.h"

Pilha *dividePilha(Pilha *p)
{

  Pilha *auxiliar = pilha_cria(); // cria a pilha
  while (!pilha_vazia(p))
  { // passa a pilha pra auxiliar
    pilha_insere(auxiliar, pilha_retira(p));
  }
  Pilha *nova_pilha = pilha_cria(); // pilha que conterá a pilha principal dividida
  float valor;
  while (!pilha_vazia(auxiliar))
  {
    valor = pilha_retira(auxiliar);      // pega os valores da pilha auxiliar
    pilha_insere(p, valor);              // adiciona o valor de volta para a pilha principal
    pilha_insere(nova_pilha, valor / 2); // adiciona o valor na nova pilha já dividido
  }
  pilha_libera(auxiliar); // libera a pilha
  return nova_pilha;      // retorna a pilha dividida
}

void main()
{
  Pilha *pilha = pilha_cria();

  for (int i = 0; i <= 10; i++)
  {
    pilha_insere(pilha, i);
  }

  Pilha *nova_pilha = dividePilha(pilha);
  pilha_mostra(pilha);
  pilha_mostra(nova_pilha);
}
