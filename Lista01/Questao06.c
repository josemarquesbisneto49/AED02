#include <stdio.h>
#include <stdlib.h>
#include "Questao06.h"

void entrada06(float *valor_antigo,float *valor_novo){
	printf("Digite o valor antigo: ");
	scanf("%f",valor_antigo);
	printf("Digite o valor novo: ");
	scanf("%f",valor_novo);
}

void processamento06(float *valor_antigo,float *valor_novo,float *res){
	*res = ((*valor_novo - *valor_antigo)/ *valor_antigo) * 100.00;
}

void saida06(float saida){
	printf("Result (Aumento do preco ) = %.2f %c",saida,(char)37);
}

void questao06(){
	//declaração de variaveis
	float valor_antigo,valor_novo;
	float res;

	//entrada
	entrada06(&valor_antigo,&valor_novo);

	//processamento
	processamento06(&valor_antigo,&valor_novo,&res);

	//saida
	saida06(res);
}

