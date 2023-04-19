#include "Questao04.h"
#include <stdio.h>
#include <stdlib.h>

void entrada04(float *salario,float *aumento){
	printf("Digite o salario: ");
	scanf("%f",salario);
	printf("Digite a porcentagem de aumento: ");
	scanf("%f",aumento);
}

void processamento04(float *salario,float *aumento,float *res){
	*res = (*salario) + ((*salario * *aumento)/(100.00));
}

void saida04(float saida){
	printf("Result (Salario Novo) = %.2f\n",saida);
}

void questao04(){
	//declaração de variaveis
	float salario,aumento;
	float res;

	//entrada
	entrada04(&salario,&aumento);

	//processamento
	processamento04(&salario,&aumento,&res);

	//saida
	saida04(res);
}
