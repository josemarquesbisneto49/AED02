#include "Questao10.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void entrada10(char *password){
	printf("Digite a senha: ");
	scanf("%s",password);
}

void processamento10(char *password, int *res){
	if(strcasecmp(password, "LINGUAGEMC") == 0){
		*res = 0;
	}
}

void saida10(int saida){
	if(saida == 0)
		printf("Senha Valida\n");
	else
		printf("Senha Invalida\n");
}

void questao10 (void){
	//declaração de variaveis
	char password[10];
	int res = 1;

	//entrada
	entrada10(password);

	//processamento
	processamento10(password,&res);

	//saida
	saida10(res);
}
