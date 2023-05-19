#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void merge(int *vet,int inicio, int meio, int fim);
int particiona(int* vet,int inicio, int fim);

void insertionSort(int *vetor, int tamanho) {
    int i,j,aux;
    int trocas=0;
    int comp=0;
    for(i=0; i<tamanho-1; i++) {
      	comp++;
        if(vetor[i]>vetor[i+1]) {
           aux=vetor[i+1];
           vetor[i+1]=vetor[i];
		   vetor[i]=aux;
           j=i-1;
           trocas++;
           while(j>=0){
		   	  comp++;
		   	  if(aux<vetor[j]){
                 vetor[j+1]=vetor[j];
		         vetor[j]=aux;
			     trocas++;
			  } else {
			  	 break;
			  }
			  j=j-1;
		   }
        }
    }
}

void bubbleSort(int *vetor, int tamanho) {
    int i,aux;
    int flag=1;
    int trocas=0;
    int comp=0;
    while(flag) {
        flag=0;
        for(i=0; i<tamanho-1; i++) {
        	comp++;
            if(vetor[i]>vetor[i+1]) {
			   aux=vetor[i];
               vetor[i]=vetor[i+1];
			   vetor[i+1]=aux;
               flag=1;
               trocas++;
            }
        }
    }
}

void selectionSort(int *vetor, int tamanho){

    int min, aux;

    for(int i=0;i<tamanho-1;i++){
        min=i;
        for(int j=i+1 ; j<tamanho ; j++){
            if(vetor[min] > vetor[j])
                min=j;
        }
        if(i!=min){
            aux=vetor[i];
            vetor[i]=vetor[min];
            vetor[min]=aux;
        }
    }
}

void mergeSort(int *vetor,int inicio,int fim){
    int meio;
    if(inicio < fim){
        meio = floor((inicio+fim)/2);
        mergeSort(vetor,inicio,meio);
        mergeSort(vetor,meio+1,fim);
        merge(vetor,inicio,meio,fim);
    }
}

void merge(int *vet,int inicio, int meio, int fim){
    //vetor temporario
    int *temp;
    int p1,p2,tamanho,i,j,k;
    //0 = false 1=true
    int acabou1=0, acabou2= 0;
    tamanho=fim-inicio+1;
    p1 = inicio;
    p2 = meio+1;
    //aloca memoria para o vetor
    temp = (int *) malloc(tamanho*sizeof(int));
    if(temp != NULL){
        //percorre o vetor
        for(i=0; i<tamanho; i++){
            if(!acabou1 && !acabou2){
                if(vet[p1]< vet[p2])
                    temp [i] = vet[p1++];
                else
                    temp [i] = vet[p2++];
                // verifica se chegou o fim
                if(p1>meio) acabou1=1;
                if(p2>fim) acabou2=1;
            }
            //copia o resto do vetor
            else{
                if(!acabou1)
                    temp[i] = vet[p1++];
                else
                    temp[i] = vet[p2++];
            }
        }
        for(j=0,k=inicio;j<tamanho;j++,k++)
            vet[k]=temp[j];
    }
    //libera memoria
    free(temp);
}

void quickSort(int* vetor,int inicio, int fim){
    int pivo;
    if(inico > fim){
        pivo = particiona(V, inicio, fim);
        quickSort(vetor,inicio,pivo-1);
        quickSort(vetor,pivo+1,fim);
    }
}

int particiona(int* vet,int inicio, int fim){
    int esq,dir,pivo,aux;
    esq = inicio;
    dir = fim;
    //o primeiro elemento se torna o pivo
    pivo = vet[inicio];
    while(esq < dir){
        //avança posição da esquerda
        //para que os elementos menor que o pivo fiquem a esquerda
        while(vet[esq] <= pivo)
            esq++;
        //recua posição da direita
        //para que os elementos maior que o pivo fiquem a direita
        while(vet[dir] > pivo)
            dir--;
        //caso o elemnto da direita com o da esquerda caso seja menor que o pivo
        if(esq < dir){
            aux = vet[esq];
            vet[esq] = vet[dir];
            vet[dir]= aux;
        }
    }
    //troca a dir e inico de lugar pq o Dir é o novo pivo
    vet[inicio] = vet[dir];
    vet[dir] = pivo;
    return dir;
}
