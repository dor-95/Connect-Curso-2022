#include <stdio.h>
#include <stdlib.h>

    /* 28. Faça um algoritmo que receba duas notas, calcule e mostre a média ponderada dessas notas, considerando
    peso 2 para a primeira nota e peso 3 para a segunda nota*/

int main() {

    printf("|===================================|\n");
    printf("|      NOTAS - MEDIA PONDERADA      |\n");
    printf("|===================================|\n");

    float nota1, nota2, media_ponderada;
    int peso1 = 2, peso2 = 3;

    printf("\nInforme a primeira nota: ");
    scanf("%f", &nota1);
    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);

    media_ponderada = ((nota1*peso1) + (nota2*peso2)) / (peso1 + peso2);

    printf("\nA media ponderada das notas informadas sera: %.2f\n", media_ponderada);
}
