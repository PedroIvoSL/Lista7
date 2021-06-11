#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char matricula[100][50]; char querContinuar;char matriculaDigitada[50];
	float salario[100];float maiorSalario = 0;float menorSalario;
	int i;int contador = 0;
	bool jaExisteFuncionario;

	do{

		printf("DIGITE A MATRICULA:: ");
		fgets(matriculaDigitada, 50, stdin);

		for(i = 0; i<contador; i++){
			if(!strcmp(matriculaDigitada, matricula[i])){
				printf("MATRICULA JA CADASTRADA!!!\n\n");
				jaExisteFuncionario = true;
				break;
			}
		}

		if(jaExisteFuncionario) continue;

		strcpy(matricula[contador], matriculaDigitada);

		printf("DIGITE O SALARIO DO FUNCIONARIO: ");
		scanf("%f", &salario[contador]);
		fflush(stdin);
		if(salario[contador] < menorSalario) menorSalario = salario[contador];
		if(salario[contador] > maiorSalario) maiorSalario = salario[contador];

		printf("DESEJA CONTINUAR? [S|N]: ");
		scanf("%c", &querContinuar);
		fflush(stdin);
		contador++;
	}while(querContinuar == 'S' || contador >100);

	system("CLS");

	for(i= 0; i< contador; i++){
		printf("| %7f | %9s |\n", salario[i], matricula[i]);
	}

	printf("MAIOR SALARIO: %.2f\n", maiorSalario);
	printf("MENOR SALARIO: %.2f", menorSalario);

}