#include <stdio.h>
#include <stdlib.h>
#include "Questao12.h"

void entrada12(float *nota1,float *nota2){
	printf("Digite a nota da  1 prova: ");
	scanf("%f",nota1);
	printf("Digite a nota da  2 prova:");
	scanf("%f",nota2);

}

void processamento12(float *nota1,float *nota2, float *res){
	float media = (*nota1 + *nota2) / 2.0;
	printf("Media : %.2f\n",media);
	if (media >= 7.0)
		*res = 0;
}

void saida12(float res){
	if(res == 0)
		printf("Aprovado \n");
	else
		printf("Reprovado \n");
}

void questao12(){
	//declaração de variaveis
	float nota1,nota2;
	float res = 1;

	//entrada
	entrada12(&nota1,&nota2);

	//processamento
	processamento12(&nota1,&nota2,&res);

	//saida
	saida12(res);
}

