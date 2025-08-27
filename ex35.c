#include <stdio.h>

int main() {
//Declaração de variáveis
    float peso, altura, imc;
//Entrada
    printf("Digite o seu peso em quilogramas (ex: 75.5): ");
    scanf("%f", &peso);
    printf("Digite a sua altura em metros (ex: 1.78): ");
    scanf("%f", &altura);
//Processamento
    imc = peso / (altura * altura);
//Saída
    printf("\nO seu Indice de Massa Corporea (IMC) e: %.2f\n", imc);

    return 0;
}
