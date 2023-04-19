#include <stdio.h>
#include <stdlib.h>
#include "Questao05.h"

void entrada05(float *salario,float *dependentes){
	printf("Digite o salario base: ");
	scanf("%f",salario);
	printf("Digite o numero de dependentes: ");
	scanf("%f",dependentes);
}

void processamento05(float *salario,float *dependentes,float *res){
	float salario_b = *salario + (*dependentes) * 32.00;
	*res = (salario_b) - ((salario_b * 27.50)/(100.00));
}

void saida05(float saida){
	printf("Result (Salario Bruto) = %.2f\n",saida);
}

void questao05(){
	//declaração de variaveis
	float salario,dependentes;
	float res;

	//entrada
	entrada05(&salario,&dependentes);

	//processamento
	processamento05(&salario,&dependentes,&res);

	//saida
	saida05(res);
}

