#include <stdio.h>
#include <stdlib.h>

    /* 26. Fa�a um algoritmo que receba tr�s n�meros, calcule e mostre a multiplica��o desses n�meros. */

int main() {

    printf("|===================================|\n");
    printf("|            MULTIPLICACAO          |\n");
    printf("|===================================|\n");

    float numero_1, numero_2, numero_3, multiplicacao;

    printf("\nInforme o 1 numero: ");
    scanf("%f", &numero_1);
    printf("\nInforme o 2 numero: ");
    scanf("%f", &numero_2);
    printf("\nInforme outro numero: ");
    scanf("%f", &numero_3);

    multiplicacao = numero_1 * numero_2 * numero_3;

    printf("\nO resultado da multiplicacao dos numeros informados e: %f\n", multiplicacao);
}
