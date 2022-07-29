#include <stdio.h>
#include <stdlib.h>

    /*10. Escreva um algoritmo que leia 20 números informados pelo usuário e exiba quantos números são
    pares*/

int main() {

    printf("|=======================|\n");
    printf("|     EXERCICIO 10      |\n");
    printf("|=======================|\n");

    int numero, total = 0;

    for(int i = 0; i < 20; i++){
        printf("Digte o %d%c numero: ", i+1, 248);
        scanf("%d", &numero);

        if (numero % 2 == 0){
            total++;
        }
    }
    printf("Quantidade de numeros pares: %d", total);

}
