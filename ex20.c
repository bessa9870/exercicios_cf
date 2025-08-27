#include <stdio.h>

int main() {
    //Declaração de variáveis
    int valor1, valor2, valor3;
    int somatorio;
    float media;
    //Entrada
    printf("Insira o primeiro valor inteiro (diferente de zero): ");
    scanf("%d", &valor1);
    printf("Insira o segundo valor inteiro (diferente de zero): ");
    scanf("%d", &valor2);
    printf("Insira o terceiro valor inteiro (diferente de zero): ");
    scanf("%d", &valor3);
    //Processamento
    somatorio = valor1 + valor2 + valor3;
    media = (float)somatorio / 3; //Pesquisei aqui e, aparentemente, isso transforma temporariamente int em float
    //Saída
    printf("O somatório dos valores seria: %d\n", somatorio);
    printf("A média entre os valores seria: %.2f\n", media);
    printf("\nResto da divisão do somatório por cada valor:\n");
    printf("Resto por %d = %d\n", valor1, somatorio % valor1);
    printf("Resto por %d = %d\n", valor2, somatorio % valor2);
    printf("Resto por %d = %d\n", valor3, somatorio % valor3);
    return 0;
}
