#include <stdio.h>
#include <stdlib.h>
#include "Questao14.h"

void entrada14(int *num){
	printf("Digite um numero: ");
	scanf("%d",num);
}

void processamento14(int *num, int *res){
	if(*num%2==0){
		*res = 0;
	}
}

void saida14(int saida,int n){
	if(saida == 0)
		printf(" O numero: %d e par\n",n);
	else
	    printf(" O numero: %d e impar\n",n);
}

void questao14 (void){
	//declaração de variaveis
	int num;
	int res = 1;

	//entrada
	entrada14(&num);

	//processamento
	processamento14(&num,&res);

	//saida
	saida14(res,num);
}

