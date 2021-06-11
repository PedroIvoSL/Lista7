#include<stdio.h>
#include<stdlib.h>

int main(){
	char letras[30], letra;
	int quantidadeLetras = 0, i;

	printf("DIGITE '#' PARA PARAR A DIGITAÇÃO DE CARACTERES\n\n");
	for(i=0; i<30;i++){
		printf("Digite a %iª letra: ", i+1);
		scanf("%c", &letra);
		fflush(stdin);
		if(letra == '#'|| quantidadeLetras > 30) break;
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
	printf("Letras ordenadas: [");
	for(int k = 0; k<quantidadeLetras-1; k++){
		printf("%c, ", letras[k]);
	}
	printf("%c]", letras[quantidadeLetras-1]);

	system("PAUSE");
	system("CLS");

	bool possuiOCaracterPesquisado;
	char caracterPesquisado;
	printf("Digite pesquise um caracter: ");
	scanf("%c", &caracterPesquisado);
	possuiOCaracterPesquisado = false;
	printf("O CARACTERE PESQUISADO SE ENCONTRA: \n");
	for(i = 0; i < quantidadeLetras; i++){
		if(letras[i] == caracterPesquisado) {
			printf("NA POSICAO %i", i);
			possuiOCaracterPesquisado = true;
		}
	}

	if(!possuiOCaracterPesquisado) printf("O CARACTERE NAO EXISTE!.");
}