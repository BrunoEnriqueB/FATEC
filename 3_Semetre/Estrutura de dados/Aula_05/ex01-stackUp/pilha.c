#include <stdio.h>
#include <stdlib.h>
#include "./pilha.h"

float soma_elementos(Pilha *p) {
  int i = 0;
  float temp; float soma = 0;
  Pilha *auxiliar = pilha_cria();
  while(!pilha_vazia(p)) {
    temp = pilha_pop(p);
    pilha_push(auxiliar, temp);
    soma += temp;
  }
  while(!pilha_vazia(auxiliar)) {
    pilha_push(p, pilha_pop(auxiliar));
  }
  return soma;
}

float primeiro_elemento(Pilha *pilha) {
  Pilha *pilha_reserva = pilha_cria();
  float value = 0;
  while(!pilha_vazia(pilha)) {
    value = pilha_pop(pilha);
    pilha_push(pilha_reserva, value);
  }
  float base = value;

  while(!pilha_vazia(pilha_reserva)) {
    value = pilha_pop(pilha_reserva);
    pilha_push(pilha, value);
  }
  return base;
}

float ultimo_elemento(Pilha *pilha) {
  Pilha *pilha_reserva = pilha_cria();
  while(!pilha_vazia(pilha)) {
    pilha_push(pilha_reserva, pilha_pop(pilha));
  }
  float topo = 0;
  while(!pilha_vazia(pilha_reserva)) {
    topo = pilha_pop(pilha_reserva);
    pilha_push(pilha, topo);
  }
  return topo;
}

int conta_elementos(Pilha *pilha) {
  Pilha *pilha_reserva = pilha_cria();
  int cont = 0;
  while(!pilha_vazia(pilha)) {
    pilha_push(pilha_reserva, pilha_pop(pilha));
    cont++;
  }
  while(!pilha_vazia(pilha_reserva)) {
    pilha_push(pilha, pilha_pop(pilha_reserva));
  }
  return cont;
}

void menu()
{
   printf("Escolha uma das opcoes do menu\n");
   printf("1. Push\n");       
   printf("2. Pop\n");
   printf("3. Mostrar pilha\n");
   printf("4. Soma dos elementos \n");
   printf("5. Mostrar primeiro elemento\n");
   printf("6. Mostrar ultimo elemento\n");
   printf("7. Conta os elementos\n");
   printf("0. End\n");
}

//criar uma função que retorna o primeiro elemento da pilha (elemento da base)
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
        pilha_vazia(pilha) ? printf("Pilha vazia!\n") : printf("Item removido: %f\n", pilha_pop(pilha));
        break;
      case 3:
        pilha_mostra(pilha);
        break;
      case 4: 
        printf("Soma dos elementos da pilha: %.0f\n", soma_elementos(pilha));
        break;
      case 5:
        printf("Primeiro elemento da pilha: %.0f\n", primeiro_elemento(pilha));
        break;
      case 6:
        printf("Ultimo elemento da pilha: %.0f\n", ultimo_elemento(pilha));
        break;
      case 7:
        printf("Quantidade de elementos da pilha: %d\n", conta_elementos(pilha));
        break;
      case 0:
        break;
      default:
        break;
    }
  } while (option != 0);
}