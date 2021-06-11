#include<stdio.h>
int main(){
	int reais[50], alunos;

    printf("DIGITE A QUANTIDADE DE ALUNOS NA TURMA: ");
    scanf("%i", &alunos);
	for(int i = 0; i < alunos; i++){
		printf("DIGITE A NOTA Nº%i: ", i+1);
		scanf("%i", &reais[i]);
		fflush(stdin);
	}


}