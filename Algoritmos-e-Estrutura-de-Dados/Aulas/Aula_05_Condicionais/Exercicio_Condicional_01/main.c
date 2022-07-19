#include <stdio.h>
#include <stdlib.h>

    /*Escreva um programa que le um numero inteiro do teclaro
    e imprime "SIM" se o numero for par e maior que 10, ou for impar
    e menor que 50. Caso contrario o programa deve imprimir "NAO"*/

int main() {

    printf("|===========================|\n");
    printf("|        LE E IMPRIME       |\n");
    printf("|===========================|\n");
    printf("|  NUMERO PAR E > 10 = SIM  |\n");
    printf("| NUMERO IMPAR E < 50 = SIM |\n");
    printf("|     OUTRO CASO = NAO      |\n");
    printf("|===========================|\n");

    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if((numero % 2 == 0 )&&(numero > 10) || (numero % 2 != 0) && (numero <= 50)){
        printf("SIM");
    } else {
        printf("NAO");
    }

}
