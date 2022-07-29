#include <stdio.h>
#include <stdlib.h>

    /*11. Faça um algoritmo que leia 20 números e, ao final, escreva quantos estão entre 0 e 100.*/

int main() {

    printf("|=======================|\n");
    printf("|     EXERCICIO 11      |\n");
    printf("|=======================|\n");

    int numero, total = 0;

    for(int i = 0; i < 20; i++){
        printf("Digte o %d%c numero: ", i+1, 248);
        scanf("%d", &numero);

        if((numero >= 0) && (numero <=100)){
            total += 1;
        }
    }
    printf("\nQuantidade de numeros digitados entre 0 e 100: %d\n", total);

}
