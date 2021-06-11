#include<stdio.h>
#include<stdlib.h>

int main(){
	int matriculaFuncional[50];
	int mesesTrabalho[50];
	int matricula, meses, quantidadeFuncionarios = 0, i, j, troca;
	bool contratadosNoMesmoMes, mesmaMatricula;

	printf("DIGITE 0 NA MATRÍCULA PARA ENCERRAR O CADASTRO DE FUNCIONÁRIOS\n\n");
	for(i = 0; i<50; i++){

		contratadosNoMesmoMes = false;
		mesmaMatricula = false;

		printf("DIGITE A MATRICULA: ");
		scanf("%i", &matricula);
		if(matricula == 0) break;

		for(int j = 0; j < quantidadeFuncionarios; j++)
			if(matricula == matriculaFuncional[j]) mesmaMatricula = true;

		printf("QUANTOS MESES ELE TRABALHOU?: ");
		scanf("%i", &meses);

		for(int j = 0; j < quantidadeFuncionarios; j++)
			if(meses == mesesTrabalho[j]) contratadosNoMesmoMes = true;

		if(!mesmaMatricula && !contratadosNoMesmoMes){
			mesesTrabalho[quantidadeFuncionarios] = meses;
			matriculaFuncional[quantidadeFuncionarios] = matricula;
			quantidadeFuncionarios++;
		} else {
			printf("MATRICULA INVALIDA!\n\n");
		}
	}

	for(i = 0; i< quantidadeFuncionarios; i++){
		for(j = 0; j< quantidadeFuncionarios; j++){
			if(mesesTrabalho[i] < mesesTrabalho[j]){
				troca = mesesTrabalho[i];
				mesesTrabalho[i] = mesesTrabalho[j];
				mesesTrabalho[j] = troca;
				troca = matriculaFuncional[i];
				matriculaFuncional[i] = matriculaFuncional[j];
				matriculaFuncional[j] = troca;
			}
		}
	}

	system("CLS");
	for(i = 0; i< 3; i++)
		printf("FUNCIONARIO %i, COM %i MESES DE TRABALHO\n", matriculaFuncional[i], mesesTrabalho[i]);
}