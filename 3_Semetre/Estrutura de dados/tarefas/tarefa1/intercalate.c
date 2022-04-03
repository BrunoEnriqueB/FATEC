#include <stdio.h>
#include <stdlib.h>
#include "./pilha.h"

Pilha *intercala_pilha(Pilha *p1, Pilha *p2)
{
  Pilha *auxiliar1 = pilha_cria(), *auxiliar2 = pilha_cria(); // cria pilha auxiliar 1 e 2
  int tamanho1 = 0, tamanho2 = 0;                             // variáveis que terão o tamanho das pilhas 1 e 2
  while (!pilha_vazia(p1))                                    // pega o tamanho da pilha 1
  {
    pilha_push(auxiliar1, pilha_pop(p1));
    tamanho1++;
  }
  while (!pilha_vazia(p2)) // pega o tamanho da pilha 2
  {
    pilha_push(auxiliar2, pilha_pop(p2));
    tamanho2++;
  }

  float valor;
  Pilha *p3 = pilha_cria(); // cria a pilha que terá as pilhas intercaladas

  int maior;
  maior = tamanho1 > tamanho2 ? tamanho1 : tamanho2; // cria variável que vai ter o tamanho da maior pilha

  for (int index = 0; index <= maior; index++) // loop que vai adicionar os valores da pilha intercalada
  {
    if (index < tamanho1) // verifica se o index for menor que o tamanho da pilha 1
    {
      valor = pilha_pop(auxiliar1); // se for, pega o valor da auxiliar 1
      pilha_push(p3, valor);        // adiciona na pilha nova
      pilha_push(p1, valor);        // adiciona na respectiva pilha antiga
    }
    if (index < tamanho2) // verifica se o index for menor que o tamanho da pilha 2
    {
      valor = pilha_pop(auxiliar2); // se for, pega o valor da auxiliar 2
      pilha_push(p3, valor);        // adiciona na pilha nova
      pilha_push(p2, valor);        // adiciona na respectiva pilha antiga
    }
  }
  pilha_libera(auxiliar1); // libera auxiliar 1
  pilha_libera(auxiliar2); // libera auxiliar 2
  return p3;               // retorna a nova pilha intercalada
}

void main()
{
  Pilha *pilha1 = pilha_cria();
  Pilha *pilha2 = pilha_cria();

  for (int i = 1; i <= 5; i++)
  {
    pilha_push(pilha1, i);
  }

  for (int i = 1; i <= 6; i++)
  {
    pilha_push(pilha2, i + 10);
  }

  Pilha *pilhaNova = intercala_pilha(pilha1, pilha2);
  pilha_mostra(pilha1);
  pilha_mostra(pilha2);
  pilha_mostra(pilhaNova);
}