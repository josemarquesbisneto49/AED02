#include <stdio.h>
#include <stdlib.h>
#include "Questao01.h"
#include "Questao02.h"
#include "Questao03.h"
#include "Questao04.h"
#include "Questao05.h"
#include "Questao06.h"
#include "Questao07.h"
#include "Questao08.h"
#include "Questao09.h"
#include "Questao10.h"
#include "Questao11.h"
#include "Questao12.h"
#include "Questao13.h"
#include "Questao14.h"
#include "Questao15.h"
#include "Questao16.h"
#include "Questao17.h"
#include "Questao18.h"
#include "Questao19.h"
#include "Questao20.h"
#include "Questao21.h"
#include "Questao22.h"
#include "Questao23.h"
#include "Questao24.h"


int main(void)
{
    int n = 1;

    do{
        printf("Informe o numero da Questao ou digite 0 para encerrar\n(Ex: xx): ");
        scanf("%d",&n);
        switch(n)
        {
        case 1:
            questao01();
            break;
        case 2:
            questao02();
            break;
        case 3:
            questao03();
            break;
        case 4:
            questao04();
            break;
        case 5:
            questao05();
            break;
        case 6:
            questao06();
            break;
        case 7:
            questao07();
            break;
        case 8:
            questao08();
            break;
        case 9:
            questao09();
            break;
        case 10:
            questao10();
            break;
        case 11:
            questao11();
            break;
        case 12:
            questao12();
            break;
        case 13:
            questao13();
            break;
        case 14:
            questao14();
            break;
        case 15:
            questao15();
            break;
        case 16:
            questao16();
            break;
        case 17:
            questao17();
            break;
        case 18:
            questao18();
            break;
        case 19:
            questao19();
            break;
        case 20:
            questao20();
            break;
        case 21:
            questao21();
            break;
        case 22:
            questao22();
            break;
        case 23:
            questao23();
            break;
        case 24:
            questao24();
            break;
        case 0:
            break;
        default:
            printf("Questao Invalida !!\n");
            break;
        }
        system("pause");
        system("cls");
    }while(n != 0);

    printf("Thanks Att, Jose Marques\n");

	return 0;
}
