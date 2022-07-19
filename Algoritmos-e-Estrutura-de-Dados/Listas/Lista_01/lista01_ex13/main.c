#include <stdio.h>
#include <stdlib.h>

    /*13. Ler um número inteiro (assuma até três dígitos) e imprimir a saída da seguinte forma: CENTENA = x
    DEZENA = x
    UNIDADE = x
    */

int main() {

    printf("|===================================|\n");
    printf("|            NUMERO INTEIRO         |\n");
    printf("|===================================|\n");

    int numero, centena, dezena, unidade, teste;

    printf("\nInforme um numero inteiro (ate tres digitos): ");
    scanf("%d", &numero);

    centena = numero/100;
    dezena = (numero % 100) / 10;
    unidade = numero % 10;

    printf("\nCENTENA: %d", centena);
    printf("\nDEZENA: %d", dezena);
    printf("\nUNIDADE: %d\n", unidade);

}
