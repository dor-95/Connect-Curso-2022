#include <stdio.h>
#include <stdlib.h>

    /*1. Faça um algoritmo que leia dois valores A e B e imprima o maior deles.*/

int main()
{

    printf("|============================|\n");
    printf("|   LISTA 02 - EXERCICIO 01  |\n");
    printf("|============================|\n");

    float valorA, valorB;
    printf("Digite um valor:" );
    scanf("%f", &valorA);
    printf("Digite outro valor: ");
    scanf("%f", &valorB);

    if(valorA > valorB){
        printf("O valor %.2f e o maior deles.", valorA);
    } else if (valorA < valorB){
        printf("O valor %.2f e o maior deles.", valorB);
    } else {
        printf("Os valores %.2f e %.2f sao iguais.", valorA, valorB);
    }
}
