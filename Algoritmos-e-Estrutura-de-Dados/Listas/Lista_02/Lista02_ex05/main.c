#include <stdio.h>
#include <stdlib.h>

    /* 5. Fa�a um algoritmo que leia uma vari�vel e some 5 caso seja par ou some 8 caso seja �mpar, imprimir o resultado desta opera��o. */

int main()
{
    printf("|============================|\n");
    printf("|   LISTA 02 - EXERCICIO 05  |\n");
    printf("|============================|\n");

    int numero, resultado;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if(numero % 2 == 0){
        resultado = numero + 5;
        printf("O numero %d e PAR, somando 5, o resultado sera: %d", numero, resultado);
    } else {
        resultado = numero + 8;
        printf("O numero %d e IMPAR, somando 8, o resultado sera: %d\n", numero, resultado);
    }
}
