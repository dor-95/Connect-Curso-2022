#include <stdio.h>
#include <stdlib.h>

    /*7. Tendo como dados de entrada a altura e o sexo de uma pessoa, construa um algoritmo que calcule seu peso
    ideal, utilizando as seguintes fórmulas:
    ● para homens: (72.7 * h) – 58;
    ● para mulheres: (62.1 * h) – 44.7.*/

int main()
{
    printf("|============================|\n");
    printf("|   LISTA 02 - EXERCICIO 07  |\n");
    printf("|============================|\n");

    float altura, peso;
    char sexo;

    //porque ao colocar o char para ser por segundo, o mesmo da erro no programa???
    printf("\nInforme seu sexo (M/F): ");
    scanf("%c", &sexo);
    printf("Informe sua altura: ");
    scanf("%f", &altura);

    if(sexo == 'M' || sexo == 'm'){
        peso = (72.7 * altura) - 58;
        printf("Seu peso ideal e %f\n", peso);
    } else if (sexo == 'F' || sexo == 'f'){
        peso = (62.1 * altura) - 44.7;
        printf("Seu peso ideal e %f\n", peso);
    } else {
        printf("Entrada invalida. Tente Novamente\n");
    }
}
