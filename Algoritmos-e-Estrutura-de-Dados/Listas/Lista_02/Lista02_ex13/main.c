#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("|=================================|\n");
    printf("|      LISTA 02 - EXERCICIO 13    |\n");
    printf("|=================================|\n");

    float valor;
    int nota100, nota50, nota20, nota10, nota5, nota2, nota1;

    printf("\n");
    printf("Digite um valor em reais: R$ ");
    scanf("%f", &valor);

    if(valor >= 100){
        nota100 = valor / 100;
        valor = valor - nota100 * 100;
        printf("\nO numero de notas de 100 e: %d", nota100);
    }

    if(valor >= 50){
        nota50 = valor / 50;
        valor = valor - nota50 * 50;
        printf("\nO numero de notas de 50 e: %d", nota50);
    }

    if(valor >=20){
        nota20 = valor / 20;
        valor = valor - nota20 * 20;
        printf("\nO numero de notas de 20 e: %d", nota20);
    }

    if(valor >= 10){
        nota10 = valor / 10;
        valor = valor - nota10 * 10;
        printf("\nO numero de notas de 10 e: %d", nota10);
    }

    if(valor >= 5){
        nota5 = valor / 5;
        valor = valor - nota5 * 5;
        printf("\nO numero de notas de 5 e: %d", nota5);
    }

    if(valor >= 2){
        nota2 = valor / 2;
        valor = valor - nota2 * 2;
        printf("\nO numero de notas de 2 e: %d", nota2);
    }

    if(valor >= 1){
        nota1 = valor;
        printf("\nO numero de notas de 1 e: %d", nota1);
    }
    printf("\n");
}
