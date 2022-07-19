#include <stdio.h>
#include <stdlib.h>

    /* 21. A fábrica de refrigerantes Meia-Cola vende seu produto em três formatos: lata de 350 ml, garrafa de 600 ml e garrafa de 2 litros.
    Se um comerciante compra uma determinada quantidade de cada formato, faça um algoritmo para calcular quantos litros de refrigerante ele comprou.*/

int main() {

    printf("|===================================|\n");
    printf("|         FABRICA MEIA-COLA         |\n");
    printf("|===================================|\n");
    printf("|            LATA 350 ML            |\n");
    printf("|          GARRAFA 600 ML           |\n");
    printf("|            GARRAFA 2 L            |\n");
    printf("|===================================|\n");

    int qtd_lata, qtd_garrafa_ml, qtd_garrafa_l;
    float lata = 0.35, garrafa_ml = 0.60, garrafa_l = 1, total_litros;

    printf("\nInforme a quantidade desejada: \n");
    printf("\nLata 350 ml: ");
    scanf("%d", &qtd_lata);
    printf("Garrafa 600 ml: ");
    scanf("%d", &qtd_garrafa_ml);
    printf("Garrafa 2 l: ");
    scanf("%d", &qtd_garrafa_l);


    total_litros = (lata * qtd_lata) + (garrafa_ml * qtd_garrafa_ml) + (garrafa_l * qtd_garrafa_l);

    printf("O consumidor adquiriu %.2f litros\n", total_litros);


}
