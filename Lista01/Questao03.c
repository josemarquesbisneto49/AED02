#include <stdio.h>
#include <stdlib.h>
#include "Questao03.h"

void entrada03(float *nota1,float *peso1,float *nota2,float *peso2){
	printf("Digite a nota da  1 prova: ");
	scanf("%f",nota1);
	printf("Digite o peso da 1 prova: ");
	scanf("%f",peso1);
	printf("Digite a nota da  2 prova:");
	scanf("%f",nota2);
	printf("Digite o peso da 2 prova: ");
	scanf("%f",peso2);
}

void processamento03(float *nota1,float *peso1,float *nota2,float *peso2, float *res){
	*res = ((*nota1 * *peso1) + (*nota2 * *peso2))/(*peso1 + *peso2);
}

void saida03(float saida){
	printf("Result (Media ponderada) = %.2f\n",saida);
}

void questao03(){
	//declaração de variaveis
	float nota1,peso1,nota2,peso2;
	float res;

	//entrada
	entrada03(&nota1,&peso1,&nota2,&peso2);

	//processamento
	processamento03(&nota1,&peso1,&nota2,&peso2,&res);

	//saida
	saida03(res);
}
