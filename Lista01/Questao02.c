#include <stdio.h>
#include <stdlib.h>
#include "Questao02.h"

void entrada02(float *num1,float *num2,float *num3,float *num4){
	printf("Digite o 1 numero: ");
	scanf("%f",num1);
	printf("Digite o 2 numero: ");
	scanf("%f",num2);
	printf("Digite o 3 numero: ");
	scanf("%f",num3);
	printf("Digite o 4 numero: ");
	scanf("%f",num4);
}

void processamento02(float *num1,float *num2,float *num3,float *num4, float *res){
	*res = (*num1 + *num2 + *num3 + *num4 )/4.0;
}

void saida02(float saida){
	printf("Result (Media de 4 numeros) = %.2f\n",saida);
}

void questao02(){
	//declaração de variaveis
	float num1,num2,num3,num4;
	float res;

	//entrada
	entrada02(&num1,&num2,&num3,&num4);

	//processamento
	processamento02(&num1,&num2,&num3,&num4,&res);

	//saida
	saida02(res);
}
