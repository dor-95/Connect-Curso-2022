#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Exercicio 1 - A imobiliária Imóbilis vende apenas terrenos retangulares.
    //Faça um algoritmo para ler as dimensões de um
    //terreno e depois exibir a área do terreno

    printf("============================\n");
    printf("|   IMOBILIARIA IMOBILIS   |\n");
    printf("============================\n");
    printf("|         TERRENOS         |\n");
    printf("============================\n");

    float comprimento, largura;

    //printf("\n");
    printf("\nInforme o comprimento do terreno (metros): ");
    scanf("%f", &comprimento);
    printf("Informe a largura do terreno: ");
    scanf("%f", &largura);

    printf("A area do terreno: %.2f\n", comprimento*largura);
}
