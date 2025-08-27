#include <stdio.h>

int main() {
//Declaração de variáveis
    float celsius, fahrenheit;
//Entrada
    printf("Digite a temperatura em graus Celsius (C): ");
    scanf("%f", &celsius);
//Processamento
    fahrenheit = (9 * celsius + 160) / 5.0f;
//Saída
    printf("A temperatura de %.1f C equivale a %.1f F.\n", celsius, fahrenheit);

    return 0;
}
