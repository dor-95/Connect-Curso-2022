#include <stdio.h>
#include <stdlib.h>

    /*7. Ler 2 vetores, R de 5 elementos e S de 10 elementos. Gere um vetor X que possua os elementos comuns a
    R e a S. Considere que no mesmo vetor não haverá números repetidos. Escrever o vetor X.
    */

int main() {

    printf("|======================|\n");
    printf("|  Lista 004 - Ex 007  |\n");
    printf("|======================|\n");
    printf("|       VETORES        |\n");
    printf("|======================|\n");
    printf("\n");

    //Declara as variaveis
    int R[5], S[10], X[5];

    //Preenche o vetor R com os elementos informados pelo usuário
    for(int i = 0; i < 5; i++){
        printf("Digite o elemento do R[%d]: ", i);
        scanf("%d", &R[i]);
    }
    printf("\n");

    //Preenche o vetor S com os elementos informados pelo usuário
    for(int i = 0; i < 10; i++){
        printf("Digite o elemento do S[%d]: ", i);
        scanf("%d", &S[i]);
    }
    printf("\n");

    //Compara os vetores S e R, caso sejam iguais, o valor contido nele será alocado no vetor X e impresso na tela
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 5; j++){
            if(S[i] == R[j]){
                X[j] = R[j];
                printf("vetorX[%d] = %d\n", i, X[j]);
            }
        }

    }


}
