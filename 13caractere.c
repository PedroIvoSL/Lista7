#include<stdio.h>
#include<string.h>

int main(){
	char frase[80];
	int caracteresEmBranco = 0, caracteresA = 0, caracteresa = 0;
	int i;
	char par[2];
	char par2[2];

	printf("ESCREVA A FRASE: ");
	fgets(frase, 80, stdin);
	int tamanhoFrase = strlen(frase);
	printf("TAMANHO: %i\n\n", tamanhoFrase);
	for(i = 0; i<tamanhoFrase; i++){
		switch(frase[i]){
			case ' ': caracteresEmBranco++; break;
			case 'A': caracteresA++; break;
			case 'a': caracteresa++; break;
		}
	}
	int quantidadeVezesRepetiu = 0;
	int quantidadeDoQueMaisSeRepetiu = 0;
	char parQueMaisSeRepetiu[2];
	for(i = 0; i<tamanhoFrase; i++){
		quantidadeVezesRepetiu = 0;
		par[0] = frase[i];
		par[1] = frase[i+1];
		for(int j = 0; j<tamanhoFrase; j++){
			par2[0] = frase[j];
			par2[1] = frase[j+1];
			if(par[0] == par2 [0] && par[1] == par2[1]) quantidadeVezesRepetiu++;
		}
		if(quantidadeVezesRepetiu > quantidadeDoQueMaisSeRepetiu) {
			quantidadeDoQueMaisSeRepetiu = quantidadeVezesRepetiu;
			strcpy(parQueMaisSeRepetiu, par);
		}
	}
	printf("EXISTEM:\n");
	printf("%i CARACTERES EM BRANCO\n", caracteresEmBranco);
	printf("%i CARACTERES 'A'\n", caracteresA);
	printf("%i CARACTERES 'a'\n", caracteresa);
	printf("O CARACTERE QUE MAIS SE REPETIU FOI: %c%c\n", parQueMaisSeRepetiu[0], parQueMaisSeRepetiu[1]);
	printf("ESSE PAR SE REPETIU %i VEZES", quantidadeDoQueMaisSeRepetiu);
}