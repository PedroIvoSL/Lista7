#include<stdio.h>
#include<stdlib.h>

int main(){
	int dados[100];

	for(int i = 0; i<100; i++){
        printf("DIGITE O %i NUMERO: ", i+1);
		scanf("%i", &dados[i]);
	}

	int somatorio = 0;
	for(int j =0; j<100; j++){
		somatorio = somatorio + dados[j];
	}
	printf("\nA SOMA DOS NUMEROS DIGITADOS:  %i", somatorio);
}
