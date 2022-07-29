#include <stdio.h>
#include <stdlib.h>

    /*2. Escreva um algoritmo que calcule o somatório dos números de um intervalo informado pelo
    usuário*/

int main()
{
    printf("|========================|\n");
    printf("|LISTA 003 - EXERCICIO 02|\n");
    printf("|========================|\n");

    int inicio=0, fim, soma = 0;

    printf("Digite o numero do inicio do intervalo: ");
    scanf("%d", &inicio);
    printf("Digite o numero do fim do intervalo: ");
    scanf("%d", &fim);

    while(inicio <= fim){
        soma += inicio;
        inicio = inicio + 1;
    }
    printf("\nA soma e: %d\n", soma);
}
