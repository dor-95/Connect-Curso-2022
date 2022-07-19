#include <stdio.h>
#include <stdlib.h>

int main() {

    printf("|=========|\n");
    printf("| LETRA A |\n");
    printf("|=========|\n");
    printf("\n");

    for(int lin = 0; lin < 8; lin++){
        for(int col = 0; lin >= col; col++){
            printf("# ", col, lin);
        }
        printf("\n");
    }
}
