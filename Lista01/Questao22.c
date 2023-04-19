#include <stdio.h>
#include <stdlib.h>
#include "Questao22.h"

void entrada22(char *mun,int *qtyEle,int *numVot){
	printf("Informe o municipio: ");
	scanf("%s",mun);
	printf("Informe a quantidade de eleitores: ");
	scanf("%d",qtyEle);
	printf("Informe o numero de votos do candidato mais votado: ");
	scanf("%d",numVot);
}

void processamento22(int *qtyEle,int *numVot, int *res){
    float perc = *qtyEle / 2.0;
	if(*qtyEle < 200000)
		*res = 1;
	else if(*numVot > perc)
		*res = 1;
}

void saida22(char *mun,int saida){
	if(saida == 0)
		printf("No municipio de %s havera segundo turno para eleição do prefeito", mun);
	if(saida == 1)
		printf("No municipio de %s nao havera segundo turno para eleicao do prefeito", mun);
}

void questao22 (void){
	//declaração de variaveis
	char mun[40];
	int qtyEle,numVot,res = 0;

	//entrada
	entrada22(mun,&qtyEle,&numVot);

	//processamento
	processamento22(&qtyEle,&numVot,&res);

	//saida
	saida22(mun,res);
}

