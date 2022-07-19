#include <stdio.h>
#include <stdlib.h>

    /*34. Faça um algoritmo que calcule e mostre a área de um quadrado. Sabe-se que: A = lado * lado;*/

int main() {

    printf("|===========================|\n");
    printf("|    AREA DE UM QUADRADO    |\n");
    printf("|===========================|\n");

    float lado, area;

    printf("\nDigite o valor do lado: ");
    scanf("%f", &lado);

    area = lado * lado;

    printf("A area do quadrado sera: %.2f\n", area);
}
