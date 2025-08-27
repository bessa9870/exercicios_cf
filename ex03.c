#include <stdio.h>

int main()
{
//Declaração de variáveis
  float n1, n2, divisao;
//Entrada
  printf("Digite o dividendo aqui: ");
  scanf("%f",&n1);
  printf("Digite o divisor aqui: ");
  scanf("%f",&n2);
//Processamento
  divisao = n1/n2;
//Saída
  printf("%.f",divisao);
  return 0;
}
