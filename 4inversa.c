#include<stdio.h>

int main(){
	char letras[30];
	char letra;
	int contadorLetras = 0;

	printf("DIGITE O CARACTERE (PARA FINALIZAR APERTE '.'): ");
	for(int i = 0; i<30; i++){

		scanf("%c", &letra);
		contadorLetras++;
		if(letra == '.') break;
			else letras[i] = letra;
	}

	printf("\n\n");
	for(int j = contadorLetras; j>=0; j--)
		printf("%c", letras[j]);

}