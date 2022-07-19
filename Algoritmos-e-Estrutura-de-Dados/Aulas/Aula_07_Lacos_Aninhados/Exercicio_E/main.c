#include <stdio.h>
#include <stdlib.h>

int main() {

    printf("|=========|\n");
    printf("| LETRA E |\n");
    printf("|=========|\n");
    printf("\n");

    for(int col = 0; col < 7; col++){
        for(int lin = 0; lin < 7; lin++){
            if(col == 0 || col == 6 || lin == 6 || lin == 0){
                printf("# ");
            } else{
                printf("  ");
            }
        }
        printf("\n");
    }
}
