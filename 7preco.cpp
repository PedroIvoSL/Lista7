#include<stdio.h>
#include<stdlib.h>
int main(){

	int quantCD, menuAcao;
	float porAumento;

	while(true){
		printf("DIGITE A QUANTIDADE DE CDS: ");
		scanf("%d", &quantCD);
		if(quantCD < 1 or quantCD > 100){
			printf("NUMERO INVALIDO!.\n");
		} else break;
	}
	float precoCD[quantCD], novoPreco[quantCD];

	for(int i = 1; i <= quantCD; i++){
		printf("DIGITE O PRECO DO CD %d: ", i+1);
		scanf("%f", &precoCD[i]);
	}

	system("cls");
	while(true){
		printf("QUAL AÇÃO VOCE DESEJA REALIZAR?:\n1 - AUMENTAR PRECO DO CD EM 10 CENTAVOS\n");
		printf("2 - INFORMAR O PERCENTUAL DO AUMENTO DO PRECO\n");
		scanf("%d", &menuAcao);
		if(menuAcao < 1 or menuAcao > 2){
			printf("NUMERO INVALIDO.\n");
		} else break;
	}
	system("cls");
	if(menuAcao == 1){
		printf("AUMENTADO!.\n");
		for(int i = 1; i <= quantCD; i++){
			printf("PRECO ANTIGO%d: %.2f\t",i, precoCD[i]);
			novoPreco[i] = 110 * precoCD[i]/100;
			printf("NOVO PRECO %d: %.2f\n",i, novoPreco[i]);
		}
	}
	if(menuAcao == 2){
		printf("PERCENTUAL DE AUMENTO: ");
		scanf("%f", &porAumento);
		printf("AUMENTO DE %.2f.\n", porAumento);
		for(int i = 1; i <= quantCD; i++){
			printf("PRECO ANTIGO %d: %.2f\t",i, precoCD[i]);
			novoPreco[i] = (100 + porAumento) * precoCD[i]/100;
			printf("NOVO PRECO %d: %.2f\n",i, novoPreco[i]);
		}
	}

}