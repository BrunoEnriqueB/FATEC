#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int countElements(Fila *fila)
{
  int counter = 0;

  Fila *aux = cria_fila();
  while (!fila_vazia(fila))
  {
    adiciona_fila(aux, tira_fila(fila));
    counter++;
  }

  while (!fila_vazia(aux))
  {
    adiciona_fila(fila, tira_fila(aux));
  }
  return counter;
}

float sumElements(Fila *fila)
{
  float sum = 0, value = 0;

  Fila *aux = cria_fila();
  while (!fila_vazia(fila))
  {
    value = tira_fila(fila);
    sum += value;
    adiciona_fila(aux, value);
  }

  while (!fila_vazia(aux))
  {
    adiciona_fila(fila, tira_fila(aux));
  }
  return sum;
}

float last(Fila *fila)
{
  float value = 0, first;
  Fila *aux = cria_fila();

  while (!fila_vazia(fila))
  {
    adiciona_fila(aux, tira_fila(fila));
  }

  while (!fila_vazia(aux))
  {
    value = tira_fila(aux);
    first = value;
    adiciona_fila(fila, first);
  }

  return first;
}

float first(Fila *fila)
{
  float value = 0;

  Fila *aux = cria_fila();
  value = tira_fila(fila);
  adiciona_fila(aux, value);
  while (!fila_vazia(fila))
  {
    adiciona_fila(aux, tira_fila(fila));
  }

  while (!fila_vazia(aux))
  {
    adiciona_fila(fila, value);
  }
  return value;
}

void menu()
{
  system("cls");
  printf("Choose one of the options from menu\n");
  printf("1. Adiciona fila\n");
  printf("2. Tira fila\n");
  printf("3. Mostra fila\n");
  printf("4. Conta fila\n");
  printf("5. Soma dos elementos\n");
  printf("6. Primeiro\n");
  printf("7. ultimo\n");
  printf("0. End\n");
}

void main()
{
  Fila *fila = cria_fila();
  int optionMenu = 0;
  float value = 0;

  do
  {
    menu();
    scanf("%d", &optionMenu);
    switch (optionMenu)
    {
    case 1:
      printf("Enter the value to get enFilad: ");
      scanf("%f", &value);
      adiciona_fila(fila, value);
      break;

    case 2:
      if (fila_vazia(fila))
        printf("Empty Fila");

      printf("Removed element: %0.f\n", tira_fila(fila));
      break;

    case 3:
      printFila(fila);
      break;

    case 4:
      printf("The Fila has %d elements\n", countElements(fila));
      break;

    case 5:
      printf("The element's sum equals %0.f\n", sumElements(fila));
      break;

    case 6:
      printf("The Fila's first element equals %0.f\n", first(fila));
      break;

    case 7:
      printf("The Fila's last element equals %0.f\n", last(fila));
      break;

    case 0:
      break;

    default:
      printf("Invalid option!\n");
      break;
    }
  } while (optionMenu != 0);
}