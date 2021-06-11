#include<stdio.h>

int main(){

	int idade;int idades[100];int somaIdades = 0, quantidadeIdades=0;int maiorIdade = 0;
	float mediaIdades;

	printf("DIGITE UMA IDADE MENOR OU IGUAL A ZERO PARA FINALIZAR O CADASTRO DE IDADES \n\n");
	for(int i = 0; i<100; i++){
		printf("Digite a idade: ");
		scanf("%i", &idade);
		fflush(stdin);

		if(idade > 200){
			printf("IDADE EXCEDEU A MEMORIA DE \"IDADE\" \n\n");
			continue;
		}
		if(idade <= 0) break;
		else {
			idades[i] = idade;
			quantidadeIdades++;
			somaIdades = somaIdades + idade;
			if(idade > maiorIdade) maiorIdade = idade;
		}
	}

	int vezesMaiorSeRepete [quantidadeIdades];
	int quantidadeMaiorSeRepete = 0;

	for(int contador2 = 0; contador2 < quantidadeIdades; contador2++){

		if(idades[contador2] == maiorIdade) {
			vezesMaiorSeRepete[quantidadeMaiorSeRepete] = contador2;
			quantidadeMaiorSeRepete++;
		}
	}

	mediaIdades = somaIdades / quantidadeIdades;
	printf("MEDIA DAS IDADES: %.2f\n", mediaIdades);
	printf("MAIOR IDADE: %i\n", maiorIdade);
	printf("A MAIOR IDADE APRACE NA POSICAO: ");

	for(int j = 0; j<quantidadeMaiorSeRepete; j++)
		printf("%i, ", vezesMaiorSeRepete[j]);

}