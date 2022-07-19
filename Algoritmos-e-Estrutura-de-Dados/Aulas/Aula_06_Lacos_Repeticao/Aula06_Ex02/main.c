#include <stdio.h>
#include <stdlib.h>


    /*Faca um programa que le dois numeros inteiros positivos a e b.
    Utilizando lacos, o seu programa deve calcular e imprimir o valor a elevado b.*/

int main() {

    int sair = 1;

    do{
        system("cls");

        printf("|===============|\n");
        printf("| EXPONENCIACAO |\n");
        printf("|===============|\n");

        int a, b, resultado = 1;

        printf("\nDigite um numero inteiro positivo: ");
        scanf("%d", &a);
        printf("Digite o valor do expoente: ");
        scanf("%d", &b);

        for(int i = 1;i <= b;i++){
            resultado = resultado * a;
        }

        printf("\n%d elevado a %d e igual a %d\n", a, b, resultado);

        printf("\nDeseja continuar? ");
        printf("\n0 - SIM");
        printf("\n1 - NAO\n");
        scanf("%d", &sair);
    } while(sair == 0);
}
