#include <stdio.h>
#include <stdlib.h>

    //Escreva um programa le tres numeros e imprime o maior deles.

int main() {

    printf("|========================|\n");
    printf("| IMPRIME O MAIOR NUMERO |\n");
    printf("|========================|\n");

    float num1, num2, num3;

    printf("\nDigite um numero: ");
    scanf("%f", &num1);
    printf("Digite outro numero: ");
    scanf("%f", &num2);
    printf("Digite outro numero: ");
    scanf("%f", &num3);

    if((num1 > num2) && (num1 > num3)){
        printf("O numero %.2f e o maior deles", num1);
    } else {
        if(num2 > num3){
            printf("O numero %.2f e o maior deles", num2);
        } else {
            printf("O numero %.2f e o maior deles", num3);
        }
    }
}
