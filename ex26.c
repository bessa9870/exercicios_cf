#include <stdio.h>

int main() {
    //Declaração de variáveis
    float distancia_km, velocidade_kmh, tempo_decimal, velocidade_ms;
    int horas, minutos;
    //Entrada
    printf("Digite a distancia entre os dois pontos (em KM): ");
    scanf("%f", &distancia_km);
    printf("Digite a velocidade media do percurso (em km/h): ");
    scanf("%f", &velocidade_kmh);
    //Processamento
    tempo_decimal = distancia_km / velocidade_kmh;
    horas = (int)tempo_decimal;
    minutos = (int)((tempo_decimal - horas) * 60);
    velocidade_ms = velocidade_kmh / 3.6f;
    //Saída
    printf("O tempo medio de chegada sera de: %d hora(s) e %d minuto(s).\n", horas, minutos);
    printf("A velocidade de %.2f km/h equivale a %.2f m/s.\n", velocidade_kmh, velocidade_ms);

    return 0;
}
