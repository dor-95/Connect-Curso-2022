#include <stdio.h>
#include <stdlib.h>

    /*9. Escreva um algoritmo que leia o número de identificação do aluno, 3 notas obtidas e calcule a média aritmética obtida pelo aluno.
    Ao final informe se o aluno foi aprovado direto, ficou em recuperação ou foi reprovado por nota.*/

int main() {

    printf("|=================================|\n");
    printf("|      LISTA 02 - EXERCICIO 09    |\n");
    printf("|=================================|\n");

    int ra;
    float nota1, nota2, nota3, media;
    char nome[50];

    printf("\nDigite o nome do Aluno(a): ");
    scanf("%s", nome);
    printf("\nDigite o Registro Academico do Aluno(a): ");
    scanf("%d", &ra);
    printf("\nDigite a 1%c nota: ", 167);
    scanf("%f", &nota1);
    printf("\nDigite a 2%c nota: ", 167);
    scanf("%f", &nota2);
    printf("\nDigite a 3%c nota: ", 167);
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3)/3;

    printf("|=================================|\n");
    printf("|         Aluno(a): %s           \n", nome);
    printf("|         RA: %d               \n", ra);
    printf("|=================================|\n");
    printf("|    STATUS: ");


    if ((media >= 7 && media <= 10)|| (media >= 70 && media <= 100)){
        printf("APROVADO(A)!");
    } else if ((media >=5 && media < 7) || (media >= 50 && media < 70)) {
        printf("EM RECUPERACAO!");
    } else {
        printf("REPROVADO(A)!");
    }
    printf("\n|=================================|\n");
}
