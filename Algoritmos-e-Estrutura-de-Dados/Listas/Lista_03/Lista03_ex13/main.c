#include <stdio.h>
#include <stdlib.h>

    /*13. Escreva um algoritmo que leia uma sequ�ncia de n�meros do usu�rio e realize a soma desses
    n�meros. Encerre a execu��o quando um n�mero negativo for digitado*/

int main() {

    printf("|=======================|\n");
    printf("|   LISTA 03 - EXE 13   |\n");
    printf("|=======================|\n");

    int n = 1, i = 0, soma = 0;
    int numero;

    while(n){
        printf("Digite o %d%c numero: ", ++i, 248);
        scanf("%d", &numero);

        //Teste se o numero e negativo
        //Para a execu��o se for negativo
        //Soma se for um numero positivo
        if(numero < 0){
            n = 0;
        } else {
            soma += numero;
        }
    }
    printf("A soma dos valores e: %d", soma);
}
