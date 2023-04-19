#include <stdio.h>
#include <stdlib.h>
#include "Questao11.h"

void entrada11(int *num){
	printf("Digite um numero: ");
	scanf("%d",num);
}

void processamento11(int *num, int *res){
	if(*num > 100 && *num < 500){
		*res = 0;
	}
}

void saida11(int saida,int n){
	if(saida == 0)
		printf(" 100 < %d < 500 \n",n);
}

void questao11 (void){
	//declaração de variaveis
	int num;
	int res = 1;

	//entrada
	entrada11(&num);

	//processamento
	processamento11(&num,&res);

	//saida
	saida11(res,num);
}
