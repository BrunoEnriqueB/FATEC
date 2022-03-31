#include <stdio.h>
#include <stdlib.h>
#include "fila_circular.h"

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
      {
        printf("Empty Fila");
        break;
      }

      printf("Removed element: %0.f\n", tira_fila(fila));
      break;

    case 3:
      print_fila(fila);
      break;
    case 0:
      break;

    default:
      printf("Invalid option!\n");
      break;
    }
  } while (optionMenu != 0);
}