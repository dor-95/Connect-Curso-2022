#include <stdio.h>
#include <stdlib.h>
#define QTD_NOTAS 2

    /*18. Escreva um algoritmo que leia a quantidade de alunos em uma turma. Em seguida,
    a. para cada aluno, leia a informação de suas 2 notas, calcule a média e informe se o
    b. aluno está aprovado ou reprovado. O aluno está aprovado apenas se a sua média for maior
    ou igual a 6.*/

int main() {

    printf("|========================|\n");
    printf("|    LISTA 03 - EXE 18   |\n");
    printf("|========================|\n");

    int qtdAlunos;
    float notas[QTD_NOTAS], totalNotas, media;

    printf("\nInforme a quantidade de alunos na turma: ");
    scanf("%d", &qtdAlunos);

    for(int i = 0; i < qtdAlunos; i++){

        printf("\nALUNO #%d\n", i+1);

        for(int j = 0; j < QTD_NOTAS; j++){

            printf("Digite a %d%c nota: ", j+1, 248);
            scanf("%f", &notas[j]);
            totalNotas += notas[j];
        }

        media = totalNotas/2;
        printf("STATUS: ");

        if(media >= 6 && media <= 10){
            printf("APROVADO!\n");
        } else if (media >= 0 && media < 6){
            printf("REPROVADO!\n");
        } else {
            printf("Formato invalido. Digite as notas de 0 a 10!\n");
            i--;
        }

        totalNotas = 0;
    }
}
