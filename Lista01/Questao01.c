#include <stdio.h>
#include <stdlib.h>
#include "Questao01.h"

void entrada01(int *num1,int *num2,int *num3){
	printf("Digite um numero: ");
	scanf("%d",num1);
	printf("Digite outro numero: ");
	scanf("%d",num2);
	printf("Digite mais um numero: ");
	scanf("%d",num3);
}

void processamento01(int *num1,int *num2,int *num3, int *res){
	*res = *num1 + *num2 + *num3;
}

void saida01(int saida){
	printf("Result (n+n+n) = %d\n",saida);
}

void questao01(){
	//declaração de variaveis
	int num1,num2,num3;
	int res;

	//entrada
	entrada01(&num1,&num2,&num3);

	//processamento
	processamento01(&num1,&num2,&num3,&res);

	//saida
	saida01(res);
}
