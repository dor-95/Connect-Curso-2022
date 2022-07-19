#include <stdio.h>
#include <stdlib.h>


int main()
{
    /* Uma fábrica de camisetas produz os tamanhos pequeno, médio e grande, cada uma sendo vendida respectivamente por 10, 12 e 15 reais.
    Construa um algoritmo em que o usuário forneça a quantidade de camisetas pequenas, médias e grandes referentes a uma venda, e a máquina informe
    quanto será o valor arrecadado. */


    int valor_tamanhop = 10,valor_tamanhom = 12, valor_tamanhog = 15, total;
    int qtd_tamanhop, qtd_tamanhom, qtd_tamanhog;


    printf("============================\n");
    printf("|         CAMISETAS        |\n");
    printf("============================\n");
    printf("|         TAMANHOS          \n");
    printf("============================\n");
    printf("|        P = R$ %d      |\n", valor_tamanhop);
    printf("|        M = R$ %d      |\n", valor_tamanhom);
    printf("|        G = R$ %d      |\n", valor_tamanhog);
    printf("============================\n");

    printf("\nInforme a quantidade de camisetas vendidas: ");
    printf("\nTamanho P: ");
    scanf("%d", &qtd_tamanhop);
    printf("Tamanho M: ");
    scanf("%d", &qtd_tamanhom);
    printf("Tamanho G: ");
    scanf("%d", &qtd_tamanhog);

    //printf("%.2f\n", valor_tamanhop);
    //printf("%.2f\n", valor_tamanhom);
    //printf("%.2f\n", valor_tamanhog);

    total = (qtd_tamanhop * valor_tamanhop) + (qtd_tamanhom * valor_tamanhom) + (qtd_tamanhog * valor_tamanhog);

    printf("Sera arrecadado R$ %d\n", total);


}
