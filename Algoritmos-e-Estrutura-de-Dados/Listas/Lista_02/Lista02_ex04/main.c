#include <stdio.h>
#include <stdlib.h>

    /*4-Encontrar o dobro de um número caso ele seja positivo e o seu triplo caso seja negativo, imprimindo o resultado.*/

int main()
{

    printf("|============================|\n");
    printf("|   LISTA 02 - EXERCICIO 04  |\n");
    printf("|============================|\n");

    float numero, total;

    printf("Digite um numero: ");
    scanf("%f", &numero);

    if(numero > 0){
        total = numero * 2;
        printf("O doblo de %.2f sera: %.2f", numero, total);
    } else {
        total = numero * 3;
        printf("O triplo de %.2f sera: %.2f", numero, total);
    }
}
