#include <stdio.h>
#include <stdlib.h>

#define _MAX 10

    /*10. Elabore um algoritmo que leia um vetor e em seguida apresente o vetor ordenado – use o método de ordenação que preferir*/

int main() {

    printf("|======================|\n");
    printf("|  Lista 004 - Ex 010  |\n");
    printf("|======================|\n");
    printf("|       VETORES        |\n");
    printf("|======================|\n");
    printf("\n");

    int A[_MAX];
    int aux;

    for(int i = 0; i < _MAX; i++){
        printf("Digite um valor inteiro para o vetor[%d]: ", i);
        scanf("%d", &A[i]);
    }

    for(int i = 0; i < _MAX-1; i++){

        for(int j = 0; j < _MAX-1; j++){

            if(A[j] > A[j+1]){
                aux = A[j];
                A[j] = A[j+1];
                A[j+1] = aux;
            }
        }
    }
    for(int i = 0; i < _MAX; i++){

        printf("A[%d] = %d\n", i, A[i]);

    }
}
