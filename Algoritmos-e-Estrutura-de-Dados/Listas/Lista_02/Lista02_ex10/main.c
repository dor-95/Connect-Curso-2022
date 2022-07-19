#include <stdio.h>
#include <stdlib.h>

    /*10. Elabore um algoritmo que leia dois números inteiros e mostre o resultado da diferença do maior valor pelo menor; */

int main()
{
    printf("|=================================|\n");
    printf("|      LISTA 02 - EXERCICIO 10    |\n");
    printf("|=================================|\n");

    int num1, num2, diferenca;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num1);
    printf("Digite outro numero inteiro: ");
    scanf("%d", &num2);

    printf("A diferenca do maior numero pelo menor e: ");

    if(num1 < 0 && num2 < 0){
        diferenca = num1 - num2;
        printf("%d", diferenca);
    } else if(num1 < 0){
        diferenca = num1 + num2;
        printf("%d", diferenca);
    } else if(num2 < 0){
        diferenca = num2 + num1;
        printf("%d", diferenca);
    } else if (num2 > num1) {
        diferenca = num2 - num1;
        printf("%d", diferenca);
    } else if (num1 > num2){
        diferenca = num1 - num2;
        printf("%d", diferenca);
    } else {
        //para numeros iguais
        diferenca = num1 - num2;
        printf("%d", diferenca);
    }
}
