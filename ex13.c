#include <math.h>

int main(){
//Declarando Variáveis
  float salario, valor_acrescimo;
  printf("Salario aqui: ");
  scanf("%f", &salario);
//Processamento
  valor_acrescimo = (salario * 0.25) + salario;
//Saída
  printf("Seu salario com acresscimo seria: %.2f", valor_acrescimo);
  return 0;
}

