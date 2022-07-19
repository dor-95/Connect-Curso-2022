#include <stdio.h>
#include <stdlib.h>

    /*Exercicio 00*/

int main() {


    for(int lin = 0; lin < 8; lin++){
        for(int col = 0; col < 8; col++){
            printf("[%d, %d]", lin, col);
        }
        printf("\n");
    }

}
