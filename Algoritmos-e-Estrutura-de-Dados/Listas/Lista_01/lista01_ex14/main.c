#include <stdio.h>
#include <stdlib.h>
#include <math.h>

    /* 14. Calcule a área de uma pizza que possui um raio R (pi=3.14) */

int main() {

    double pi = 3.14, area, raio;

    printf("|===================================|\n");
    printf("|       AREA DE CIRCUFERENCIA       |\n");
    printf("|===================================|\n");
    printf("|              Pi = %.2lf            |\n", pi);
    printf("|===================================|\n");

    printf("\nInforme o valor da circuferencia (raio): ");
    scanf("%lf", &raio);

    area = pi * pow(raio, 2);

    printf("O valor da area e: %.2lf\n", area);
}
