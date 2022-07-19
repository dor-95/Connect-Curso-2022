#include <stdio.h>
#include <stdlib.h>

    /* 37. Faça um algoritmo que calcule e mostre a tabuada de um número digitado pelo usuário */

int main() {

    int numero;

    printf("|===============================|\n");
    printf("|             TABUADA           |\n");
    printf("|===============================|\n");
    printf("   Escolha o numero desejado: ");
    scanf("%d|", &numero);
    printf("|===============================|");
    printf("\n       %d   x   1   =   %d       ", numero, numero * 1);
    printf("\n       %d   x   2   =   %d       ", numero, numero * 2);
    printf("\n       %d   x   3   =   %d       ", numero, numero * 3);
    printf("\n       %d   x   4   =   %d       ", numero, numero * 4);
    printf("\n       %d   x   5   =   %d       ", numero, numero * 5);
    printf("\n       %d   x   6   =   %d       ", numero, numero * 6);
    printf("\n       %d   x   7   =   %d       ", numero, numero * 7);
    printf("\n       %d   x   8   =   %d       ", numero, numero * 8);
    printf("\n       %d   x   9   =   %d       ", numero, numero * 9);
    printf("\n       %d   x   10  =   %d       ", numero, numero * 10);
    printf("\n|===============================|\n");

}
