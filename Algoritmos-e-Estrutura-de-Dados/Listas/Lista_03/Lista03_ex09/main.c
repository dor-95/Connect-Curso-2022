#include <stdio.h>
#include <stdlib.h>

    /*9. Escreva um algoritmo que leia 20 números informados pelo usuário e exiba quantos números são
    maiores do que 8*/

int main() {

    printf("|=======================|\n");
    printf("|     EXERCICIO 09      |\n");
    printf("|=======================|\n");

    float numero;
    int total = 0;

    for(int i = 1; i <= 20; i++){
        printf("Digite o %d%c numero: ", i, 248);
        scanf("%f", &numero);
        if (numero > 8){
            total += 1;
        }
    }
    printf("\nQuantidade de numeros maiores que 8: %d\n", total);
}
