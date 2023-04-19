#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Questao19.h"

void entrada19(int *lado_1,int *lado_2,int *lado_3){
	printf("Digite o lado 1: ");
	scanf("%d",lado_1);
	printf("Digite o lado 2: ");
	scanf("%d",lado_2);
	printf("Digite o lado 3: ");
	scanf("%d",lado_3);
}

void processamento19(int *lado_1,int *lado_2,int *lado_3,char* res){
	if((*lado_1 == *lado_2) && (*lado_1 == *lado_3) && (*lado_2 == *lado_3))
		strcpy (res,"Equilatero");
	else if(*lado_1 != *lado_2 && *lado_1 != *lado_3 && *lado_2 != *lado_3)
		strcpy (res,"Escaleno");
	else
		strcpy (res,"Isosceles");
}

void saida19(char* saida){
	printf("Result = %s",saida);
}

void questao19 (void){
	//declaração de variaveis
	int lado1,lado2,lado3;
	char res[40];

	//entrada
	entrada19(&lado1,&lado2,&lado3);

	//processamento
	processamento19(&lado1,&lado2,&lado3,res);

	//saida
	saida19(res);
}

