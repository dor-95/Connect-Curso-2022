#include <stdio.h>
#include <stdlib.h>

    /*5. Escreva um algoritmo que leia 10 n�meros informados pelo usu�rio e calcule a soma desses
    n�meros*/

int main()
{
    printf("|=======================|\n");
    printf("|     EXERCICIO 05      |\n");
    printf("|=======================|\n");

    float numero, soma;

    for(int i = 0; i < 10; i++){
        printf("Digite um numero: ");
        scanf("%f", &numero);
        soma += numero;

    }
    printf("\nA soma dos valores informados e: %.2f\n", soma);
}
