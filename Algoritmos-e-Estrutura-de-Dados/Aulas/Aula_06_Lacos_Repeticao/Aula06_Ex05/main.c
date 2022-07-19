#include <stdio.h>
#include <stdlib.h>

    /*Faca um programa que le um numero n e imprima os valores entre 2
    e n, que s˜ao divisores de n.*/

int main() {

    int num;



    printf("Digite um numero: ");
    scanf("%d", &num);
    system("cls");

    printf("|===========================|\n");
    printf("|      DIVISORES DE %d      |\n", num);
    printf("|===========================|\n");
    printf("|       ENTRE 2 E %d        |\n", num);
    printf("|===========================|\n");

    printf("\nValores %d: ", num);

    for(int i = 2; i <= num; i++){

        if(num % i == 0){
            printf("%d, ", i);
        }

    }
    printf("\n");

}
