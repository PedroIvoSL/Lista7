#include<stdio.h>
#include<stdlib.h>

int main(){
	int codigoFuncional[100];int quantidadeFuncionarios = 0, matricula, i;
	bool mesmaMatricula;
	double salario;double menorSalario = 900000000;double maiorSalario = 0;double somaSalarios = 0;double salarios[100];

	for(i = 0; i<100; i++){
		mesmaMatricula = false;

		printf("DIGITE A MATRICULA: ");
		scanf("%i", &matricula);
		fflush(stdin);

		if(matricula == 0) break;

		for(int j = 0; j < quantidadeFuncionarios; j++)
			if(matricula == codigoFuncional[j]) mesmaMatricula = true;

		printf("DIGITE O SALARIO DO FUNCIONARIO: ");
		scanf("%d", &salario);
		fflush(stdin);

		if(!mesmaMatricula){
			salarios[quantidadeFuncionarios] = salario;
			codigoFuncional[quantidadeFuncionarios] = matricula;
			quantidadeFuncionarios++;
			if(salario > maiorSalario) maiorSalario = salario;
			if(salario < menorSalario) menorSalario = salario;
			somaSalarios = somaSalarios + salario;
		} else printf("MATRICULA JA EXISTENTE!\n\n");
	}

	double mediaSalarial = somaSalarios / quantidadeFuncionarios;

	printf("MAIOR SALARIO: %d\n", maiorSalario);
	printf("MENOR SALARIO %d\n", menorSalario);
	printf("MEDIA SALARIAL %d", mediaSalarial);
}