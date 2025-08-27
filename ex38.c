#include <stdio.h>

int main() {
//Declaração de variáveis
    float tempo_viagem, velocidade_media, distancia_percorrida, litros_gastos;
//Entrada
    printf("Digite o tempo gasto na viagem (em horas): ");
    scanf("%f", &tempo_viagem);
    printf("Digite a velocidade media durante a viagem (em km/h): ");
    scanf("%f", &velocidade_media);
//Processamento
    distancia_percorrida = tempo_viagem * velocidade_media;
    litros_gastos = distancia_percorrida / 12.0f;
//Saída
    printf("\n--- Relatorio da Viagem ---\n");
    printf("Distancia percorrida: %.2f km\n", distancia_percorrida);
    printf("Combustivel necessario: %.2f litros\n", litros_gastos);

    return 0;
}
