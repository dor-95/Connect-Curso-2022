#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Exercicio 2 - Faça um algoritmo para calcular quantas ferraduras
    //são necessárias para equipar todos os cavalos
    //comprados para um haras.

    printf("============================\n");
    printf("|           HARAS          |\n");
    printf("============================\n");
    printf("|       CASCAVEL - PR      |\n");
    printf("============================\n");

    unsigned short int qtd_cavalos;

    printf("\nDigite o numero de cavalos adquiridos: ");
    scanf("%d", &qtd_cavalos);

    printf("Serao necessarias %d ferraduras para equipar os cavalos.\n", qtd_cavalos*4);
}
