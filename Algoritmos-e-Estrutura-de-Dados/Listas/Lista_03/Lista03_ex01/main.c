#include <stdio.h>
#include <stdlib.h>

    /*1. Escreva um algoritmo que exiba 20 vezes a mensagem informando qual vez está sendo escrita:
    “Esta é a mensagem 1”, “Esta é a mensagem 2” ... “Esta é a mensagem 20”*/

int main() {

    printf("|========================|\n");
    printf("|LISTA 003 - EXERCICIO 01|\n");
    printf("|========================|\n");

    for(int i = 1; i <= 20; i++){
        printf("Esta e a mensagem %d\n", i);
    }

}
