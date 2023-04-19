#include <stdio.h>
#include <stdlib.h>
#include "Questao08.h"

void entrada08(float *kmh){
	printf("Digite a velocidade em KM/H: ");
	scanf("%f",kmh);
}

void processamento08(float *kmh,float *res){
	*res = ((*kmh)/ 3.6);
}

void saida08(float saida){
	printf("Result (Velocidade M/S ) = %.2f",saida);
}

void questao08(){
	//declaração de variaveis
	float kmh;
	float res;

	//entrada
	entrada08(&kmh);

	//processamento
	processamento08(&kmh,&res);

	//saida
	saida08(res);
}
