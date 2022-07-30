#include <stdio.h>
#include <stdlib.h>
#define _MAX 10

    /*1. Escreva um programa que leia dois vetores de 10 posições e faça a soma dos elementos de mesmo índice,
    colocando o resultado em um terceiro vetor. Mostre o vetor resultante.
    */

int main() {

    printf("|======================|\n");
    printf("|  Lista 004 - Ex 001  |\n");
    printf("|======================|\n");
    printf("|       VETORES        |\n");
    printf("|======================|\n");
    printf("\n");

    //Declara as variáveis
    int vet[_MAX], vetor[_MAX], soma[_MAX];

    //Le os valores digitados pelo usuário
    for(int i=0; i < _MAX; i++){
        printf("Digite o numero do vet[%d]: ", i);
        scanf("%d", &vet[i]);
        printf("Digite o numero do vetor[%d]: ", i);
        scanf("%d", &vetor[i]);
        printf("\n");
    }

    //Imprime a soma dos dos vetores de mesmo índice
    printf("A soma dos vetores do mesmo indice:\n");
    printf("\n");
    for(int i=0; i < _MAX; i++){
        soma[i] = vet[i] + vetor[i];
        printf("vet[%d] + vetor[%d] = %d\n", i, i, soma[i]);
    }
}
