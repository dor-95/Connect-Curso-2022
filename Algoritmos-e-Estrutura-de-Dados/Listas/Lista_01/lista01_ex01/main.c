#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Exercicio 1 - A imobili�ria Im�bilis vende apenas terrenos retangulares.
    //Fa�a um algoritmo para ler as dimens�es de um
    //terreno e depois exibir a �rea do terreno

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
