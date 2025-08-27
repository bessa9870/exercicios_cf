#include <stdio.h>

int main()
{
//Declaração de variáveis
  float n1, n2, subtracao;
//Entrada
  printf("Digite o primeiro numero: ");
  scanf("%f",&n1);
  printf("Digite o segundo numero: ");
  scanf("%f",&n2);
//Processamento
  subtracao = n1 - n2;
//Saída
  printf("O resultado:%f",subtracao);
  return 0;
}
