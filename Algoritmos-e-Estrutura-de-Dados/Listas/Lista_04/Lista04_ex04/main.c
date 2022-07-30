#include <stdio.h>
#include <stdlib.h>

    /*4. Criar dois vetores A e B cada um com 10 elementos inteiros. Construir um vetor C, onde cada elemento de C
    é a soma dos respectivos elementos em A e B, ou seja:
    C[i] = A[i] + B[i].
    */

int main() {

    printf("|======================|\n");
    printf("|  Lista 004 - Ex 004  |\n");
    printf("|======================|\n");
    printf("|       VETORES        |\n");
    printf("|======================|\n");
    printf("\n");

    //Declara as variaveis e inicializa o vetorA e o vetorB
    int vetorA[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int vetorB[] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int vetorC[10];

    //Exibe na tela os valores atribuidos ao vetorA
    printf("Valores do vetorA e vetorB: \n");
    for(int i = 0; i < 10; i++){
        printf("A[%d] = %d  ", i, vetorA[i]);
        printf("B[%d] = %d\n", i, vetorB[i]);
    }
    printf("\n");

    printf("\nFormula: C[i] = A[i] + B[i] ----->>> Resultado\n");

    //Exibe na tela resultado da formula do exercício
    for(int i = 0; i < 10; i++){
        vetorC[i] = vetorA[i] + vetorB[i];
        printf("\nC[%d] = %d + %d ----->>> %d", i, vetorA[i], vetorB[i], vetorC[i]);
    }
    printf("\n");
}
