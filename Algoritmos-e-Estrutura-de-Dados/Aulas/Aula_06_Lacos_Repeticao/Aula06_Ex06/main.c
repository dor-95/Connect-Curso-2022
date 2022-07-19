#include <stdio.h>
#include <stdlib.h>

int main() {

    printf("|=================|\n");
    printf("|    SOMATORIO    |\n");
    printf("|=================|\n");

    int numero, somatorio;

    printf("\nDigite um numero: ");
    scanf("%d", &numero);

    somatorio = numero;

    for(int i = 0; i < numero; i++){
        somatorio += i;
    }
    printf("\nA soma de 1 ate %d e: %d\n", numero, somatorio);
}
