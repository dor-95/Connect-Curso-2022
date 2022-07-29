#include <stdio.h>
#include <stdlib.h>
#define _MAX 15

    /*19. Desenvolver um algoritmo que leia a altura de 15 pessoas. Este programa deverá calcular e mostrar :
        a. A menor altura do grupo;
        b. A maior altura do grupo; */

int main() {

    printf("|========================|\n");
    printf("|    LISTA 03 - EXE 19   |\n");
    printf("|========================|\n");

    float altura, maiorAltura, menorAltura;

    for(int i = 0; i < _MAX; i++){

        printf("\nDigite a %d%c altura: ", i+1, 248);
        scanf("%f", &altura);

        if(i == 0){
            maiorAltura = altura;
            menorAltura = altura;
        } else if (altura > maiorAltura) {
            maiorAltura = altura;
        } else if (altura < menorAltura){
            menorAltura = altura;
        }
    }
    printf("\nMaior altura do grupo: %.2f\n", maiorAltura);
    printf("Menor altura do grupo: %.2f\n", menorAltura);

}
