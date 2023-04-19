#include "Questao18.h"
#include <stdio.h>
#include <stdlib.h>

void entrada18(float *nota1,float *nota2){
	printf("Digite a nota da  1 prova: ");
	scanf("%f",nota1);
	printf("Digite a nota da  2 prova:");
	scanf("%f",nota2);

}

void processamento18(float *nota1,float *nota2, float *res){
	float media = (*nota1 + *nota2) / 2.0;
	printf("Media : %.2f\n",media);
	if (media >= 7.0)
		*res = 0;
	else if(media >= 3 && media < 7)
		*res = 1;
	else
		*res = 2;
}

void saida18(float res){
	if(res == 0)
		printf("Aprovado \n");
	else if(res == 1)
		printf("Prova Final \n");
	else if(res== 2)
		printf("Reprovado \n");
}

void questao18(){
	//declaração de variaveis
	float nota1,nota2;
	float res = 1;

	//entrada
	entrada18(&nota1,&nota2);

	//processamento
	processamento18(&nota1,&nota2,&res);

	//saida
	saida18(res);
}
