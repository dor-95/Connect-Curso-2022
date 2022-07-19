#include <stdio.h>
#include <stdlib.h>

int main() {

    printf("|=========|\n");
    printf("| LETRA D |\n");
    printf("|=========|\n");
    printf("\n");

    for(int col = 0; col < 8; col++){
        for(int lin = 0; lin < 8; lin++){
            if(lin+col < 7){
                printf("  ");
            } else{
                printf("# ");
            }
        }
        printf("\n");
    }
}
