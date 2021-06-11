#include<stdio.h>

int main(){
	int contador;
	int a[10], b[10], c[10][10];

	for(contador = 0; contador < 10; contador++){
		printf("DIGITE A POSICAO DO %i DO VETOR A: ", contador);
		scanf("%i", &a[contador]);
	}
	printf("\n\n");
	for(contador = 0; contador < 10; contador++){
		printf("DIGITE A POSICAO DO %i DO VETOR B: ", contador);
		scanf("%i", &b[contador]);
	}
	printf("\n\n");
	for(int i = 0; i<10; i++){
		for(int j = 0; j<10; j++){
			c[i][j] = a[i] + b[j];
		}
	}
	int linha, coluna;
	for(linha = 0; linha < 10; linha++){
		printf("[");
		for(coluna = 0; coluna<9; coluna++){
			printf("%3i, ", c[linha][coluna]);
		}
		printf("%3i]\n", c[linha][9]);
	}
	int valor, posicaoLinha, posicaoColuna;
	printf("\n\n");
	printf("PESQUISE O VALOR: ");
	scanf("%i", &valor);

	for(linha = 0; linha < 10; linha++){
		for(coluna = 0; coluna<10; coluna++){
			if(c[linha][coluna] == valor){
				printf("O VALOR DIGITADO APARECE NA LINHA %i E COLUNA %i\n", linha, coluna);
			}
		}
	}

}