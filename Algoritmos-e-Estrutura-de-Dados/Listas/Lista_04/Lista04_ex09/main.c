#include <stdio.h>
#include <stdlib.h>
#define _MAX 10

    /*9. Ler um vetor D de 10 elementos. Retire todos os valores nulos ou negativos do vetor D. Escrever o vetor
    após a retirada dos nulos e negativos.*/

int main() {

    printf("|======================|\n");
    printf("|  Lista 004 - Ex 009  |\n");
    printf("|======================|\n");
    printf("|       VETORES        |\n");
    printf("|======================|\n");
    printf("\n");

    int D[_MAX];
    int tam = sizeof(D)/sizeof(int);
    int contador = 0;

    for(int i = 0; i < tam; i++){
        printf("Digite o %d%c elemento: ", i+1, 248);
        scanf("%d", &D[i]);
    }
    printf("\n");

    for(int i = 0; i < tam; i++){
        if(D[i] > 0){
            D[contador] = D[i];
            contador++;
        }

    }

    for(int i = 0; i < contador; i++){
        printf("D[%d] = %d\n", i, D[i]);
    }
}
