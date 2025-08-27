#include <stdio.h>

int main() {
//Declaração de variáveis
    int ano_nascimento, ano_atual, idade_atual, idade_2028;
//Entrada
    printf("Digite o seu ano de nascimento: ");
    scanf("%d", &ano_nascimento);
    printf("Digite o ano atual: ");
    scanf("%d", &ano_atual);
//Processamento
    idade_atual = ano_atual - ano_nascimento;
    idade_2028 = 2028 - ano_nascimento;
//Saída
    printf("\nSua idade atual e: %d anos.\n", idade_atual);
    printf("Em 2028, voce tera: %d anos.\n", idade_2028);

    return 0;
}
