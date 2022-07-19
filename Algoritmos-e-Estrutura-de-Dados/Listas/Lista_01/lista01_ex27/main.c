#include <stdio.h>
#include <stdlib.h>

    /* 27. Faça um algoritmo que receba dois números, calcule e mostre a divisão do primeiro número pelo segundo.
    Sabe-se que o segundo número não pode ser zero, portanto não é necessário se preocupar com validações. */

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
