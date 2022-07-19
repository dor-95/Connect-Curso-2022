#include <stdio.h>
#include <stdlib.h>

    /*Escreva um programa le tres numeros e os imprime em ordem (ordem
crescente).*/

int main() {

    printf("|============================|\n");
    printf("| IMPRIME EM ORDEM CRESCENTE |\n");
    printf("|============================|\n");

    float num1, num2, num3;

    printf("\nDigite um numero: ");
    scanf("%f", &num1);
    printf("Digite outro numero: ");
    scanf("%f", &num2);
    printf("Digite outro numero: ");
    scanf("%f", &num3);

    printf("\nORDEM CRESCENTE: ");

    //Achando o primeiro valor da ordem crescente
    if ((num1 <= num2)&&(num1 <= num3)){
        printf("%.2f ", num1);
    } else {
        if ((num2 <= num1)&&(num2 <= num3)) {
            printf("%.2f ", num2);
        } else {
            if ((num3 <= num1)&&(num3 <= num2)){
            printf("%.2f ", num3);
            }
        }
    }

    //Achando o segundo valor da ordem crescente
    if (((num1 <= num2)&&(num1 >= num3))||((num1 >= num2)&&(num1 <= num3))){
        printf("%.2f ", num1);
    } else {
        if (((num2 >= num1)&&(num2 <= num3)) || ((num2 <= num1)&&(num2 >= num3)) ) {
            printf("%.2f ", num2);
        } else {
            if(((num3 >= num1)&&(num3 <= num2)) || ((num3 <= num1)&&(num3 >= num2)))
            printf("%.2f ", num3);
        }
    }

    //Achando o terceiro valor da ordem crescente
    if ((num1 >= num2)&&(num1 >= num3)){
        printf("%.2f ", num1);
    } else {
        if ((num2 >= num1)&&(num2 >= num3)) {
            printf("%.2f ", num2);
        } else {
            if((num3 >= num1)&&(num3 >= num2)){
            printf("%.2f ", num3);
            }
        }
    }
    printf("\n");
}
