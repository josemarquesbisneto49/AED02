#include <stdio.h>
#include <stdlib.h>
#include "Questao13.h"

void entrada13(int *num){
	printf("Digite um numero: ");
	scanf("%d",num);
}

void processamento13(int *num, int *res){
	if(*num%5==0){
		*res = 0;
	}
}

void saida13(int saida,int n){
	if(saida == 0)
		printf(" O numero:  %d e divisivel por 5 \n",n);
	else
	    printf(" O numero:  %d nao e divisivel por 5 \n",n);
}

void questao13 (void){
	//declaração de variaveis
	int num;
	int res = 1;

	//entrada
	entrada13(&num);

	//processamento
	processamento13(&num,&res);

	//saida
	saida13(res,num);
}

