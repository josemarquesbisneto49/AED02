#include <stdio.h>
#include <stdlib.h>
#include "Questao24.h"

void entrada24(int *valor_compra, int *valor_pagamento){
    printf("Informe o valor da compra: ");
    scanf("%d",valor_compra);
    printf("Informe o valor do pagamento: ");
    scanf("%d",valor_pagamento);
}

void processamento24(int *valor_compra, int *valor_pagamento, int *n100,int *n10,int *n1){
    int troco = *valor_pagamento - *valor_compra;
    if(*valor_pagamento < *valor_compra)
        printf("Pagamento Negado.\n");
    else{
        printf("Troco Necessario: %d\n",troco);
        *n100 = troco / 100;
        troco = troco - (*n100 * 100);
        *n10 = troco/ 10;
        troco = troco - (*n10 * 10);
        *n1 = troco / 1;
    }
}

void saida24(int n100,int n10,int n1){
    if(n100 > 0)
        printf("%d notas de R$ 100\n",n100);
    if(n10 > 0)
        printf("%d notas de R$ 10\n",n10);
    if(n1 > 0)
        printf("%d notas de R$ 1\n",n1);
}

void questao24(){
    int pag,comp;
    int n100=0,n10=0,n1=0;

    //entrada
    entrada24(&comp,&pag);

    //processamento
    processamento24(&comp,&pag,&n100,&n10,&n1);

    //saida
    saida24(n100,n10,n1);

}
