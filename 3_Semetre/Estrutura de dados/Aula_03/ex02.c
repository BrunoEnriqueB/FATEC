// define a estrutura aluno, e recebe dados em um vetor de tamanho 3 do tipo aluno

#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int matricula;
  float nota;
} Aluno;

void main() {
  Aluno P[3];  
  for(int i = 0; i < 3; i++) {
    P[i].matricula = 200 + i;
    P[i].nota = 7 + i;
  }
  
  for(int i = 0; i < 3; i++) {
    printf("\nDados do aluno:\nMatricula: %d,  Nota= %.1f\n\n", P[i].matricula, P[i].nota);
  }

  return 0;
}
