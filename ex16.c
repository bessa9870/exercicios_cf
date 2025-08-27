#include <stdio.h>

int main(){
//Declarando variávies
  int ano_nasc, idade, ano_atual;
  float idade_se;
//Entrada
  printf("Digite o ano que voce nasceu :");
  scanf("%i",&ano_nasc);
  printf("Digite o ano atual:");
  scanf("%i", &ano_atual);
//Processamento
  idade = ano_atual - ano_nasc;
//Saída
  printf("Sua idade seria:%i\n", idade);
//Processamento dnv
  idade_se = 365 / 7 * idade;
//Saída dnv
  printf("Sua idade em semanas: %f", idade_se);
  return 0;
}



