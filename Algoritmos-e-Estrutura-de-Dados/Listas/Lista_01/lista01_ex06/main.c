#include <stdio.h>

    /*6. O restaurante a quilo Bem-B�o cobra R$12,00 por cada
    quilo de refei��o. Escreva um algoritmo que leia o peso do
    prato montado pelo cliente (em quilos) e imprima o valor a
    pagar. Assuma que a balan�a j� desconte o peso do prato.*/

int main(){

    int price = 12;

    printf("============================\n");
    printf("|        RESTAURANTE       |\n");
    printf("============================\n");
    printf("|          BEM-BAO         |\n");
    printf("============================\n");
    printf("|      KILO   |  R$ %d     |\n", price);
    printf("============================\n");


    float kilogram;
    printf("\nInforme peso do prato (Kg): ");
    scanf("%f", &kilogram);

    float final_price = price * kilogram;
    printf("Valor total a pagar: R$ %.2f\n", final_price);

}
