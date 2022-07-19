#include <stdio.h>
#include <stdlib.h>
#include <math.h>


    //25. Calcule o volume de uma caixa d'água cilíndrica.

int main() {

    printf("|===================================|\n");
    printf("|      VOLUME CAIXA CILINDRICA      |\n");
    printf("|===================================|\n");

    double raio_base, volume;
    float altura, pi = 3.1;

    printf("\nInforme o raio da base da caixa d' agua: ");
    scanf("%lf", &raio_base);
    printf("Informe a altura da caixa d' agua: ");
    scanf("%f", &altura);

    volume = pow(raio_base, 2) * altura * pi;

    printf("\nO volume da caixa d' agua e de: %.2lf litros.\n", volume);
}
