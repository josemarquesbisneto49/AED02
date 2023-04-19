#include <stdio.h>
#include <stdlib.h>
#include "Questao15.h"

void entrada15(int *num1,int *num2){
	printf("Digite o primeiro numero: ");
	scanf("%d",num1);
	printf("Digite o segundo numero: ");
	scanf("%d",num2);
}

void processamento15(int *num1,int *num2, int *res){
	if(*num1 > *num2){
		*res = 0;
	}
	if(*num1 < *num2){
		*res = 0;
	}
	if(*num1 == *num2){
	    *res = 3;
	}
}

void saida15(int saida,int n1,int n2){
	if(saida == 0)
		printf(" O numero:  %d e maior que %d\n",n1,n2);
	if(saida == 2)
		printf(" O numero:  %d e maior que %d\n",n2,n1);
	if(saida == 3)
		printf(" O numero:  %d e %d sao iguais!\n",n1,n2);
}

void questao15 (void){
	//declaração de variaveis
	int num1,num2;
	int res = 1;

	//entrada
	entrada15(&num1,&num2);

	//processamento
	processamento15(&num1,&num2,&res);

	//saida
	saida15(res,num1,num2);
}

