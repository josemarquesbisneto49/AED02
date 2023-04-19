#include <stdio.h>
#include <stdlib.h>
#include "Questao09.h"

void entrada09(int *num1){
	printf("Digite um numero: ");
	scanf("%d",num1);
}

void processamento09(int *num1, int *res){
	if(*num1 > 100){
		*res = 0;
	}
}

void saida09(int saida,int n){
	if(saida == 0)
		printf(" %d > 100 \n",n);
}

void questao09 (void){
	//declaração de variaveis
	int num;
	int res = 1;

	//entrada
	entrada09(&num);

	//processamento
	processamento09(&num,&res);

	//saida
	saida09(res,num);
}

