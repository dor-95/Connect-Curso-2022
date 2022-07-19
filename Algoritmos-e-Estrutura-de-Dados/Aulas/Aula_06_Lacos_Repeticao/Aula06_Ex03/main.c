#include <stdio.h>
#include <stdlib.h>

    /*Fazer tabuada com for*/

int main()
{
    int numero, tabuada, resultado=0;

    printf("Informe a tabuada desejada: ");
    scanf("%d", &tabuada);
    printf("Informe ate qual numero deseja calcular: ");
    scanf("%d", &numero);

    printf("|=========================|\n");
    printf("|      TABUADA DO %d       |\n", tabuada);
    printf("|=========================|\n");

    for(int i = 1; i <= numero; i++){
        resultado = i * tabuada;
        printf("   %d   x   %d    =   %d\n", tabuada, i, resultado);
    }

    printf("|=========================|\n");
}
