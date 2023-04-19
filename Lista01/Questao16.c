#include "Questao16.h"
#include <stdio.h>
#include <stdlib.h>

void entrada16(float *salario){
	printf("Digite o salario bruto: ");
	scanf("%f",salario);
}

void processamento16(float *salario,float *res){
	if(*salario < 2000.00)
		*res = (*salario) - ((*salario * 10.00)/(100.00));
	else
		*res = (*salario) - ((*salario * 20.00)/(100.00));
}

void saida16(float saida){
	printf("Result (Salario Liquido) = %.2f\n",saida);
}

void questao16(){
	//declaração de variaveis
	float salario_b;
	float res;

	//entrada
	entrada16(&salario_b);

	//processamento
	processamento16(&salario_b,&res);

	//saida
	saida16(res);
}
