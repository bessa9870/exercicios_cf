#include <stdio.h>

int main()
{
  float n1, n2, subtracao;
  printf("Digite o primeiro numero: ");
  scanf("%f",&n1);
  printf("Digite o segundo numero: ");
  scanf("%f",&n2);
  subtracao = n1 - n2;
  printf("O resultado:%f",subtracao);
  return 0;
}
