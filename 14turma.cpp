#include<stdio.h>

int main(){

	int notas[80];int proximaPosicao =0;int quantidadeNotas;int nota;int i;int notasRegistradas[quantidadeNotas];int frequenciasRegistradas[quantidadeNotas];int contador;int notaEmQuestao;
	bool notaJaEstaRegistrada;

	printf("DIGITE UM NÚMERO MENOR QUE ZERO PARA FINALIZAR O CADASTRO DE NOTAS\n\n");
	for(i = 0; i<80; i++){
		while(true){
			printf("DIGITE A NOTA DO %iº ALUNO: ", quantidadeNotas + 1);
			scanf("%i", &nota);
			fflush(stdin);
			if(nota > 10) printf("VALOR INVALIDO!\n");
				else break;
		}
		if(nota < 0) break;
		else if(nota <= 10){
			notas[i] = nota;
			quantidadeNotas++;
		}
	}
	for(i = 0; i<quantidadeNotas; i++){
		notaJaEstaRegistrada = false;
		notaEmQuestao = notas[i];

		for(int k = 0; k < proximaPosicao; k++)
			if(notaEmQuestao == notasRegistradas[k]) notaJaEstaRegistrada = true;

		if(!notaJaEstaRegistrada){
			contador = 0;
			for(int j = 0; j < quantidadeNotas; j++)
				if(notaEmQuestao == notas[j]) contador++;
			notasRegistradas[proximaPosicao] = notaEmQuestao;
			frequenciasRegistradas[proximaPosicao] = contador;
			proximaPosicao++;
		}
	}

	for(int a = 0; a<proximaPosicao; a++)
		printf("| %4i | %10i |\n", notasRegistradas[a], frequenciasRegistradas[a]);

}