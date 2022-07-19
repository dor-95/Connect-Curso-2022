#include <stdio.h>


int main()
{
    /*  Faça um algoritmo para ler três notas de um aluno em uma disciplina e imprimir a sua média ponderada (as
notas tem pesos respectivos de 1, 2 e 3). */

    printf("============================\n");
    printf("|          BIOPARK         |\n");
    printf("============================\n");

    float nota1, nota2, nota3, mediaponderada;
    int peso1 = 1, peso2 = 2, peso3 = 3;

    printf("Informe a 1 nota: ");
    scanf("%f", &nota1);
    printf("Informe a 2 nota: ");
    scanf("%f", &nota2);
    printf("Informe a 3 nota: ");
    scanf("%f", &nota3);

    mediaponderada = ((nota1*peso1) + (nota2*peso2) + (nota3*peso3))/(peso1+peso2+peso3);

    printf("\nA media ponderada sera: %.2f\n", mediaponderada);



}
