#include <stdio.h>
#include <stdlib.h>

    /*2. Fa�a um algoritmo para receber um n�mero qualquer e informar na tela se � par ou �mpar. */

int main()
{
    printf("|============================|\n");
    printf("|   LISTA 02 - EXERCICIO 02  |\n");
    printf("|============================|\n");

    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    if(numero % 2 == 0){
        printf("O numero digitado e PAR");
    } else {
        printf("O numero digitado e IMPAR");
    }

}
