#include<stdio.h>
int main(){
	int nota[30];

	for(int i = 0; i < 30; i++){
		printf("DIGITE A NOTA Nº%i: ", i+1);
		scanf("%i", &nota[i]);
		fflush(stdin);
	}


}