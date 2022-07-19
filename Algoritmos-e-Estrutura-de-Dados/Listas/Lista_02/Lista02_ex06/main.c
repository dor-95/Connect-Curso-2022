#include <stdio.h>
#include <stdlib.h>

    /*6. Escreva um algoritmo que leia três valores inteiros e diferentes e mostre-os em ordem decrescente. */

int main()
{
    printf("|============================|\n");
    printf("|   LISTA 02 - EXERCICIO 06  |\n");
    printf("|============================|\n");

    int num1, num2, num3;

    printf("\nDigite um numero inteiro: ");
    scanf("%d", &num1);
    printf("Digite outro numero inteiro: ");
    scanf("%d", &num2);
    printf("Digite mais um numero inteiro: ");
    scanf("%d", &num3);

    printf("ORDEM DECRESCENTE: ");

    if(num1 >= num2 && num1 >= num3){
        printf("%d ", num1);
    } else if (num2 >= num1 && num2 >= num3){
        printf("%d ", num2);
    } else if (num3 >= num1 && num3 >= num2){
        printf("%d ", num3);
    }

    if((num1 >= num2 && num1 <= num3)||(num1 >= num3 && num1 <= num2)){
        printf("%d ", num1);
    } else if ((num2 >= num1 && num2 <= num3)||(num2 >= num3 && num2 <= num1)){
        printf("%d ", num2);
    } else if ((num3 >= num1 && num3 <= num2)||(num3 >= num2 && num3 <= num3)){
        printf("%d ", num3);
    }

    if ((num1 <= num2 && num1 <= num3)){
        printf("%d \n", num1);
    } else if ((num2 <= num1 && num2 <= num3)){
        printf("%d \n", num2);
    } else if ((num3 <= num1 && num3 <= num2)) {
        printf("%d \n", num3);
    }

}
