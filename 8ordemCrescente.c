#include<stdio.h>
#include<stdlib.h>

int main(){

	char letras[30], letra;
	int quantidadeLetras = 0, i;

	printf("DIGITE UM '.' PARA FINALIZAR A DIGITACAO\n");
	for(i=0; i<30;i++){
		printf("DIGITE A %iª LETRA: ", i+1);
		scanf("%c", &letra);
		fflush(stdin);

		if(letra == '.'|| quantidadeLetras > 30) break;
		else letras[i] = letra;

		quantidadeLetras++;
	}

	char letraNaPosicaoJ;
	for(int i = 0; i < quantidadeLetras; i++){
		for(int j = 0; j < quantidadeLetras; j++){
			if(letras[i] > letras[j]){
				letraNaPosicaoJ = letras[j];
				letras[j] = letras[i];
				letras[i] = letraNaPosicaoJ;
			}
		}
	}

	printf("LETRAS ORDENADAS: | ");
	for(int k = 0; k<quantidadeLetras-1; k++){
		printf("%c, ", letras[k]);
	}
	printf("%c |", letras[quantidadeLetras-1]);
}