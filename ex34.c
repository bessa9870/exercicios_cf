#include <stdio.h>
#include <math.h> // Necess�ria para a fun��o de arredondamento para cima (ceilf)

int main() {
//Declara��o de vari�veis
    float altura_degrau, altura_desejada;
    int degraus_necessarios;
//Entrada
    printf("Digite a altura de cada degrau (em cm): ");
    scanf("%f", &altura_degrau);
    printf("Digite a altura que deseja alcancar (em cm): ");
    scanf("%f", &altura_desejada);
//Processamento
    degraus_necessarios = (int)ceilf(altura_desejada / altura_degrau);
//Sa�da
    printf("\nPara atingir seu objetivo, voce devera subir %d degraus.\n", degraus_necessarios);

    return 0;
}
