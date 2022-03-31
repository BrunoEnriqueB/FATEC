#include <stdio.h>
#include <stdlib.h>

#define N 5
typedef struct
{
  int n;
  int ini;
  float arr[N];
} Fila;

Fila *cria_fila()
{
  Fila *f = (Fila *)malloc(sizeof(Fila));
  f->n = 0;
  f->ini = 0;
  return f;
}

int fila_vazia(Fila *f)
{
  return f->n == f->ini ? 1 : 0;
}

void libera_fila(Fila *f)
{
  free(f);
}

void print_fila(Fila *f)
{
  if (fila_vazia(f))
  {
    printf("Fila vazia!\n");
    return;
  }

  printf("Valores da fila:\n");
  for (int i = f->ini; i < f->n; i++)
    printf("%.0f\n", f->arr[i]);
  printf("\n");
}

void adiciona_fila(Fila *f, float value)
{
  int tamFila = f->n - f->ini;

  if (tamFila == N)
  {
    printf("A fila esta cheia\n");
    return;
  }

  if (f->n == N)
    compacta_inteligente(f);

  f->arr[f->n] = value;
  f->n++;
}

float tira_fila(Fila *f)
{
  float value = f->arr[f->ini];
  f->ini++;
  return value;
}

void compacta_inteligente(Fila *f)
{
  for (int i = 0; i < f->n; i++)
  {
    f->arr[i] = f->arr[i + f->ini];
  }
  f->n = f->n - f->ini;
  f->ini = 0;
}
