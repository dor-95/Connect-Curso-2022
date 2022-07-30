#include <stdio.h>
#include <stdlib.h>

    /*3. Criar um vetor A com 8 elementos inteiros. Construir um vetor B de mesmo tipo e tamanho e com os elementos do vetor A multiplicados por 2,
    ou seja: B[i] = A[i] * 2. */

int main() {

    printf("|======================|\n");
    printf("|  Lista 004 - Ex 003  |\n");
    printf("|======================|\n");
    printf("|       VETORES        |\n");
    printf("|======================|\n");
    printf("\n");

    //Declara as variaveis e inicializa o vetorA
    int vetorA[] = {1, 2, 3, 4, 5, 6, 7, 8}, vetorB[8];

    //Exibe na tela os valores atribuidos ao vetorA
    printf("Valores do vetorA: \n");
    for(int i = 0; i < 8; i++){
        printf("A[%d] = %d\n", i, vetorA[i]);
    }
    printf("\n");

    printf("\nFormula: B[i] = A[i] * 2 ----->>> Resultado\n");

    //Exibe na tela resultado da formula do exercício
    for(int i = 0; i < 8; i++){
        vetorB[i] = vetorA[i] * 2;
        printf("\nB[%d] = %d * 2 ----->>> %d", i, vetorA[i], vetorB[i]);
    }
    printf("\n");


}
