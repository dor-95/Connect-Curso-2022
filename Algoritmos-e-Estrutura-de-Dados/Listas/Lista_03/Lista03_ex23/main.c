#include <stdio.h>
#include <stdlib.h>

int main() {

    int qtdCasasParticipantes, canalAssistido, qtdPessoasAssistindo, totalPessoas = 0;
    int canal3 = 0, canal5 = 0, canal8 = 0, canal11 = 0, canal13 = 0;

    for(int i = 0; i < qtdCasasParticipantes; i++){

        system("cls");

        printf("||=====================================||\n");
        printf("||         LISTA 03  -  EX 23          ||\n");
        printf("||=====================================||\n");
        printf("||          PESQUISA EMISSORAS         ||\n");
        printf("||=====================================||\n");
        printf("||  N%c   ||  CANAL  ||   ESPECTADORES  ||\n", 248);
        printf("||=====================================||\n");
        printf("||   3   ||   AAA   ||        %d       \n", canal3);
        printf("||   5   ||   BBB   ||        %d       \n", canal5);
        printf("||   8   ||   CCC   ||        %d       \n", canal8);
        printf("||  11   ||   DDD   ||        %d       \n", canal11);
        printf("||  13   ||   EEE   ||        %d       \n", canal13);
        printf("||=====================================||\n");

        if (i == 0){
            printf("\nNUMERO DE CASAS PARTICIPANTES DA PESQUISA: ");
            scanf("%d", &qtdCasasParticipantes);
        }

        if (qtdCasasParticipantes > 0){
            printf("\nDIGITE O NUMERO DO CANAL DA CASA #%d: ", i+1);
            scanf("%d", &canalAssistido);

            if((canalAssistido == 3)||(canalAssistido == 5)||(canalAssistido == 8)||(canalAssistido == 11)||(canalAssistido == 13)){
                printf("\nQUANTIDADE DE PESSOAS ASSISTINDO: ");
                scanf("%d", &qtdPessoasAssistindo);
            }

            switch(canalAssistido){
                case 3:
                    canal3 += qtdPessoasAssistindo;
                    totalPessoas += qtdPessoasAssistindo;
                    break;
                case 5:
                    canal5 += qtdPessoasAssistindo;
                    totalPessoas += qtdPessoasAssistindo;
                    break;
                case 8:
                    canal8 += qtdPessoasAssistindo;
                    totalPessoas += qtdPessoasAssistindo;
                    break;
                case 11:
                    canal11 += qtdPessoasAssistindo;
                    totalPessoas += qtdPessoasAssistindo;
                    break;
                case 13:
                    canal13 += qtdPessoasAssistindo;
                    totalPessoas += qtdPessoasAssistindo;
                    break;
                default:
                    system("cls");
                    printf("ATENCAO! CANAL INVALIDO. VERIFIQUE O NUMERO DO CANAL PARTICIPANTE DA PESQUISA.\n");
                    system("pause");
                    i--;
            }
        } else {
            system("cls");
            printf("PESQUISA FINALIZADA!\n");
        }
    }

        if(qtdCasasParticipantes > 0){
            system("cls");

            printf("||=====================================||\n");
            printf("||         LISTA 03  -  EX 23          ||\n");
            printf("||=====================================||\n");
            printf("||          PESQUISA EMISSORAS         ||\n");
            printf("||=====================================||\n");
            printf("||  N%c   ||  CANAL  ||   ESPECTADORES  ||\n", 248);
            printf("||=====================================||\n");
            printf("||   3   ||   AAA   ||        %d       \n", canal3);
            printf("||   5   ||   BBB   ||        %d       \n", canal5);
            printf("||   8   ||   CCC   ||        %d       \n", canal8);
            printf("||  11   ||   DDD   ||        %d       \n", canal11);
            printf("||  13   ||   EEE   ||        %d       \n", canal13);
            printf("||=====================================||\n");
            printf("||       AUDIENCIA EM PORCENTAGEM      ||\n");
            printf("||=====================================||\n");
            printf("||            CANAL 3 - %.2f%c\n", canal3*100.00/totalPessoas, 37);
            printf("||            CANAL 5 - %.2f%c\n", canal5*100.00/totalPessoas, 37);
            printf("||            CANAL 8 - %.2f%c\n", canal8*100.00/totalPessoas, 37);
            printf("||            CANAL 11 - %.2f%c\n", canal11*100.00/totalPessoas, 37);
            printf("||            CANAL 13 - %.2f%c\n", canal13*100.00/totalPessoas, 37);
            printf("||=====================================||\n");

    }

}
