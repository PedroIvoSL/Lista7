#include<stdio.h>
#include<stdlib.h>

int main(){

	int vetor[80];

	printf("DIGITE O VALOR DO VETOR: ");
	for(int i = 0; i<80; i++)
		scanf("%i", &vetor[i]);

	system("CLS");
	printf("DIGITE O NUMERO QUE VOCE QUER SABER A REPETICAO: ");
	int numeroPerguntado;
	scanf("%i", &numeroPerguntado);
	int quantidadeVezesNumeroRepete = 0;

	for(int contador = 0; contador < 80; contador++)
		if(vetor[contador] == numeroPerguntado) quantidadeVezesNumeroRepete++;

	if(quantidadeVezesNumeroRepete == 0) printf("ESSE NUMERO NAO SE REPETE: ");
		else printf("ESSE NUMERO SE REPETE %i VEZES.", quantidadeVezesNumeroRepete);
}