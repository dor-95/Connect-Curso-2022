#include <stdio.h>
#include <stdlib.h>

    /*15. Desenvolva um algoritmo capaz de apresentar na tela o fatorial de um número inteiro informado
    pelo usuário.*/

int main() {

    printf("|=======================|\n");
    printf("|   LISTA 03 - EXE 15   |\n");
    printf("|=======================|\n");

    int numero;
    int fatorial;

    printf("\nDigite um numero inteiro para saber seu fatorial: ");
    scanf("%d", &numero);

    if(numero < 0){
        printf("\nNumero nao permitido, tente novamente!\n");
    } else if (numero == 0) {
        fatorial = 1;
        printf("\nO fatorial de %d! = %d\n", numero, fatorial);
    } else {
        fatorial = numero;
        for(int i = 1; i < numero; i++){
            fatorial = fatorial * (numero - i);

        }
        printf("\nO fatorial de %d! = %d\n", numero, fatorial);
    }



}
