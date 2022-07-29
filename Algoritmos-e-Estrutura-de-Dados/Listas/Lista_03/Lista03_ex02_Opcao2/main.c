#include <stdio.h>
#include <stdlib.h>

    /*2. Escreva um algoritmo que calcule o somatório dos números de um intervalo informado pelo
    usuário*/

int main()
{
    printf("|==================================|\n");
    printf("|LISTA 003 - EXERCICIO 02 - OPCAO 2|\n");
    printf("|==================================|\n");

    int inicio, fim, soma =0;

    printf("\nDigite o numero do inicio do intervalo: ");
    scanf("%d", &inicio);
    printf("Digite o numero do fim do intervalo: ");
    scanf("%d", &fim);

    for( ;inicio <= fim; ){

        soma += inicio;
        inicio += 1;
    }
    printf("\nA soma do intervalo sera: %d\n", soma);
}
