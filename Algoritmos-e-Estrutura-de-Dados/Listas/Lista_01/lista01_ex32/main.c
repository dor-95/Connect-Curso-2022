#include <stdio.h>
#include <stdlib.h>

    /*32. Faça um algoritmo que receba o peso de uma pessoa em quilos, calcule e mostre esse peso em gramas.*/

int main(){

    printf("|==================================|\n");
    printf("|    CONVERSAO KILO PARA GRAMAS    |\n");
    printf("|==================================|\n");

    float peso, gramas;

    printf("\nInforme seu peso em Kg: ");
    scanf("%f", &peso);

    gramas = peso * 1000;

    printf("\nO peso convertido para gramas sera: %.2f g\n", gramas);

}
