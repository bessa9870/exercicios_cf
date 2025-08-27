#include <stdio.h>

int main() {
//Declaração de variáveis
    float a, b, c, d, e, f, x, y, denominador;
//Entrada
    printf("Resolucao de um sistema de equacoes lineares:\n");
    printf("Equacao 1: ax + by = c\n");
    printf("Equacao 2: dx + ey = f\n\n");
    printf("Digite o coeficiente 'a': ");
    scanf("%f", &a);
    printf("Digite o coeficiente 'b': ");
    scanf("%f", &b);
    printf("Digite o termo independente 'c': ");
    scanf("%f", &c);
    printf("\nDigite o coeficiente 'd': ");
    scanf("%f", &d);
    printf("Digite o coeficiente 'e': ");
    scanf("%f", &e);
    printf("Digite o termo independente 'f': ");
    scanf("%f", &f);
//Processamento
    denominador = (a * e) - (b * d);
    x = (c * e - b * f) / denominador;
    y = (a * f - c * d) / denominador;
//Saída
    printf("A solucao para o sistema e:\n");
    printf("x = %.2f\n", x);
    printf("y = %.2f\n", y);

    return 0;
}

