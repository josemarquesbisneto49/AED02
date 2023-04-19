#include <stdio.h>
#include <stdlib.h>
#include "Questao07.h"

void entrada07(float *raio){
	printf("Digite o tamanho do raio: ");
	scanf("%f",raio);
}

void processamento07(float *raio,float *perimetro,float *area,float *diametro){
    float pi = 3.14;
	*perimetro = (2.0 * pi)* *raio;
	*area = pi * (*raio * *raio);
	*diametro = 2.0 * *raio;
}

void saida07(float perimetro, float area, float diametro){
	printf("Result (Perimetro ) = %.2f\n",perimetro);
	printf("Result (Area ) = %.2f\n",area);
	printf("Result (Diametro ) = %.2f\n",diametro);
}

void questao07(){
	//declaração de variaveis
	float raio, perimetro,area,diametro;

	//entrada
	entrada07(&raio);

	//processamento
	processamento07(&raio,&perimetro,&area,&diametro);

	//saida
	saida07(perimetro,area,diametro);
}
