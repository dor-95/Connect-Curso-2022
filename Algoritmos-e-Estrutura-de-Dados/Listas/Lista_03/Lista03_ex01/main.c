#include <stdio.h>
#include <stdlib.h>

    /*1. Escreva um algoritmo que exiba 20 vezes a mensagem informando qual vez est� sendo escrita:
    �Esta � a mensagem 1�, �Esta � a mensagem 2� ... �Esta � a mensagem 20�*/

int main() {

    printf("|========================|\n");
    printf("|LISTA 003 - EXERCICIO 01|\n");
    printf("|========================|\n");

    for(int i = 1; i <= 20; i++){
        printf("Esta e a mensagem %d\n", i);
    }

}
