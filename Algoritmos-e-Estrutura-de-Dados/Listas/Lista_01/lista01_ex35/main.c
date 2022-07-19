#include <stdio.h>
#include <stdlib.h>

    /* 35. Faça um algoritmo que calcule e mostre a área de um losango. Sabe-se que: A = (diagonal_maior * diagonal_menor)/2;*/

int main() {

    printf("|===========================|\n");
    printf("|     AREA DE UM LOSANGO    |\n");
    printf("|===========================|\n");

    float diagonal_maior, diagonal_menor, area;

    printf("\nDigite o valor da diagonal maior: ");
    scanf("%f", &diagonal_maior);
    printf("Digite o valor da diagonal menor: ");
    scanf("%f", &diagonal_menor);

    area = (diagonal_maior * diagonal_menor) / 2;

    printf("\nA area do losango sera: %.2f\n", area);

}
