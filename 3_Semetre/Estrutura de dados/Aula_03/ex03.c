// define a estrutura aluno, cria um vetor de tamanho 3 com ela, e com um ponteiro apontado para o vetor, recebe os dados

#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int RA;
	char nome[40];
	float nota;
	int falta;
}Aluno; //tamanho de um Aluno =52 bytes

int main(){
	Aluno a[3]; //vetor de 3 alunos
	Aluno *pa; //ponteiro para Aluno
	pa=a;
	for(int i = 0; i < 3 ; i++){
		printf("Informe o RA: ");
		scanf("%d", &pa[i].RA); // ou scanf("%d", &a[i].RA);
		printf("Informe o nome: ");
		scanf(" %s",&a[i].nome); // ou canf(" %s",&a[i].nome);
		printf("Informe a nota: ");
		scanf("%f",&a[i].nota); // ou	scanf("%f",&a[i].nota);
		printf("Informe as faltas: ");
		scanf("%d",&a[i].falta); // ou scanf("%d",&a[i].falta);
		printf("\n");
	}
	system("cls");
	for(int i = 0 ; i < 3 ; i++){
		printf("RA: %d\nNome: %s\nNota: %.2f\nFaltas: %d\n\n",
		     pa[i].RA, pa[i].nome, pa[i].nota, pa[i].falta);
	}	
		
}
