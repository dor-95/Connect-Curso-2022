#include <stdio.h>
#include <stdlib.h>


    /*21. O restaurante da quest�o 17 realiza reservas de mesas atrav�s de liga��es telef�nicas e possui 50
    mesas dispon�veis para reserva. Dessas mesas, 25 s�o na �rea de fumantes e 25 na �rea de n�o
    fumantes. Para cada liga��o recebida, o restaurante deve verificar se a reserva � para a mesa na
    �rea de fumantes ou de n�o fumantes e contabilizar a quantidade de mesas restantes dispon�veis
    em cada �rea. Construa um algoritmo que realize a reserva das mesas e encerre a execu��o
    quando n�o houver mais mesas dispon�veis (nem na �rea de fumantes, nem na �rea de n�o
    fumantes).*/


int main() {

    int area, i = 0, fumantes = 25, naoFumantes = 25;
    int finalizar = 1;

    do{
        system("cls");

        printf("||=======================================||\n");
        printf("||          LISTA 03  -  EX 21           ||\n");
        printf("||=======================================||\n");
        printf("||          RESERVAS DE MESAS            ||\n");
        printf("||=======================================||\n");
        printf("|| COD ||    AREA      || QTD DISPONIVEL ||\n");
        printf("||=======================================||\n");
        printf("||  1  ||   FUMANTES   ||       %2d       ||\n", fumantes);
        printf("||  2  || NAO FUMANTES ||       %2d       ||\n", naoFumantes);
        printf("||=======================================||\n");

        if(fumantes == 0 && naoFumantes == 0){
            printf("\nRESERVAS ESGOTADAS!\n");
            finalizar = 0;

        } else {
            printf("\nCODIGO DA AREA PARA RESERVA: ");
            scanf("%d", &area);

            if(fumantes == 0 && area == 1){
                printf("RESERVAS PARA AREA DE FUMANTES ESGOTADAS!\n");
                printf("\n");
                system("pause");
                i--;

            } else if(naoFumantes == 0 && area == 2){
                printf("RESERVAS PARA AREA DE NAO FUMANTES ESGOTADAS!\n");
                printf("\n");
                system("pause");
                i--;

            } else {
                switch(area) {
                    case 1:
                        fumantes--;
                        break;
                    case 2:
                        naoFumantes--;
                        break;
                    default:
                        i--;
                        printf("\nCodigo invalido. Verifique o codigo no Menu de reservas.\n");
                        printf("\n");
                        fflush(stdin);
                        system("pause");
                }
            }
        }


    }while(finalizar);

}
