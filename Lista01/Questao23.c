#include <stdio.h>
#include <stdlib.h>
#include "Questao23.h"

void entrada23(int *distancia,char *carro){
	printf("Digite o tipo de carro: ");
	scanf("%s",carro);
	printf("Digite um distancia: ");
	scanf("%d",distancia);
}

void processamento23(int *distancia,char *carro,int *res){
    //printf("%d",distancia);
    int aux = *distancia;
	switch(*carro){
		case 'A':
			*res = 8 * aux;
			break;
		case 'B':
			*res = 9*aux;
			break;
		case 'C':
			*res = 12 * aux;
			break;
		default:
			printf("Tipo de Carro Invalido !!\n");
			break;
	}

}

void saida23(int saida){
	printf("Result (Consumo) = %d L",saida);
}

void questao23 (void){
	//declaração de variaveis
	int distancia;
	char carro;
	int res;

	//entrada
	entrada23(&distancia,&carro);

	//processamento
	processamento23(&distancia,&carro,&res);

	//saida
	saida23(res);
}
