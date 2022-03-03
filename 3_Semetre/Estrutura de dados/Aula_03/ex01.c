#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int matricula;
  float nota;
} Aluno;

void main() {
  Aluno *Pb = (Aluno*)malloc(sizeof(Aluno));
  Pb->matricula = 200;
  Pb->nota  =  8.0; // ou (*Pb).nota = 8.0;

  printf("\nDados do aluno:\nMatricula: %d,  Nota= %.1f\n\n", Pb->matricula, Pb->nota);

  return 0;
}
