#include <stdio.h>
#include <stdlib.h>

    /* 31. Faça um algoritmo que receba o peso de uma pessoa, calcule e mostre:
    a. o novo peso se a pessoa engordar 15% sobre o peso digitado;
    b. o novo peso se a pessoa emagrecer 20% sobre o peso digitado */

int main() {

    printf("|=============================|\n");
    printf("|    GANHO E PERDA DE PESO    |\n");
    printf("|=============================|\n");

    float peso, engordar, emagrecer;

    printf("\nDigite seu peso: ");
    scanf("%f", &peso);

    engordar = peso + (peso * 0.15);
    emagrecer = peso - (peso * 0.2);

    printf("\nNovo peso com mais 15 por cento: %.2f", engordar);
    printf("\nNovo peso com menos 20 por cento: %.2f\n", emagrecer);


}
