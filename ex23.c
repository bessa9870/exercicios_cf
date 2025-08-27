#include <stdio.h>

int main() {
// Declaração de variáveis
    int a, b, c;
    int auxiliar; // Variável extra para guardar um valor temporariamente
// Entrada
    printf("Digite o valor para a variavel A: ");
    scanf("%d", &a);
    printf("Digite o valor para a variavel B: ");
    scanf("%d", &b);
    printf("Digite o valor para a variavel C: ");
    scanf("%d", &c);
//Processamento
    printf("\n--- Antes da troca ---\n");
    printf("A = %d\n", a);
    printf("B = %d\n", b);
    printf("C = %d\n", c);
// Algoritmo de troca
    auxiliar = a;
    a = b;
    b = c;
    c = auxiliar;
//Saída
    printf("\n--- Depois da troca ---\n");
    printf("A = %d (recebeu o valor de B)\n", a);
    printf("B = %d (recebeu o valor de C)\n", b);
    printf("C = %d (recebeu o valor de A)\n", c);

    return 0;
}
