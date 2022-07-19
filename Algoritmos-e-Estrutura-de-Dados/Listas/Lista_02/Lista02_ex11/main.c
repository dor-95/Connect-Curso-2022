#include <stdio.h>
#include <stdlib.h>

    /*11. Uma escola faz o pagamento de seus professores por hora/aula. Faça um algoritmo que solicite ao usuário, o
    nível do professor e a quantidade de horas/aula ele tem na semana. Em seguida, calcule e exiba o salário de
    um professor sabendo que a fórmula para o cálculo do salário é 𝑠𝑠𝑠𝑠𝑠𝑠 = 𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣𝑣 ∗ 𝑞𝑞𝑞𝑞𝑞𝑞𝑞𝑞𝑞𝑞𝑞𝑞𝑞𝑞 ∗ 4.5. O valor
    da hora/aula do professor é dado em função do seu nível:
        Professor Nível 1 R$12,00 por hora/aula
        Professor Nível 2 R$17,00 por hora/aula
        Professor Nível 3 R$25,00 por hora/aula*/

int main()
{
    printf("|=================================|\n");
    printf("|      LISTA 02 - EXERCICIO 11    |\n");
    printf("|=================================|\n");

    int nivel;
    float qtd_aula, salario;

    printf("Informe o nivel do professor (1 a 3): ");
    scanf("%d", &nivel);
    printf("Informe a quantidade de horas/aulas semanal: ");
    scanf("%f", &qtd_aula);

    if(nivel == 1){
        salario = 12 * qtd_aula * 4.5;
        printf("\nO salario do professor sera R$ %.2f\n", salario);
    } else if (nivel == 2) {
        salario = 17 * qtd_aula * 4.5;
        printf("\nO salario do professor sera R$ %.2f\n", salario);
    } else if (nivel == 3){
        salario = 25 * qtd_aula * 4.5;
        printf("\nO salario do professor sera R$ %.2f\n", salario);
    } else {
        printf("Opcao Invalida. Tente Novamente!");
    }
}
