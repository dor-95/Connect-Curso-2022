#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /* 10. Construa um algoritmo para calcular a distância entre dois pontos do plano cartesiano. Cada ponto é um par
ordenado (x,y). */

    double x1, x2, y1, y2, resp_x, resp_y, distancia;

    printf("=====================================================\n");
    printf("|  DISTANCIA ENTRE DOIS PONTOS DO PLANO CARTESIANO  |\n");
    printf("=====================================================\n");

    printf("Informe o valor de Xi: ");
    scanf("%lf", &x1);
    printf("Informe o valor de Xii: ");
    scanf("%lf", &x2);
    printf("Informe o valor de Yi: ");
    scanf("%lf", &y1);
    printf("Informe o valor de Yii: ");
    scanf("%lf", &y2);

    resp_x = pow((x2 - x1), 2);
    resp_y = pow((y2 - y1), 2);

    distancia = sqrt(resp_x + resp_y);


    printf("\nA distancia entre os pontos informados e: %lf", distancia);
}
