#include <stdio.h>
#include <stdlib.h>
#include "./fila.h"

Fila *intercala_fila(Fila *f1, Fila *f2)
{
  Fila *auxiliar1 = fila_cria(), *auxiliar2 = fila_cria(); // cria fila auxiliar 1 e 2
  int tamanho1 = 0, tamanho2 = 0;                          // variáveis que terão o tamanho das filas 1 e 2
  while (!fila_vazia(f1))
  { // pega o tamanho da fila 1
    fila_insere(auxiliar1, fila_retira(f1));
    tamanho1++;
  }
  while (!fila_vazia(f2))
  { // pega o tamanho da fila 2
    fila_insere(auxiliar2, fila_retira(f2));
    tamanho2++;
  }

  float valor;
  Fila *f3 = fila_cria(); // cria a fila que terá as filas intercaladas

  int maior;
  maior = tamanho1 > tamanho2 ? tamanho1 : tamanho2; // cria variável que vai ter o tamanho da maior fila

  for (int index = 0; index <= maior; index++)
  { // loop que vai adicionar os valores da fila intercalada
    if (index < tamanho1)
    {                                 // verifica se o index for menor que o tamanho da fila 1
      valor = fila_retira(auxiliar1); // se for, pega o valor da auxiliar 1
      fila_insere(f3, valor);         // adiciona na fila nova
      fila_insere(f1, valor);         // adiciona na respectiva fila antiga
    }
    if (index < tamanho2)
    {                                 // verifica se o index for menor que o tamanho da fila 2
      valor = fila_retira(auxiliar2); // se for, pega o valor da auxiliar 2
      fila_insere(f3, valor);         // adiciona na fila nova
      fila_insere(f2, valor);         // adiciona na respectiva fila antiga
    }
  }
  fila_libera(auxiliar1); // libera auxiliar 1
  fila_libera(auxiliar2); // libera auxiliar 2
  return f3;              // retorna a nova fila intercalada
}

void main()
{
  Fila *fila1 = fila_cria();
  Fila *fila2 = fila_cria();

  for (int i = 1; i <= 5; i++)
  {
    fila_insere(fila1, i);
  }

  for (int i = 1; i <= 4; i++)
  {
    fila_insere(fila2, i * 10);
  }

  Fila *filaNova = intercala_fila(fila1, fila2);
  fila_mostra(fila1);
  fila_mostra(fila2);
  fila_mostra(filaNova);
}