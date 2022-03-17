#include <stdio.h>
#include <stdlib.h>

#define N 50
typedef struct {
   int n;
   int ini;
   float arr[N];
} Fila;

Fila *cria_fila() {
   Fila *q = (Fila*)malloc(sizeof(Fila));
   q->n = 0;
   q->ini = 0;
   return q;
}

int fila_vazia(Fila *q) {
   return q->n == q->ini ? 1 : 0;
}

void libera_fila(Fila *f) {
  free(f);
}

void printFila(Fila *q)
{
   if(fila_vazia(q))
   {
      printf("Fila vazia!\n");
      return;
   }

   printf("Valores da fila:\n");
   for(int i = q->ini; i < q->n; i++)
      printf("%.0f\n", q->arr[i]);
   printf("\n");
}

void adiciona_fila(Fila *q, float value)
{
   if(q->n == N) {
      printf("The fila is full!");
      return;
   }

   q->arr[q->n] = value;
   q->n++;
}

float tira_fila(Fila *q)
{
   float value = q->arr[q->ini];
   q->ini++;
   return value;
}