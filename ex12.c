#include <stdio.h>

  int main(){
//Declarando Variáveis
  float salario, resultado;
//Entrada
  printf("Digite o salaio do funcionario sem usar separador de milhar: ");
  scanf("%f", &salario);
//Processamento
    resultado = salario * 0.05;
//Saída
  printf("O total de imposto a ser pago ao IR seria: %.2f", resultado);
  return 0;
}

