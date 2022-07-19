#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* 11. Uma fábrica controla o tempo de trabalho sem acidentes pela quantidade de dias. Faça um algoritmo para
    converter este tempo em anos, meses e dias. Assuma que cada mês possui sempre 30 dias. */

    printf("|===================================|\n");
    printf("|             CONVERSOR             |\n");
    printf("|===================================|\n");
    printf("|  TEMPO S/ ACIDENTES DE TRABALHO   |\n");
    printf("|===================================|\n");

    int ano, mes, dias, x;

    printf("\nInforme a quantidade de dias sem acidentes: ");
    scanf("%d", &x);

    ano = (x / 365);
    mes = (x % 365) / 30;
    dias = (x % 365) % 30;

    printf("\nAte o momento foram: ");
    printf("\n%d anos;", ano);
    printf("\n%d mes(es);", mes);
    printf("\n%d dia(s);", dias);
    printf("\nSem registro de acidentes de trabalho\n");

}
