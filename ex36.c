#include <stdio.h>

int main() {
//Declaração de variáveis
    float diaria_cheia, diaria_promocional, arrecadacao_100, arrecadacao_70, perda_promocao;
    int num_apartamentos;
//Entrada
    printf("Digite o numero total de apartamentos do hotel: ");
    scanf("%d", &num_apartamentos);
    printf("Digite o valor da diaria normal por apartamento: R$ ");
    scanf("%f", &diaria_cheia);
//Processamento
    diaria_promocional = diaria_cheia * 0.75f;
    arrecadacao_100 = num_apartamentos * diaria_promocional;
    arrecadacao_70 = (num_apartamentos * 0.70f) * diaria_promocional;
    perda_promocao = (diaria_cheia - diaria_promocional) * num_apartamentos;
//Saída
    printf("\n--- Resultados da Promocao de Final de Semana ---\n");
    printf("Valor promocional da diaria: R$ %.2f\n", diaria_promocional);
    printf("Arrecadacao total com 100%% de ocupacao: R$ %.2f\n", arrecadacao_100);
    printf("Arrecadacao total com 70%% de ocupacao: R$ %.2f\n", arrecadacao_70);
    printf("Valor nao arrecadado pela promocao (ocupacao 100%%): R$ %.2f\n", perda_promocao);

    return 0;
}
