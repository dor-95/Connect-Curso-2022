#include <stdio.h>
#include <stdlib.h>

    /* 26. Faça um algoritmo que receba três números, calcule e mostre a multiplicação desses números. */

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
