#include <stdio.h>
#include <stdlib.h>

    /* . Alguns países medem temperaturas em graus Celsius, e outros em graus Fahrenheit. Faça um algoritmo
    para ler uma temperatura Celsius e imprimi-Ia em Fahrenheit (pesquise como fazer este tipo de conversão). */

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
