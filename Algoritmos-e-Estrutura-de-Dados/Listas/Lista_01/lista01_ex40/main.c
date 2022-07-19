#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    /*40. Faça um algoritmo que receba o valor dos catetos de um triângulo, calcule e mostre o valor da hipotenusa*/

int main() {

    printf("|===============================|\n");
    printf("|    CALCULO PARA HIPOTENUSA    |\n");
    printf("|===============================|\n");

    double hipotenusa, cateto_a, cateto_o;

    printf("\nDigite o valor do cateto adjacente: ");
    scanf("%lf", &cateto_a);
    printf("Digite o valor do cateto oposto: ");
    scanf("%lf", &cateto_o);

    hipotenusa = pow(cateto_a, 2) + pow(cateto_o,2);

    printf("\nO valor da hipotenusa sera: %.2lf\n", hipotenusa);
}
