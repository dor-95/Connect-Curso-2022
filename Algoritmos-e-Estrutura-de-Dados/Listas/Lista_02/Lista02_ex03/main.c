#include <stdio.h>
#include <stdlib.h>

    /*3. Faça um algoritmo que leia dois valores inteiros A e B se os valores forem iguais deverá se somar os dois,
caso contrário multiplique A por B. Ao final, apresente o resultado. */

int main()
{
    printf("|============================|\n");
    printf("|   LISTA 02 - EXERCICIO 03  |\n");
    printf("|============================|\n");

    int A, B;
    printf("Digite um valor: ");
    scanf("%d", &A);
    printf("Digite outro valor: ");
    scanf("%d", &B);

    if(A == B){
        printf("A soma dos valores e %d", A + B);
    } else {
        printf("A multiplicacao dos valores e %d", A * B);
    }
}
