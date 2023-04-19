#include <stdio.h>
#include <stdlib.h>
#include "Questao17.h"

void entrada17(float *valor){
	printf("Digite o valor do produto: ");
	scanf("%f",valor);
}

void processamento17(float *valor,float *res){
	if(*valor < 200.00)
		*res = (*valor) + ((*valor * 50.00)/(100.00));
	else
		*res = (*valor) - ((*valor * 30.00)/(100.00));
}

void saida17(float saida){
	printf("Result (Valor Venda) = R$ %.2f\n",saida);
}

void questao17(){
	//declaração de variaveis
	float val_prod;
	float res;

	//entrada
	entrada17(&val_prod);

	//processamento
	processamento17(&val_prod,&res);

	//saida
	saida17(res);
}
