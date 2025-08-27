#include <stdio.h>

int main() {
//Declaração de variáveis
    int total_eleitores, votos_candidato1, votos_candidato2, votos_nulos;
    float perc_candidato1, perc_candidato2, perc_nulos;
//Entrada
    printf("Digite o numero total de eleitores: ");
    scanf("%d", &total_eleitores);
    printf("Digite o numero de votos do candidato 1: ");
    scanf("%d", &votos_candidato1);
    printf("Digite o numero de votos do candidato 2: ");
    scanf("%d", &votos_candidato2);
//Processamento
    votos_nulos = total_eleitores - votos_candidato1 - votos_candidato2;
    perc_candidato1 = ((float)votos_candidato1 / total_eleitores) * 100.0f;
    perc_candidato2 = ((float)votos_candidato2 / total_eleitores) * 100.0f;
    perc_nulos = ((float)votos_nulos / total_eleitores) * 100.0f;
//Saída
    printf("\n--- Resultado da Eleicao ---\n");
    printf("Percentual de votos do Candidato 1: %.2f%%\n", perc_candidato1);
    printf("Percentual de votos do Candidato 2: %.2f%%\n", perc_candidato2);
    printf("Percentual de votos nulos/abstencoes: %.2f%%\n", perc_nulos);

    return 0;
}
