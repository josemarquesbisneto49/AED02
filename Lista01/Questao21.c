#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Questao21.h"

void entrada21(int *num1,int *num2,int *num3){
	printf("Digite o numero 1: ");
	scanf("%d",num1);
	printf("Digite o numero 2: ");
	scanf("%d",num2);
	printf("Digite o numero 3: ");
	scanf("%d",num3);
}

void saida21(int *n1,int *n2,int *n3,int *equal){
	if(*equal == 1)
		printf("Número idênticos");
	else
	    printf("Ordem Crescente = %d %d %d",*n1,*n2,*n3);
}

void processamento21(int *num1,int *num2,int *num3, int *equal){
	if(*num1 == *num2 && *num2==*num3 && *num3==*num1){
		*equal = 1;
		saida21(num1,num2,num3,equal);
	}
	else if(*num1 < *num2 && *num1 < *num3){
		if(*num2 < *num3)
			saida21(num1,num2,num3,equal);
		else
			saida21(num1,num3,num2,equal);
	}
	else if(*num2 < *num1 && *num2 < *num3){
		if(*num1 < *num3)
			saida21(num2,num1,num3,equal);
		else
			saida21(num2,num3,num1,equal);
	}
	else if(*num3 < *num1 && *num3 < *num2){
		if(*num1 < *num2)
			saida21(num3,num1,num2,equal);
		else
			saida21(num3,num2,num1,equal);
	}
}


void questao21 (void){
	//declaração de variaveis
	int numero1,numero2,numero3;
	int res,equal = 0;

	//entrada
	entrada21(&numero1,&numero2,&numero3);

	//processamento
	processamento21(&numero1,&numero2,&numero3,&equal);

}
