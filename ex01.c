#include <stdio.h>

int main (){
//Declaração de variáveis
  int n1, n2, soma;
//Entrada
  printf("Primeiro numero:");
  scanf("%d",&n1);
  printf("Segundo numero:");
  scanf("%d",&n2);
//Processamento
  soma = n1 + n2;
//Saída
  printf("Resultado:%d",soma);
  return 0;
}
