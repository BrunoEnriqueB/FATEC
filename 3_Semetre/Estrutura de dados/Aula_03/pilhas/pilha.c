#include <stdio.h>
#include <stdlib.h>
#include "./pilha.h"

void menu()
{
   printf("Escolha uma das opcoes do menu\n");
   printf("1. Push\n");       
   printf("2. Pop\n");
   printf("3. Mostrar pilha\n");
   printf("0. End\n");
}


void main() {
  int option = 0;
  float value = 0;
  Pilha *pilha = pilha_cria();

  do {
    menu();
    scanf("%d", &option);

    switch (option)
    {
      case 1:
        printf("Digite o valor desejado:");
        scanf("%f", &value);
        pilha_push(pilha, value);
        break;
      case 2:
        pilha_vazia(pilha) ? printf("Pilha vazia!") : printf("Item removido: %f\n", pilha_pop(pilha));
        break;
      case 3:
        pilha_mostra(pilha);
        break;
      case 0:
        break;
      default:
        break;
    }
  } while (option != 0);
}