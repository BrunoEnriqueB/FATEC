// define uma estrutura aluno, aloca espaço para um ponteiro dessa estrutura e um ponteiro q irá apontar para o primeiro ponteiro, para conseguirmos voltar para ele sempre

#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int RA;
	char nome[40];
	float nota;
	int falta;
}Aluno; //tamanho de um Aluno =52 bytes

int main(){
	
	Aluno *pa,*pb;//ponteiro para Aluno
	pa=(Aluno*)malloc(sizeof(Aluno)*3);
	pb=pa;
  int i;
	for(i = 0; i < 3; i++, pa++){
		printf("Informe o RA: ");
		scanf("%d",&pa->RA); // &(*pa).RA
		printf("Informe o nome: ");
	//	scanf(" %s",pa->nome); //&(*pa).nome
	    fflush(stdin);
		gets(pa->nome);
		printf("Informe a nota: ");
		scanf("%f",&pa->nota); //&(*pa).nota
		printf("Informe as faltas: ");
		scanf("%d",&pa->falta);//&(*pa).falta
		printf("\n");
	}
	system("cls");
	for(i = 0 , pa = pb; i < 3 ; i++, pa++){
		printf("RA: %d\nNome: %s\nNota: %.2f\nFaltas: %d\n\n",
		     pa->RA, pa->nome, pa->nota, pa->falta);
	}	
		
}