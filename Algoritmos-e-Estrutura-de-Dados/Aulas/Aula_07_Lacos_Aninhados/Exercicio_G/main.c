#include <stdio.h>
#include <stdlib.h>

int main() {

    printf("|=========|\n");
    printf("| LETRA G |\n");
    printf("|=========|\n");
    printf("\n");

    for(int lin = 0; lin < 7; lin++){
        for(int col = 0; col < 7; col++){
            if(lin == 0 || lin == 6 || lin+col == 6){
                printf("# ");
            } else{
                printf("  ");
            }
        }
        printf("\n");
    }
}
