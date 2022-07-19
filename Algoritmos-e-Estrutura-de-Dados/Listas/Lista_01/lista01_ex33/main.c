#include <stdio.h>
#include <stdlib.h>

    /*33. Faça um algoritmo que calcule e mostre a área de um trapézio. Sabe-se que: A = (base maior + base menor)* altura)/2 ;*/

int main() {

    printf("|===========================|\n");
    printf("|    AREA DE UM TRAPEZIO    |\n");
    printf("|===========================|\n");

    float base_maior, base_menor, altura, area;

    printf("\nDigite o valor da base maior: ");
    scanf("%f", &base_maior);
    printf("Digite o valor da base menor: ");
    scanf("%f", &base_menor);
    printf("Digite a altura: ");
    scanf("%f", &altura);

    area = ((base_maior + base_menor) * altura) / 2;

    printf("A area do trapezio sera: %.2f\n", area);
}
