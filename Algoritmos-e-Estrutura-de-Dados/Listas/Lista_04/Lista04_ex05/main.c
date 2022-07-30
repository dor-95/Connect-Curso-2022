#include <stdio.h>
#include <stdlib.h>
#define _INTEIRO 15

    /*5. Criar um vetor A com 10 elementos inteiros. Escrever um programa que calcule e escreva:
    a) a soma de elementos armazenados neste vetor que são inferiores a 15;
    b) a quantidade de elementos armazenados no vetor que são iguais a 15; e
    c) a média dos elementos armazenados no vetor que são superiores a 15. */

int main() {

    printf("|======================|\n");
    printf("|  Lista 004 - Ex 005  |\n");
    printf("|======================|\n");
    printf("|       VETORES        |\n");
    printf("|======================|\n");
    printf("\n");

    //Declara e inicializa as variáveis
    int vetorA[] = {15, 1, 10, 25, 31, 9, 16, 15, 24, 15};
    int soma = 0, valoresIguais = 0, valoresSuperiores = 0, media = 0;


    printf("Valores do vetorA: \n");

    for(int i = 0; i < 10; i++){

        //Exibe na tela os valores atribuidos ao vetorA
        printf("A[%d] = %d  \n", i, vetorA[i]);

        //Compara os valores menor, igual ou maior que 15(_INTEIRO)
        //(<) menor, soma os valores contidos no vetor
        //(==) igual, identifica a quantidade de itens
        //(>) maior, soma os valores no vetor e a quantidade de itens;
        if(vetorA[i] < _INTEIRO){
            soma += vetorA[i];
        } else if (vetorA[i] == _INTEIRO){
            valoresIguais += 1;
        } else {
            valoresSuperiores += 1;
            media += vetorA[i];
        }
    }
    //Printa na tela os resultados do exercício
    printf("\nSoma dos elementos inferiores a %d: %d\n", _INTEIRO, soma);
    printf("Quantidade de elementos iguais a %d: %d\n", _INTEIRO, valoresIguais);
    printf("Media dos elementos superiores a %d: %d\n", _INTEIRO, media/valoresSuperiores);

}
