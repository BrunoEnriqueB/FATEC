#include <stdio.h>
#include <stdlib.h>

typedef struct
{
  int codigo;
  char name[50];
  float preco;
  int estoque;
} teclado;

void main()
{
  int i;
  teclado teclado[5];
  for (i = 0; i < 5; i++)
  {
    printf("Digite o código do produto: ");
    scanf("%d", &teclado[i].codigo);
    printf("Digite o nome do produto: ");
    scanf(" %s", teclado[i].name);
    printf("Digite o preco do produto: ");
    scanf("%f", &teclado[i].preco);
    printf("Digite o estoque do produto: ");
    scanf("%d", &teclado[i].estoque);
  }
  for (i = 0; i < 5; i++)
  {
    printf("código: %d, nome: %s, preco: %f, estoque: %d", (teclado + i)->codigo, (teclado + i)->name, (teclado + i)->preco, (teclado + i)->estoque);
  }
}