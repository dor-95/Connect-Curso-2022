#include <stdio.h>
#include <stdlib.h>

    /* 27. Fa�a um algoritmo que receba dois n�meros, calcule e mostre a divis�o do primeiro n�mero pelo segundo.
    Sabe-se que o segundo n�mero n�o pode ser zero, portanto n�o � necess�rio se preocupar com valida��es. */

int main() {

    printf("|===================================|\n");
    printf("|              DIVISAO              |\n");
    printf("|===================================|\n");

    float numero_1, numero_2, divisao;

    printf("\nInforme o 1 numero: ");
    scanf("%f", &numero_1);
    printf("\nInforme o 2 numero: ");
    scanf("%f", &numero_2);

    divisao = numero_1 / numero_2;

    printf("\nO resultado da divisao dos numeros informados e: %f\n", divisao);
}
