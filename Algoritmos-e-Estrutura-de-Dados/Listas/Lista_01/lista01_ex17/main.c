#include <stdio.h>
#include <stdlib.h>

    /* . Alguns pa�ses medem temperaturas em graus Celsius, e outros em graus Fahrenheit. Fa�a um algoritmo
    para ler uma temperatura Celsius e imprimi-Ia em Fahrenheit (pesquise como fazer este tipo de convers�o). */

int main()
{
    printf("|===================================|\n");
    printf("|              CONVERSOR            |\n");
    printf("|===================================|\n");
    printf("|     CELSIUS  >>>>>>  FAHRENHEIT   |\n");
    printf("|===================================|\n");

    float celsius, fahrenheit;

    printf("\nInforme a temperatura em Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 1.8) + 32;

    printf("\nEm Fahrenheit sera: %.1f\n", fahrenheit);
}
