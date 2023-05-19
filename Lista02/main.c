#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

#define TAM 15

int main(){
    int vet[TAM],n;

    do{
        system("cls");
        printf("Informe um vetor de 15 posicoes :\n");

        for(int i=0; i<TAM ;i++){
            scanf("%d",&vet[i]);
        }

        printf("Informe o metodo de ordernacao \n1-Bubble Sort\n2-Insertion Sort\n3-Selection Sort\n4-MergeSort\n5-QuickSort\n0-Sair\n :");
        scanf("%d",&n);

        switch(n){
            case 1:
                bubbleSort(vet,TAM);
                break;
            case 2:
                insertionSort(vet,TAM);
                break;
            case 3:
                selectionSort(vet,TAM);
            case 4:
                mergeSort(vet,0,TAM-1);
                break;
            case 5:
                quickSort(vet,0,TAM-1);
                break;
            case 0:
                n=0;
                break;
            default:
                printf("Metodo Invalido\n");
                break;
        }

        printf("VETOR ORDERNADO \n");

        for(int i=0; i<TAM ;i++){
            printf("%d ",vet[i]);
        }

        system("pause");
    }while(n!=0);

	return 0;
}
