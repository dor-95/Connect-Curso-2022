#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x,y;

    printf("Digite um valor: ");
    scanf("%lf", &x);
    printf("Digite outro valor: ");
    scanf("%lf", &y);

    printf("Soma: %.2lf\n", x+y);
    printf("Diferenca: %.2lf\n", x-y);
    printf("Multiplicacao: %.2lf\n", x*y);
    printf("Divisao: %.2lf\n", x/y);
}
