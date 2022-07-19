#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("|=================|\n");
    printf("|    SOMATORIO    |\n");
    printf("|=================|\n");
    printf("| VALOR POR LINHA |\n");
    printf("|=================|\n");

    int numero, soma;

    printf("\nDigite um numero: ");
    scanf("%d", &numero);

    for(int i=1; i <= numero; i++){
        soma += i;
        printf("A soma de 1 ate %d = %d\n", i, soma);

    }


}
