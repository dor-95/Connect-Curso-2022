#include <stdio.h>
#include <stdlib.h>

int main() {

    printf("|=========|\n");
    printf("| LETRA B |\n");
    printf("|=========|\n");
    printf("\n");

    for(int lin = 0; lin < 8; lin++){
        for(int col = 0; col < 8; col++){
            if(col+lin <= 7){
                printf("# ");
            }
        }
        printf("\n");
    }
}
