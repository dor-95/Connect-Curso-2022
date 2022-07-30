#include <stdio.h>
#include <stdlib.h>

    /*8. Ler um vetor R de 5 elementos contendo o gabarito da LOTO. A seguir ler um vetor A de 10 elementos contendo uma aposta. A seguir imprima quantos
    pontos fez o apostador*/

int main() {

    printf("|======================|\n");
    printf("|  Lista 004 - Ex 008  |\n");
    printf("|======================|\n");
    printf("|       VETORES        |\n");
    printf("|======================|\n");
    printf("\n");

    //Declara as variáveis
    int R[5], A[10];
    int tam = sizeof(R)/sizeof(int);
    int tam2 = sizeof(A)/sizeof(int);
    int pontos = 0;

    printf("Gabarito da LOTO: \n");

    //Preenche o vetor R os numeros sorteados, conforme informado pelo usuário
    for(int i = 0; i < tam; i++){
        printf("Digite o %d%c numero sorteado: ", i+1, 248);
        scanf("%d", &R[i]);
    }

    printf("\n");
    printf("Aposta do jogador: \n");

    //Preenche o vetor A com os numeros apostados, informados pelo usuário
    for(int i = 0; i < tam2; i++){
        printf("Digite o %d%c numero apostado: ", i+1, 248);
        scanf("%d", &A[i]);
    }

    //Realiza a comparação dos dois vetores, caso sejam iguais, realiza o incremento em pontos
    for(int i = 0; i < tam2; i++){
        for(int j = 0; j < tam; j++){
            if(A[i] == R[j]){
                pontos += 1;
            }

        }

    }
    printf("\nNumero total de acertos: %d\n", pontos);

}
