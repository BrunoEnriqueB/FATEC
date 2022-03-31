#include <stdio.h>
#include <stdlib.h>

#define N 5
typedef struct
{
  int ini;      // inicio da fila
  int fim;      // fim da fila
  int tamVetor; // tamanho do vetor
  float *vet;   // ponteiro para um vetor de float

  int tamFila; // explicito para fila circular
} Fila;

Fila *cria_fila()
{
  Fila *f = (Fila *)malloc(sizeof(Fila));
  f->fim = 0;
  f->ini = 0;
  f->tamFila = 0;
  f->tamVetor = N;
  f->vet = (float *)malloc(sizeof(float) * f->tamVetor); // alocação da área onde está o vetor
  return f;
}

void adiciona_fila(Fila *f, float value)
{
  if (f->tamFila < f->tamVetor)
  {                            // tem espaço porque a fila toda é menor que o vetor
    if (f->fim == f->tamVetor) //última posição está alocada
      f->fim = 0;
    // insere o elemento
    f->vet[f->fim] = value;
    f->fim++;
    f->tamFila++; // ao inserir um elemento incrementa o tamanho da fila
  }
  else
  {
    printf("Fila cheia!");
  }
}

int fila_vazia(Fila *f)
{
  return f->tamFila == 0;
}

float tira_fila(Fila *f)
{
  float v = f->vet[f->ini];
  if (f->ini == f->tamVetor - 1) // ultimo indice
    f->ini = 0;
  else
    f->ini++;

  f->tamFila--; // remove um elemento do tamanho
  return v;
}

void libera_fila(Fila *f)
{
  free(f->vet);
  free(f);
}

void print_fila(Fila *f)
{
  if (f->tamFila == 0)
  {
    printf("Fila vazia\n");
    return;
  }
  printf("Conteudo da fila\n");
  int i;
  if (f->ini < f->fim) // fila não circulou
    for (i = f->ini; i < f->fim; i++)
      printf("%.0f\n", f->vet[i]);
  else
  { // fila circulou
    for (i = f->ini; i < f->tamVetor; i++)
      printf("%.0f\n", f->vet[i]);
    for (i = 0; i < f->fim; i++)
      printf("%.0f\n", f->vet[i]);
  }
  printf("\n");
}