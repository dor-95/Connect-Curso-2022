#include <stdio.h>
#include <stdlib.h>
#define _MAX_DISTANCIA 4000

    /*22. Um viajante decidiu se aventurar e percorrer toda a BR 101 de carro a partir do quilômetro 0 até
    ultrapassar o quilômetro 4000, parando em várias cidades durante o
    a. percurso. Crie um algoritmo que, em cada cidade que o viajante parar, leia a
    b. informação da quilometragem percorrida e adicione ao valor da quilometragem total.
    c. Encerre o algoritmo quando o valor da quilometragem total percorrida for igual ou
    d. ultrapassar os 4000 km.*/

int main() {

    int i = 1;
    float distanciaPercorrida, quilometragemAtual = 0;

    do{
        fflush(stdin);
        system("cls");

        printf("||=======================================||\n");
        printf("||          LISTA 03  -  EX 22           ||\n");
        printf("||=======================================||\n");
        printf("|| BR 101 KM 0 >>>>>>>>> MAXIMO KM: %d ||\n", _MAX_DISTANCIA);
        printf("||=======================================||\n");
        printf("||=======================================||\n");
        printf("|| KM ATUAL >>>>>>>>>>>>>>>>>>>   %.1f   \n", quilometragemAtual);
        printf("||=======================================||\n");


        if(i == 1){
            printf("\nCIDADE #%d\n", i);
        } else if (i > 1){
            printf("\nDISTANCIA ENTRE CIDADE #%d E CIDADE #%d\n", i-1, i);
        }

        printf("Digite a quilometragem percorrida: ");
        scanf("%f", &distanciaPercorrida);

        if(distanciaPercorrida > 0){
            quilometragemAtual += distanciaPercorrida;
        } else {
            system("cls");
            printf("\nNumero Invalido! Tente Novamente.\n");
            system("pause");
            i--;
        }










        if(quilometragemAtual >= _MAX_DISTANCIA){
            system("cls");
            printf("\nPARABENS! DESAFIO CONCLUIDO.\n");
            printf("N%c DE CIDADES CONHECIDAS: %d\n", 248, i);
            printf("KM ATUAL: %.1f\n", quilometragemAtual);
        }

        i++;

    }while(quilometragemAtual < _MAX_DISTANCIA);

}
