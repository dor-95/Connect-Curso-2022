#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("|=================================|\n");
    printf("|      LISTA 02 - EXERCICIO 12    |\n");
    printf("|=================================|\n");
    printf("|             TRIANGULOS          |\n");
    printf("|=================================|\n");

    float X, Y, Z;

    printf("\nInforme o valor de X: ");
    scanf("%f", &X);
    printf("Informe o valor de Y: ");
    scanf("%f", &Y);
    printf("Informe o valor de Z: ");
    scanf("%f", &Z);

    if(((Y-Z < X) && (X < Y+Z)) && ((X-Z < Y) && (Y < X+Z)) && ((X-Y < Z) && (Z < X+Y))){
        if (X == Y && X == Z){
            printf("\nTriangulo Equilatero\n");
        } else if ((X == Y && X != Z) || (X == Z && X != Y) || (Y == Z && Y != X)){
            printf("\nTriangulo Isosceles\n");
        } else if ((X != Y && X != Z) && (Y != Z)){
            printf("\nTriangulo Escaleno\n");
        }
    } else {
        printf("\nOs valores informados nao formam um triangulo.\n");

    }

}
