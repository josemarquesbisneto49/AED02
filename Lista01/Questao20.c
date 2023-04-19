#include "Questao20.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void entrada20(int *num1,int *num2,int *num3){
	printf("Digite o numero 1: ");
	scanf("%d",num1);
	printf("Digite o numero 2: ");
	scanf("%d",num2);
	printf("Digite o numero 3: ");
	scanf("%d",num3);
}

void processamento20(int *num1,int *num2,int *num3,int *res, int *equal){
	if(*num1 > *num2 && *num1 > *num3)
		*res = *num1;
	else if(*num2 > *num1 && *num2 > *num3)
		*res = *num2;
	else if(*num3 > *num1 && *num3 > *num2)
		*res = *num3;
	else if(*num1 == *num2 && *num2==*num3 && *num3==*num1)
		*equal = 1;
}

void saida20(int *saida,int *equal){
	if(*equal == 1)
		printf("Número idênticos");
	else
	    printf("Result = %d",*saida);
}

void questao20 (void){
	//declaração de variaveis
	int numero1,numero2,numero3;
	int res,equal = 0;

	//entrada
	entrada20(&numero1,&numero2,&numero3);

	//processamento
	processamento20(&numero1,&numero2,&numero3,&res,&equal);

	//saida
	saida20(&res,&equal);
}
